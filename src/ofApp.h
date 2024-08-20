#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{
	public:
		void setup();
		void update();
		void draw();
		void keyPressed(int key);

	ofShader shader;
	ofBufferObject buffer;
	struct vars {
		glm::vec4 v1;
		glm::vec4 v2;
		glm::vec4 cor { 1.0, 0.0, 0.3, 1.0 };
	} customVars;

};
