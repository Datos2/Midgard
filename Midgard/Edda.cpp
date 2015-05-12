

#include "Edda.h"

Edda::Edda() {
    duracion=0;
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

void Edda::SetArmas_edda(ListaSimple<Armas>* armas_edda) {
    this->armas_edda = armas_edda;
}

ListaSimple<Armas>*Edda::GetArmas_edda(){
    return armas_edda;
}



