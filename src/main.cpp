#include "ofMain.h"
#include "ofApp.h"




int main() {
	ofWindowSettings settings;
	settings.setSize(1600, 1000);
	settings.setGLVersion(3, 2);
	settings.windowMode = OF_WINDOW;

	auto win { ofCreateWindow(settings) };
	auto app { make_shared<ofApp>() };
	ofRunApp(win, app);
	ofRunMainLoop();
}
