//
//  LineSystem.hpp
//  LineSketchSketch
//
//  Created by 山下希流 on 2018/04/15.
//

#ifndef LineSystem_hpp
#define LineSystem_hpp

#include <stdio.h>
#include "ofMain.h"
#include "Particle.hpp"
#include "Line.hpp"

class LineSystem{
private:
    vector<Line*> lines;
    ofVec2f origin;
public:
    LineSystem(float x,float y);
    ~LineSystem();
    void update();
    void display();
    void addLine();
};
#endif /* LineSystem_hpp */
