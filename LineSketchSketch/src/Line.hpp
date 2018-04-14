//
//  Line.hpp
//  LineSketchSketch
//
//  Created by 山下希流 on 2018/04/14.
//

#ifndef Line_hpp
#define Line_hpp

#include <stdio.h>
#include "ofMain.h"
#include "Particle.hpp"

class Line{
private:
    Particle* particle1;
    Particle* particle2;
//    ofVec2f* center;
    ofColor lineColor;
    float lifeSpan;
public:
    Line(float x,float y);
    ~Line();
    void update();
    void display();
    bool isDead();
};

#endif /* Line_hpp */
