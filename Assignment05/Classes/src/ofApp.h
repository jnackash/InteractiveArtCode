#pragma once

#include "ofMain.h"
#include "Figure.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
//        ofImage img1;
//        ofImage img2;
//        ofImage img3;
//        ofImage img4;
//        ofImage img5;
//
//        std::vector<ofImage>images;
//
//
//        void drawPointsSimple(std::vector<glm::vec2> points);
//        void drawPointsConnected(std::vector<glm::vec2> points);
//
//        ofTrueTypeFont font;
//
//        ofFbo mask;
//        ofPixels pix;
//
//        const unsigned int NUM_POINTS = 5000;
//        // std::vector<glm::vec2> points;
    
    std::vector<Figure> figures;
    
    const int NUM_FIGURES = 1;
    
    
};
