

#include "Mundo.h"

Mundo::Mundo() {
}


Mundo::~Mundo() {
}

void Mundo::SetPoblaciones(ListaSimple<Pueblo> poblaciones) {
    this->poblaciones = poblaciones;
}

ListaSimple<Pueblo> Mundo::GetPoblaciones(){
    return poblaciones;
}

void Mundo::SetEdda_actual(Edda edda_actual) {
    this->edda_actual = edda_actual;
}

Edda Mundo::GetEdda_actual(){
    return edda_actual;
}

