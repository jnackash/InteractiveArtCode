#include "Particle.h"

Particle::Particle()
{
    pos = {0, 0, 0};
    vel = {0, 0, 0};
    accel = {0, 0, 0};
    
    size = 0;
    color = ofColor::white;
//    color = ofSetColor(0, ofRandom(250), ofRandom(220), 50);
    

}

void Particle::update()
{
    
    vel = vel + accel;
//    vel = vel * drag;
    pos = pos + vel;
}

