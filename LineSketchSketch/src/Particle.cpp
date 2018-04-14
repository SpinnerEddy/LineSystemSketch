//
//  Particle.cpp
//  LineSketchSketch
//
//  Created by 山下希流 on 2018/04/14.
//

#include "Particle.hpp"

Particle::Particle(){
    
}

Particle::Particle(float x,float y){
    this->direct = ofRandom(TWO_PI);
    this->position.set(x,y);
//    this->velocity.set(ofRandom(-2,2),ofRandom(-2,2));
    this->velocity.set(cos(this->direct),sin(this->direct));
    this->velocity *= 15;
    this->acceleration.set(0,0);
    this->c.setHsb(ofRandom(255), 255, 255);
    this->angle = 0;
    this->aVelocity = 0.2f;
    this->range = 2;
    this->radius = ofRandom(10,40);
    this->mass = 1;
    this->lifeSpan = 255;
    this->aVelocity = this->velocity.x / 20;
}

Particle::Particle(float x,float y,float h){
    this->position.set(x,y);
    this->velocity.set(ofRandom(-2,2),ofRandom(-2,2));
    this->acceleration.set(0,0);
    this->c.setHsb(h, 255, 255);
    this->angle = 0;
    this->radius = ofRandom(10,40);
    this->mass = 1;
    this->lifeSpan = 255;
    this->aVelocity = this->velocity.x / 20;
}

void Particle::update(){
    this->velocity += this->acceleration;
    this->position += this->velocity;
    this->acceleration *= 0;
    this->lifeSpan -= 2.5;
    this->angle += this->aVelocity;
}

void Particle::updateCircular(){
    this->position.x = range * cos(angle);
    this->position.y = range * sin(angle);
}

void Particle::applyForce(ofVec2f force){
    ofVec2f f = force / this->mass;
    this->acceleration += f;
}

void Particle::display(){
    ofSetColor(this->c,this->lifeSpan);
    ofNoFill();
    ofDrawEllipse(this->position.x,this->position.y,this->radius,this->radius);
}

void Particle::connect(vector<Particle*> ps){
    for(int i = ps.size()-1; i >= 0; i--){
        if(typeid(this) == typeid(ps[i]) && this != ps[i]){
            float d = ofDist(this->position.x, this->position.y,
                             ps[i]->getPosition().x, ps[i]->getPosition().y);
            if(d < 80){
                ofSetColor(this->c,this->lifeSpan);
                ofDrawLine(this->position.x, this->position.y,
                           ps[i]->getPosition().x, ps[i]->getPosition().y);
            }
        }
    }
}

bool Particle::isDead(){
    if(lifeSpan <= 0){
        return true;
    }
    return false;
}

ofVec2f Particle::getPosition(){
    return position;
}

ofColor Particle::getColor(){
    return c;
}

float Particle::getLifeSpan(){
    return lifeSpan;
}
