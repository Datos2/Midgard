
#include "Dwarves.h"

Dwarves::Dwarves(){
}
Dwarves::Dwarves(const char* ptipo,int pvida_max,int pataque_max,int pdefensa_max,
    int pvelocidad_max,int pinteligencia_max,int pmagia_max,
    int penergiavital_max,int pblot_max,int prunes_max,int psupersticion_max)
    
    :Pueblo(ptipo,pvida_max, pataque_max, pdefensa_max,
     pvelocidad_max, pinteligencia_max, pmagia_max,
    penergiavital_max,pblot_max,prunes_max,psupersticion_max){}

Dwarves::~Dwarves() {
    
}

bool Dwarves::EdadMuerte(int edad){
    return edad==80; 
}

bool Dwarves::EdadParaPelea(int edadpelea){
    return edadpelea==25;
}