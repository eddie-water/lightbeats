#ifndef _BALL 
#define _BALL 
#include "ofMain.h" 

class Ball {

    public:

	void setup();
	void update();
	void draw();  

	float x;        // position
	float y;
	float speedY;   // speed and direction
	float speedX;
	int dim;        // size
	ofColor color;  // color using ofColor type

	Ball(); 

	private:
}; 
#endif