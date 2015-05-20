/* 
 * File:   CienciaTecnologia.cpp
 * Author: steven
 * 
 * Created on April 29, 2015, 6:37 PM
 */

#include "CienciaTecnologia.h"
#include "Pueblo.h"

CienciaTecnologia::CienciaTecnologia() {
    duracion=1200;
}

CienciaTecnologia::~CienciaTecnologia() {
  
}

bool verifica_inteligencia(Pueblo pueblo){//verifica si ya alcanzo la inteligencia maxima necesaria para poder cambiar a la edda de fe y supersticion.
    for(int i=0;i<pueblo.GetArbol_genealogico_pueblo().getPoblacionActual()->largoLista();i++)
        if(pueblo.GetArbol_genealogico_pueblo().getPoblacionActual()->getElemento(i)->getThis()->getInt()==200)
            return true;
}