
#include "Dwarves.h"

Dwarves::Dwarves(){
}
Dwarves::Dwarves(string ptipo,int pvida_max,int pataque_max,int pdefensa_max,
    int pvelocidad_max,int pinteligencia_max,int pmagia_max,
    int penergiavital_max,int pblot_max,int prunes_max,int psupersticion_max)
    
    :Pueblo(ptipo,pvida_max, pataque_max, pdefensa_max,
     pvelocidad_max, pinteligencia_max, pmagia_max,
    penergiavital_max,pblot_max,prunes_max,psupersticion_max){}

Dwarves::~Dwarves() {
    
}

bool Dwarves::EdadMuerte(Individuo individuo){
    return individuo.getEdad()==80; 
}

bool Dwarves::EdadParaPelea(Individuo individuo){
    return individuo.getEdad()==25;
}