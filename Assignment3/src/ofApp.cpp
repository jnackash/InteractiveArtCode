#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(ofColor::black);
    ofSetBackgroundAuto(false);
    
    ofEnableAlphaBlending();

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
  
    
    if(ofGetMousePressed(OF_MOUSE_BUTTON_LEFT))
    {
     
        int maxRadius = 15;
        int radiusStepSize = 30;
        int alpha = 30;
        int maxOffsetDistance = 50;
        
        for (int radius=maxRadius; radius>0; radius-=radiusStepSize) {
            float angle = ofRandom(ofDegToRad(360.0));
            float distance = ofRandom(maxOffsetDistance);
            float xOffset = ofNoise(angle) * distance;
            float yOffset = ofNoise(angle) * distance;
            ofColor d = ofColor(ofRandom(255), ofRandom(255), ofRandom(255), ofRandom(255));
            ofSetColor(d);
            ofNoFill();
            ofDrawCircle(ofGetMouseX()+xOffset, ofGetMouseY()+yOffset, radius);
        }
    }
    
    
    if(ofGetMousePressed(OF_MOUSE_BUTTON_RIGHT))
    {
        ofClear(0);
    }
    
    ofSetColor(255);
    
    ofDrawBitmapString("left mouse click to draw", 50, 25);
    ofDrawBitmapString("1-9 controls shape", 50, 50);
    ofDrawBitmapString("qwerty controls line width", 50, 75);
    ofDrawBitmapString("right mouse click to clear", 50, 100);
    ofDrawBitmapString("s to save image", 50, 125);


}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    if(key == ' ')
    {
        ofSetLineWidth(ofRandom(10));
    }
    
    if(key == 'q')
    {
        ofSetLineWidth(1);
    }
    
    if(key == 'w')
    {
        ofSetLineWidth(2);
    }
    
    if(key == 'e')
    {
        ofSetLineWidth(3);
    }
    
    if(key == 'r')
    {
        ofSetLineWidth(4);
    }
    
    if(key == 't')
    {
        ofSetLineWidth(5);
    }
    
    if(key == 'y')
    {
        ofSetLineWidth(6);
    }
    
    if (key == 's')
    {
        ofSaveScreen("screenShot_"+ofGetTimestampString()+".png");
        std::cout<<"saved! good work :-)"<<std::endl;
    }
  
    if(key == '1')
    {
        ofSetCircleResolution(40);
    }
    
    if(key == '2')
    {
        ofSetCircleResolution(2);
    }
    
    if(key == '3')
    {
        ofSetCircleResolution(3);
    }
    
    if(key == '4')
    {
        ofSetCircleResolution(4);
    }
    
    if(key == '5')
    {
        ofSetCircleResolution(5);
    }
    
    if(key == '6')
    {
        ofSetCircleResolution(6);
    }
    
    if(key == '7')
    {
        ofSetCircleResolution(7);
    }

    if(key == '8')
    {
        ofSetCircleResolution(8);
    }
    
    if(key == '9')
    {
        ofSetCircleResolution(9);
    }
    
    
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
