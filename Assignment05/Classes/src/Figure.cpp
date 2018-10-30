#include "Figure.h"

//--------------------------------------------------------------
Figure::Figure(std::string path, float x, float y)
{
    //this is our constructor
    //we give default values to our Ball object when it's created
    //we have to go through all of the values from the Ball.h file and set them.
    
    this->xPos = x;
    this->yPos = y;
    
    this->img.load(path);
 
    this->mask.allocate(ofGetWidth(), ofGetHeight());
    
    this->mask.begin();
    ofClear(0);
    
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofSetColor(255);
    this->img.draw(this->xPos, this->yPos, 250, 250);
    
    //    font.drawString(text, font.stringWidth(text) * -0.57, font.stringHeight(text) * 0.5);
    
    this->mask.end();
    
    this->mask.readToPixels(this->pix);
    
    std::cout << path << std::endl;

    
//    c = ofColor::fromHsb(ofRandom(255), 255, 255);
    
}

Figure::~Figure() {
}



//--------------------------------------------------------------
void Figure::update()
{
    ofSeedRandom(randomSeed);
}

//--------------------------------------------------------------
void Figure::draw(){
    
//    images[0].draw(0, 0, 200, 200);
//    images[1].draw(200, 0, 200, 200);
    
    ofBackground(0);
    
    std::vector<glm::vec2> setPoints;
    while (setPoints.size() < NUM_POINTS)
    {
        // get a random point of the  pixel mask
        // test if the mask is balck or white
        // if it is black, add that point to our setPoints array
        
//        std::cout << setPoints.size() << std::endl;
        

        ofColor pixelColor = this->pix.getColor(this->xPos, this->yPos);
        
//        std::cout << pixelColor << std::endl;

        
        if (pixelColor == ofColor(255, 255, 255, 255))
        {
            // before we add it, lets change the position a little
            // with noise
            
            float time = ofGetElapsedTimef();
            float scale = 20;
            
            float noiseX = ofNoise(ofRandom(NUM_POINTS), time * 0.01);
            float noiseY = ofNoise(ofRandom(NUM_POINTS), time * 0.01);
            
            float xOff = ofMap(noiseX, 0, 1, -scale, scale);
            float yOff = ofMap(noiseY, 0, 1, -scale, scale);
            
            this->xPos += xOff;
            this->yPos += yOff;
            
            setPoints.push_back(glm::vec2(xPos, yPos));
        }
    }
    
    this->mask.draw(0, 0);
    drawPointsSimple(setPoints);
    drawPointsConnected(setPoints);

    
}

void Figure::drawPointsSimple(std::vector<glm::vec2> points)
{
    for (auto point : points)
    {
        ofPushStyle();
        ofSetColor(ofColor::white);
        ofNoFill();
        ofDrawCircle(point, 0);
        ofPopStyle();
    }
}

void Figure::drawPointsConnected(std::vector<glm::vec2> points)
{
    
    // drawing line between a point and every other point within a certian distance
    float distThresh = 5;
    
    for (int i = 0; i < points.size(); i++)
    {
        glm::vec2 point = points[i];
        
        
        float hue = ofMap(i, 0, points.size(), 0, 255);
        
        for (int j = 0; j < points.size(); j++)
        {
            glm::vec2 otherPoint = points[j];
            
            float dist = glm::distance(point, otherPoint);
            
            if (dist > 1 and dist < distThresh)
            {
                ofSetColor(ofColor::fromHsb(hue, 100, 255, 50));
                ofDrawLine(point, otherPoint);
            }
        }
    }
}


//--------------------------------------------------------------
