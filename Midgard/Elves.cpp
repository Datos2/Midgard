
#include "Elves.h"

Elves::Elves(){
    
}
Elves::~Elves(){
    
}

Elves::Elves(string ptipo,int pvida_max,int pataque_max,int pdefensa_max,
    int pvelocidad_max,int pinteligencia_max,int pmagia_max,
    int penergiavital_max,int pblot_max,int prunes_max,int psupersticion_max)
    
    :Pueblo(ptipo,pvida_max, pataque_max, pdefensa_max,
     pvelocidad_max, pinteligencia_max, pmagia_max,
    penergiavital_max,pblot_max,prunes_max,psupersticion_max){}


bool Elves::EdadMuerte(Individuo individuo){
    return individuo.getEdad()==100;
}

bool Elves::EdadParaPelea(Individuo individuo){
    return individuo.getEdad()==17;
}