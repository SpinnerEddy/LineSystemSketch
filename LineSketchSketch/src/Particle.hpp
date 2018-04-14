//
//  Particle.hpp
//  LineSketchSketch
//
//  Created by 山下希流 on 2018/04/14.
//

#ifndef Particle_hpp
#define Particle_hpp

#include <stdio.h>
#include "ofMain.h"

class Particle{
protected:
    ofVec2f position;
    ofVec2f velocity;
    ofVec2f acceleration;
    ofColor c;
    float radius;
    float angle;
    float mass;
    float lifeSpan;
    float range;
    float aVelocity;
public:
    Particle();
    Particle(float x,float y);
    Particle(float x,float y,float h);
    void update();
    void updateCircular();
    virtual void display();
    void connect(vector<Particle*> ps);
    bool isDead();
    void applyForce(ofVec2f force);
    ofVec2f getPosition();
    ofColor getColor();
    float getLifeSpan();
};
#endif /* Particle_hpp */
