

#include "FeSupersticion.h"

FeSupersticion::FeSupersticion() {
    duracion=700;
}



FeSupersticion::~FeSupersticion() {

}

bool verifica_inteligencia_supersticion(Pueblo* pueblo){//verifica si ya alcanzo la inteligencia maxima para poder cambiar a la edda de fe y supersticion.
    for(int i=0;i<pueblo->GetArbol_genealogico_pueblo().getPoblacionActual()->largoLista();i++)
        if(pueblo->GetArbol_genealogico_pueblo().getPoblacionActual()->getElemento(i)->getThis()->getInt()==150)
            return true;
}