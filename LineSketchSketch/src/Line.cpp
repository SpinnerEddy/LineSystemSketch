//
//  Line.cpp
//  LineSketchSketch
//
//  Created by 山下希流 on 2018/04/14.
//

#include "Line.hpp"

Line::Line(float x,float y){
//    this->center = new ofVec2f(x,y);
    this->particle1 = new Particle(x,y);
    this->particle2 = new Particle(x,y);
    float hue = (this->particle1->getColor().getHue() + this->particle2->getColor().getHue())/2;
    this->lineColor.setHsb(hue, 255, 255);
    this->lifeSpan = 255;
}

Line::~Line(){
    delete this->particle1;
    delete this->particle2;
}

void Line::update(){
    this->particle1->update();
    this->particle2->update();
    this->lifeSpan -= 2.5;
}

void Line::display(){
//    this->particle1->display();
//    this->particle2->display();
    ofVec2f pos1 = this->particle1->getPosition();
    ofVec2f pos2 = this->particle2->getPosition();
    ofSetColor(this->lineColor,this->lifeSpan);
    ofDrawLine(pos1.x,pos1.y,pos2.x,pos2.y);
}

bool Line::isDead(){
    if(this->lifeSpan <= 0){
        return true;
    }
    return false;
}
