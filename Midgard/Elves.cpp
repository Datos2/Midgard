
#include "Elves.h"

Elves::Elves() {
}

Elves::~Elves() {
}

bool Elves::EdadMuerte(){
    return this->edad==100;
}

bool Elves::EdadParaPelea(){
    return this->edad==17;
}