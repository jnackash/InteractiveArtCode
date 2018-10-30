#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(30);

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofBackground (0);
    
    //trapezoid (x1, y1, x2, y2)
    ofDrawLine(200, 400, 400, 200); //left line
    ofDrawLine(600, 200, 800, 400); // right line
    ofDrawLine(400, 200, 600, 200); //top line
    ofDrawLine(200, 400, 800, 400); //bottom line
    
    int LineWidth = ofRandom(6);
    ofSetLineWidth(LineWidth);
    
    ofNoFill();
    ofSetColor(ofColor::white);
    
    ofDrawRectangle(400, 200, 200, 200);
    
    for (int i = 1; i < 10; ++i)
    {
        // (x1, y1, x2, y2)
        ofDrawLine(600 + i*20, 200 + i*20, 600 + i*20, 400); // right lines
        ofDrawLine(200 + i*20, 400 - i*20, 200 + i*20, 400); // left lines
        ofDrawLine(400, 200 + i*20, 600, 200 + i*20); // horizontal lines
        
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
