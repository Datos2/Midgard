

#include "Edda.h"

Edda::Edda() {
    duracion=0;
    armas_edda= Armas();
}

Edda::~Edda() {
}

void Edda::SetDuracion(int duracion) {
    this->duracion = duracion;
}

int Edda::GetDuracion(){
    return duracion;
}

void Edda::setArmas(){}



int Edda::randomNumero(int inicial,int final){
    randomGenerator ran;
    return ran.numeroAleatorio(inicial,final);
}

void Edda::SetArmas_edda(Armas armas_edda) {
    this->armas_edda = armas_edda;
}

Armas Edda::GetArmas_edda() {
    return armas_edda;
}

