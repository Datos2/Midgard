
#include "Pueblo.h"

Pueblo::Pueblo() { 
    lista_criaturas=new ListaSimple<Individuo>();
    tipo;
}
Pueblo::Pueblo(string ptipo) {
    lista_criaturas=new ListaSimple<Individuo>();
    tipo=ptipo;
}
Pueblo::~Pueblo(){
    delete lista_criaturas;
    tipo.erase(0,tipo.npos);
}

void Pueblo::SetTipo(string tipo) {
    this->tipo = tipo;
}

string Pueblo::GetTipo(){
    return tipo;
}

void Pueblo::SetLista_criaturas(ListaSimple<Individuo>* lista_criaturas) {
    this->lista_criaturas = lista_criaturas;
}

ListaSimple<Individuo>* Pueblo::GetLista_criaturas(){
    return lista_criaturas;
}

