#include "Object.h"

// Constructors/Destructors
//  

Object::Object () {
initAttributes();
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

