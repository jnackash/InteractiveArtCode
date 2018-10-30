#pragma once

#include "ofMain.h"

class Particle
{

	public:
    
    //constructor
    Particle();
    
    

    //defining our variables
    
    //position
    glm::vec3 pos;
    
    //velocity
    glm::vec3 vel;
    
    //acceleration
    glm::vec3 accel;
    
    //drag
    float drag;
    
    //size
    float size;
    
    //color
    ofColor color;
    
    
    
    //functions
    void setup();
    void update();
    void draw();

    
		
};
