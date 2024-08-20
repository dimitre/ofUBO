#include "ofApp.h"

void ofApp::setup(){
	shader.load("bw");
}

void ofApp::update(){
}

void ofApp::draw(){	
	if (!buffer.isAllocated()) {
		buffer.allocate(sizeof(cor), GL_DYNAMIC_DRAW);
	}
	buffer.bind(GL_UNIFORM_BUFFER);
	buffer.setData(sizeof(cor), &cor, GL_DYNAMIC_DRAW);
	buffer.unbind(GL_UNIFORM_BUFFER);

	shader.begin();
	shader.setUniform4f("cor3", cor);
	
	auto id = buffer.getId();
	shader.bindUniformBlock(id, "vars");

	ofDrawRectangle(100, 100, 600, 600);
	shader.end();
}

void ofApp::keyPressed(int key){

}
