#pragma once

#include "ofMain.h"

class Figure {
public:
        Figure(std::string path, float x, float y); //this is a constructor
        ~Figure(); // this is a destructor
    
//    void setup();
    void update();
    void draw();
    
    ofImage img;
    
//        std::vector<ofImage>images;
    
    
        void drawPointsSimple(std::vector<glm::vec2> points);
        void drawPointsConnected(std::vector<glm::vec2> points);
    
    
        ofFbo mask;
        ofPixels pix;
    
        const unsigned int NUM_POINTS = 100;
        // std::vector<glm::vec2> points;
    
    float randomSeed = ofRandom(100); //the ofSeedRandom in update()
    
    float xPos = 50;
    float yPos = 50;
    
    
};
