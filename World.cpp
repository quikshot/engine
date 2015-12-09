#include <iostream>
#include "World.h"


// Constructors/Destructors
//  

World::World () {
initAttributes();
}

World::~World () { }

//  
// Methods
//  
void World::describeWorld()
{

	cout << "World \"" << this->getName() << "\" has following objects: " << endl;
	for (std::list<Object>::iterator it=_objectList.begin(); it != _objectList.end(); ++it)
	{
    	cout << "Object \"" << (*it).get_name() << "\"\tPos(x,y,z)=("<< (*it).get_position().getX() <<","<< (*it).get_position().getY() << ","<< (*it).get_position().getZ()<<");"<<endl;
		cout << "\t\tSpeed(x,y,z)=("<< (*it).get_speed().getDestination().getX()-(*it).get_speed().getOrigin().getX() <<"," \
								<< (*it).get_speed().getDestination().getY()-(*it).get_speed().getOrigin().getY() <<"," \
								<< (*it).get_speed().getDestination().getZ()-(*it).get_speed().getOrigin().getZ() <<");"<<endl;
	}
  std::cout << '\n';
}

// Accessor methods
//  


// Other methods
//  

void World::initAttributes () {
    name = "earth";
}


