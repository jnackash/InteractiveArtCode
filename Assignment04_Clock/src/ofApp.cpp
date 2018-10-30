#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofBackground(0);
    
    int seconds = ofGetSeconds();
    int minutes = ofGetMinutes();
    int hours = ofGetHours();
    int days = ofGetDay();
    int months = ofGetMonth();
    
    string sah = ofGetTimestampString();
    
    std::cout << 365-days << std::endl;


//    ofMap(<#float value#>, <#float inputMin#>, <#float inputMax#>, <#float outputMin#>, <#float outputMax#>)
    
    float time = ofGetElapsedTimef(); // get the time
    float freq = ofMap(ofGetMouseX(), 0, ofGetWidth(), 0, 1); // get speed of our sine wave
    
    //-------------MONTHS-----------------

    for (int i = 0; i < 800; i++)
    {
        float freqi = ofMap(months, 0, ofGetWidth(), 0, 1);
        //sineValue is a function of: 1. time, 2. our freq, 3. our "index"(-how many loops we're going through
        float sineValue = sin(time * freqi * i);
        
        
        float yPos = ofMap(sineValue, -1, 1, 0, ofGetHeight()); // map sine values to height of screen
        float hue = ofMap(sineValue, -1, 1, 0, 255); // map sineValue to hue
        
//        ofSetColor(ofColor::fromHsb(hue, 255, 255));
        ofSetColor(0);
        ofFill();
        ofSetLineWidth(1);
        ofDrawLine(i*8, yPos, i*8+20, yPos);
    }
    
//    -------------DAYS-----------------


    for (int i = 0; i < 800; i++)
    {
        float freqi = ofMap(days, 0, ofGetWidth(), 0, 1);

        //sineValue is a function of: 1. time, 2. our freq, 3. our "index"(-how many loops we're going through
        float sineValue = sin(time * freqi * i);

        float yPos = ofMap(sineValue, -1, 1, 0, ofGetHeight()); // map sine values to height of screen
        float hue = ofMap(sineValue, -1, 1, 0, 255); // map sineValue to hue

        ofSetColor(255);
        ofFill();
        ofSetLineWidth(1);
        ofDrawLine(i*8+10, yPos-10, i*8+10, yPos+10);
    }


    //-------------HOURS-----------------


    for (int i = 0; i < 800; i++)
    {
        float freqi = ofMap(hours, 0, ofGetWidth(), 0, 1);
        //sineValue is a function of: 1. time, 2. our freq, 3. our "index"(-how many loops we're going through
        float sineValue = sin(time * freqi * i);

        float yPos = ofMap(sineValue, -1, 1, 0, ofGetHeight()); // map sine values to height of screen
        float hue = ofMap(sineValue, -1, 1, 0, 255); // map sineValue to hue

        ofSetColor(255);
        ofFill();
        ofSetLineWidth(1);
        ofDrawLine(i*8, (yPos-10), i*8+20, yPos+10);
    }

    //-------------MINUTES-----------------

    for (int i = 0; i < 800; i++)
    {
        float freqi = ofMap(minutes, 0, ofGetWidth(), 0, 1);
        //sineValue is a function of: 1. time, 2. our freq, 3. our "index"(-how many loops we're going through
        float sineValue = sin(time * freqi * i);

        float yPos = ofMap(sineValue, -1, 1, 0, ofGetHeight()); // map sine values to height of screen
        float hue = ofMap(sineValue, -1, 1, 0, 255); // map sineValue to hue

        ofSetColor(255);
        ofFill();
        ofSetLineWidth(1);
        ofDrawLine(i*8+20, yPos-10, i*8, yPos+10);
    }

    
    //-------------SECONDS-----------------
    
    for (int i = 0; i < 800; i++)
    {
        float freqi = ofMap(seconds, 0, ofGetWidth(), 0, 1);
        //sineValue is a function of: 1. time, 2. our freq, 3. our "index"(-how many loops we're going through
        float sineValue = sin(time * freqi * i);
        
        float yPos = ofMap(sineValue, -1, 1, 0, ofGetHeight()); // map sine values to height of screen
        float hue = ofMap(sineValue, -1, 1, 0, 255); // map sineValue to hue
        
        ofSetColor(255);
        ofNoFill();
        ofSetLineWidth(1);
        ofDrawCircle(i*8+10, yPos, 8);
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
