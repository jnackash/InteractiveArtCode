#include "ofApp.h"

void ofApp::setup()
{
    ofEnableAlphaBlending();

    ofBackground(0);
    ofEnableBlendMode(OF_BLENDMODE_ADD);
    
    
    for ( int i=0; i < 2000; i++)
    {
        Particle p; //creating an empty particle, a temporary one.
        
        //put some values into p
//        p.pos = {ofGetWidth()/2, ofGetHeight()/2, 0};
        p.pos = {ofGetMouseX(), ofGetMouseY(), 0};
        p.vel = {ofRandom(2, 30), ofRandom(2, 30), 0};
        p.accel = {0, 0.2, 0};
        p.size = ofRandom(0.5, 2);
        p.drag = 0.001;
        p.color = ofColor::darkGreen;
        
        particles.push_back(p);
    }
    
}

//--------------------------------------------------------------
void ofApp::update()
{
    for (auto & p : particles)
    {
        if(p.pos.x > ofGetWidth() || p.pos.x < 0)
        {
            p.pos = {ofGetMouseX(), ofGetMouseY(), 0};
            p.vel = {ofRandom(-2, 2), ofRandom(-6, -10), 0};
        }
        
        if(p.pos.y > ofGetHeight())
        {
            p.pos = {ofGetMouseX(), ofGetMouseY(), 0};
            p.vel = {ofRandom(-2, 2), ofRandom(-6, -10), 0};
        }
        
        p.update();
    }
}

//--------------------------------------------------------------
void ofApp::draw()
{
    for (auto & p : particles)
    {
        ofSetColor(p.color);
        ofDrawCircle(p.pos, p.size);
    }

}

//--------------------------------------------------------------

void ofApp::keyPressed(int key)
{
    if (key == ' ')
    {
        Particle p;
        p.pos = {ofGetMouseX(), ofGetMouseY(), 0};
        p.vel = {ofRandom(-2, 2), ofRandom(-8, -2), 0};
        p.accel = {0, 0.01, 0};
        p.size = ofRandom(2, 6);
        p.drag = 0.05;
        p.color = ofColor::fromHsb(ofRandom(50), 150, 255);
        
        particles.push_back(p);

    }
    
    if (key == 'c')
    {
        Particle p;
        particles.clear();
    }


    
}
