#include "ofApp.h"

//--------------------------------------------------------------
ofApp::~ofApp(){
    delete this->lineSystem;
}

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    ofSetFrameRate(60);
    ofEnableSmoothing();
    ofSetWindowTitle("LineSystem");
    ofEnableSmoothing();
    ofEnableBlendMode(ofBlendMode::OF_BLENDMODE_ADD);
    
    this->lineSystem = new LineSystem(ofGetWidth()/2,ofGetHeight()/2);
}

//--------------------------------------------------------------
void ofApp::update(){
    this->lineSystem->addLine();
    this->lineSystem->update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    this->lineSystem->display();
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
