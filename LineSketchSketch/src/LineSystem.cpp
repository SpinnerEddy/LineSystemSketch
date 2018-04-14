//
//  LineSystem.cpp
//  LineSketchSketch
//
//  Created by 山下希流 on 2018/04/15.
//

#include "LineSystem.hpp"

LineSystem::LineSystem(float x,float y){
    this->origin.set(x,y);
}

LineSystem::~LineSystem(){
    
}

void LineSystem::update(){
    for(int i = this->lines.size()-1; i >= 0; i--){
        this->lines[i]->update();
        if(this->lines[i]->isDead()){
            delete this->lines[i];
            this->lines.erase(this->lines.begin()+i);
        }
    }
}

void LineSystem::display(){
    for(int i = this->lines.size()-1; i >= 0; i--){
        this->lines[i]->display();
    }
}

void LineSystem::addLine(){
    this->lines.push_back(new Line(this->origin.x,this->origin.y));
}
