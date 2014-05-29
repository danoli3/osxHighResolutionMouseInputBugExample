#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    lastMouseMoved = ofRectangle(-50,-50, 50, 50);
    lastMouseDragged = ofRectangle(-50,-50, 50, 50);
    lastMouseReleased = ofRectangle(-60,-60, 60, 60);
    lastMousePressed = ofRectangle(-60,-60, 60, 60);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofFill();
    ofSetColor(255, 255, 0);
    ofRect(lastMouseMoved);
    ofSetColor(128, 0, 0);
    ofRect(lastMouseDragged);
    
    
    ofSetColor(0, 255, 0);
    ofRect(lastMousePressed);
    ofSetColor(0, 128, 255);
    ofRect(lastMouseReleased);
    
    
    ofNoFill();
    ofSetLineWidth(5);
    ofSetColor(255, 0, 0);
    ofRect(lastMousePressed);
    ofRect(lastMouseReleased);
    
    
    
    ofSetColor(255);
    ofDrawBitmapString("Mouse Moved: X: " + ofToString(lastMouseMoved.x) + " Y:" + ofToString(lastMouseMoved.y), ofGetWidth()-350, 20);
    ofDrawBitmapString("Mouse Dragged: X: " + ofToString(lastMouseDragged.x) + " Y:" + ofToString(lastMouseDragged.y), ofGetWidth()-350, 40);
    
    if(lastMousePressed.x > ofGetWidth() || lastMousePressed.y > ofGetHeight()) {
        ofSetColor(255, 0, 0);
        ofDrawBitmapString("Last Mouse Pressed: X: " + ofToString(lastMousePressed.x) + " Y:" + ofToString(lastMousePressed.y), ofGetWidth()-350, 60);
    } else {
        ofSetColor(255,0,255);
        ofDrawBitmapString("Last Mouse Pressed: X: " + ofToString(lastMousePressed.x) + " Y:" + ofToString(lastMousePressed.y), ofGetWidth()-350, 60);
    }
    if(lastMouseReleased.x > ofGetWidth() || lastMouseReleased.y > ofGetHeight()) {
        ofSetColor(255, 0, 0);
        ofDrawBitmapString("Last Mouse Released: X: " + ofToString(lastMouseReleased.x) + " Y:" + ofToString(lastMouseReleased.y), ofGetWidth()-350, 80);
    } else {
        ofSetColor(255,0,255);
        ofDrawBitmapString("Last Mouse Released: X: " + ofToString(lastMouseReleased.x) + " Y:" + ofToString(lastMouseReleased.y), ofGetWidth()-350, 80);
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
    ofLog(OF_LOG_VERBOSE, "MouseMoved: X:"+ofToString(x) + " Y:"+ ofToString(y));
    lastMouseMoved.x = x;
    lastMouseMoved.y = y;
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    ofLog(OF_LOG_VERBOSE, "MouseDragged: X:"+ofToString(x) + " Y:"+ ofToString(y));
    lastMouseDragged.x = x;
    lastMouseDragged.y = y;
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    if(x > ofGetWidth() || y > ofGetHeight()) {
        ofLog(OF_LOG_ERROR, "MousePressed: X:"+ofToString(x) + " Y:"+ ofToString(y));
    } else {
        ofLog(OF_LOG_NOTICE, "MousePressed: X:"+ofToString(x) + " Y:"+ ofToString(y));
    }
    lastMousePressed.x = x;
    lastMousePressed.y = y;
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    if(x > ofGetWidth() || y > ofGetHeight()) {
        ofLog(OF_LOG_ERROR, "MouseReleased: X:"+ofToString(x) + " Y:"+ ofToString(y));
    } else {
        ofLog(OF_LOG_NOTICE, "MouseReleased: X:"+ofToString(x) + " Y:"+ ofToString(y));
    }
    
    lastMouseReleased.x = x;
    lastMouseReleased.y = y;
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
