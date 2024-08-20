#include "ofApp.h"

void ofApp::setup(){
	shader.load("bw");
}

void ofApp::update(){
}

void ofApp::draw(){	
	if (!buffer.isAllocated()) {
		unsigned int uniformBlockIndex = glGetUniformBlockIndex(shader.getProgram(), "vars");
		glUniformBlockBinding(shader.getProgram(), uniformBlockIndex, 0);
		
		buffer.bind(GL_UNIFORM_BUFFER);
		buffer.unbind(GL_UNIFORM_BUFFER);
		buffer.allocate(sizeof(customVars), GL_STATIC_DRAW);
		buffer.setData(sizeof(customVars), &customVars, GL_STATIC_DRAW);
		buffer.bindRange(GL_UNIFORM_BUFFER, 0, 0, 1 * sizeof(customVars) );
	}

	shader.begin();
	ofDrawRectangle(100, 100, 600, 600);
	shader.end();
}

void ofApp::keyPressed(int key){

}
