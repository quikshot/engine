#include "Object.h"

// Constructors/Destructors
//  


Object::Object (string name , Point pos, Vector speed, bool visible)
{
	this->set_name(name);
	this->set_position(pos);
	this->set_speed(speed);
	this->set_visible(visible);
}


Object::~Object () { }

//  
// Methods
//  


// Accessor methods
//  


// Other methods
//  

void Object::initAttributes () {
    _visible = true;
}

