
#include "Giants.h"

Giants::Giants(){
}

Giants::~Giants() {
    delete this;
}

bool Giants::EdadMuerte(){
    return this->edad==75; 
}

bool Giants::EdadParaPelea(){
    return this->edad==15;
}