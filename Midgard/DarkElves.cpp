 

#include "DarkElves.h"

DarkElves::DarkElves() {
    edad, vida,experiencia=0;
    
   // velocidad,defensa,inteligencia,
   // magia,energia_vital,blot,runes,supersticion,genero=random;
    //id;
    tipo;
}
DarkElves::DarkElves(string ptipo) {
    edad, vida,experiencia=0;
    
   // velocidad,defensa,inteligencia,
   // magia,energia_vital,blot,runes,supersticion,genero=random;
    //id;
    tipo=ptipo;
}

DarkElves::~DarkElves() {
}

bool DarkElves::EdadMuerte(){//muere si tiene alcanza limite de edad.
    return this->edad==120; 
}
bool DarkElves::EdadParaPelea(){
    return this->edad==20;
}
