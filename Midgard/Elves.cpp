
#include "Elves.h"

Elves::Elves(){
    
}
Elves::~Elves(){
    
}

Elves::Elves(const char* ptipo,int pvida_max,int pataque_max,int pdefensa_max,
    int pvelocidad_max,int pinteligencia_max,int pmagia_max,
    int penergiavital_max,int pblot_max,int prunes_max,int psupersticion_max)
    
    :Pueblo(ptipo,pvida_max, pataque_max, pdefensa_max,
     pvelocidad_max, pinteligencia_max, pmagia_max,
    penergiavital_max,pblot_max,prunes_max,psupersticion_max){}


bool Elves::EdadMuerte(int edad){
    return edad==100;
}

bool Elves::EdadParaPelea(int edadpelea){
    return edadpelea==17;
}