#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw()
{
    
    ofBackground(45);
    float w = ofGetWidth();
    float h = ofGetHeight();
    float x = ofGetMouseX();
    float y = ofGetMouseY();
    
    
    ofSetRectMode(OF_RECTMODE_CENTER);
    
    // HEAD /////////////////////////
    ofSetColor(ofColor::whiteSmoke);
    ofDrawEllipse(x, y, w/2.5, w/2);
    
    // EYES /////////////////////////
    ofFill();
    
    ofSetColor(ofColor::black);
    ofDrawRectangle( x - 50, y - 100, 50, 50);
    
    ofSetColor(ofColor::black);
    ofDrawEllipse( x + 50, y - 100, 50, 50);
    
    
    // NOSE /////////////////////////
    
    ofSetColor(ofColor::black);
    ofDrawEllipse(x, y, 20, 100);
    
    // MOUTH ////////////////////////
    
    ofSetColor(ofColor::crimson);
    ofSetLineWidth(3);
    //    ofDrawRectangle(x, y + 100, 120, 15);
    curvedSegmentPolyline.draw();
    
    ofSetCircleResolution(50);
    curvedSegmentPolyline.curveTo(x-60, y + 120);
    curvedSegmentPolyline.curveTo(x-60, y + 120);
    curvedSegmentPolyline.curveTo(x, y+80);
    curvedSegmentPolyline.curveTo(x + 60, y + 120);
    curvedSegmentPolyline.curveTo(x + 60, y + 120);
    
    
    // HAIR ///////////////////////
    
    //    for ( int i = 0; i < 100; i+=10 )
    //    {
    //        ofDrawLine(x+i, y+50, x+i, y+150);
    //    }

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
