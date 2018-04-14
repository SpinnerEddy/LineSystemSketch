#include "ofApp.h"

//--------------------------------------------------------------
ofApp::~ofApp(){
    for(int i = particles.size()-1; i >= 0; i--){
        delete particles[i];
        this->particles.erase(this->particles.begin()+i);
    }
}

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    ofSetFrameRate(60);
    ofEnableSmoothing();
    ofSetWindowTitle("LineSystem");
    ofEnableSmoothing();
    ofEnableBlendMode(ofBlendMode::OF_BLENDMODE_ADD);
    
    this->particles.push_back(new Particle(ofGetWidth()/2,ofGetHeight()/2));
}

//--------------------------------------------------------------
void ofApp::update(){
    this->particles.push_back(new Particle(ofGetWidth()/2,ofGetHeight()/2));
    for(int i = this->particles.size()-1; i >= 0; i--){
        this->particles[i]->update();
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    for(int i = this->particles.size()-1; i >= 0; i--){
        this->particles[i]->display();
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
