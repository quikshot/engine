#include "Point.h"

// Constructors/Destructors
//  

Point::Point (double x, double y, double z) {
	this->x = x;
    this->y = y;
    this->z = z;
	//initAttributes();
}

Point::~Point () { }

//  
// Methods
//  


// Accessor methods
//  


// Other methods
//  

void Point::initAttributes () {
    x = 0.0;
    y = 0.0;
    z = 0.0;
}

