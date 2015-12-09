#include <list>
#include <vector>
#include <iostream>

#include "World.h"


using namespace std;


int main(void)
{
	cout << "Starting 2D engine test. Creating objects:" << endl;
	Point *origin = new Point();
	World *space = new World();

	Object *square = new Object("Square",*origin,Vector(*origin,*origin),true);

	Object *circle = new Object();
	circle->set_name("Circle");
	circle->set_position(Point( 2.0, 0.0, 0.0 ) );
	circle->set_speed(Vector(*origin, Point (10.0,0.0,0.0)));
	circle->set_visible(false);

	//Add elements to space
	space->add(*square);
	space->add(*circle);

	//Iterate objects in the world
	space-> describeWorld();

	//Delete objects
	delete origin, square, circle, space;

	return 0;
}