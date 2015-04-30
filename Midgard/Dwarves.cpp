
#include "Dwarves.h"

Dwarves::Dwarves() {
}

Dwarves::~Dwarves() {
    
}

bool Dwarves::EdadMuerte(){
    return this->edad==80; 
}

bool Dwarves::EdadParaPelea(){
    return this->edad==25;
}