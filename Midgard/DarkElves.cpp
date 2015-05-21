 

#include "DarkElves.h"

DarkElves::DarkElves(){
    
   // velocidad,defensa,inteligencia,
   // magia,energia_vital,blot,runes,supersticion,genero=random;
    //id;  
}
DarkElves::DarkElves(const char*){
  
    
   // velocidad,defensa,inteligencia,
   // magia,energia_vital,blot,runes,supersticion,genero=random;
    //id;
}
DarkElves::DarkElves(const char* ptipo,int pvida_max,int pataque_max,int pdefensa_max,
    int pvelocidad_max,int pinteligencia_max,int pmagia_max,
    int penergiavital_max,int pblot_max,int prunes_max,int psupersticion_max)
    
    :Pueblo(ptipo,pvida_max, pataque_max, pdefensa_max,
     pvelocidad_max, pinteligencia_max, pmagia_max,
    penergiavital_max,pblot_max,prunes_max,psupersticion_max){}

DarkElves::~DarkElves() {
}

bool DarkElves::EdadMuerte(int edad){
    return edad==80; 
}

bool DarkElves::EdadParaPelea(int edadpelea){
    return edadpelea==25;
}
