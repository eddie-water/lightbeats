#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    counter = 0;
    ofBackground(255, 255, 255);
    ofSetWindowTitle("Graphic Sandbox");
    ofSetFrameRate(60);

    height = ofGetHeight();
    width = ofGetWidth();
    firstQH = height / 4;
    secondQH = height / 2;
    thirdQH = 3 * height / 4;
    firstQW = width / 4;
    secondQW = width / 2;
    thirdQW = 3 * width / 4;
}

//--------------------------------------------------------------
void ofApp::update(){
    counter = counter + 0.05f;
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofFill();
    for (int i = 0 ; i < 100 ; i++) {
        ofSetColor((int)ofRandom(0,255),(int)ofRandom(0,255),(int)ofRandom(0,255));
        ofDrawRectangle(ofRandom(256,512),ofRandom(128,256),ofRandom(10,20),ofRandom(10,20));
    }
        
    ofSetHexColor(0x000000);
	ofDrawBitmapString("Randomized Rectangles",256,64);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){

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