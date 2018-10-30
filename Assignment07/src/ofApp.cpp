#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
    grabber.setup(640, 480);
    grabberPix.allocate(grabber.getWidth(), grabber.getHeight(), OF_PIXELS_RGB);
    
    ofLoadImage(myTex, "white.png");
}

//--------------------------------------------------------------
void ofApp::update()
{
    grabber.update();
    
    if (grabber.isFrameNew())
    {
        grabberPix = grabber.getPixels();
    }
}

//--------------------------------------------------------------
void ofApp::draw()
{
    ofBackground(0);
    
    for (int x = 0; x< grabberPix.getWidth(); x += 25)
    {
        for (int y = 0; y < grabberPix.getHeight(); y += 25)
        {
            ofColor pixelColor = grabberPix.getColor(x, y);
            float brightness = pixelColor.getBrightness();
            float hue = pixelColor.getHue();
            float hueang = pixelColor.getHueAngle();

            
            float whiteSize = ofMap(brightness, 0, 255, 0, 90);
//            ofMap(<#float value#>, <#float inputMin#>, <#float inputMax#>, <#float outputMin#>, <#float outputMax#>)
            float whiteSizeTwo = ofMap(hue, 0, 360, 0, 100);
            
            ofSetColor(pixelColor);
            ofSetLineWidth(whiteSize);
            
            ofPushMatrix();
            ofTranslate(ofGetWidth()/2 + grabber.getWidth()/2, ofGetHeight()/2 - grabber.getWidth()/2);
            ofScale(-1, 1, 1);

            ofTranslate(x, y);
            ofRotateZDeg(d);
            myTex.draw(0, 0, whiteSize, whiteSize);
            
            ofPopMatrix();
        }
    }
    
    d += 0.2 * rotationDirection;
    if (d > 10 or d < -10 )
    {
        
        rotationDirection *= -1;
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
