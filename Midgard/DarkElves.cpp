 

#include "DarkElves.h"

DarkElves::DarkElves() {
}


DarkElves::~DarkElves() {
}

bool DarkElves::EdadMuerte(){//muere si tiene alcanza limite de edad.
    return this->edad==120; 
}
bool DarkElves::EdadParaPelea(){
    return this->edad==20;
}
