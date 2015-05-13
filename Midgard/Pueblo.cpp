
#include "Pueblo.h"

Pueblo::Pueblo(){ 
    lista_criaturas=new ListaSimple<Individuo>();
    tipo;
}
Pueblo::Pueblo(string ptipo) {
    lista_criaturas=new ListaSimple<Individuo>();
    tipo=ptipo;
}
Pueblo::Pueblo(string ptipo,int pvida_max,int pataque_max,int pdefensa_max,
    int pvelocidad_max,int pinteligencia_max,int pmagia_max,
    int penergiavital_max,int pblot_max,int prunes_max,int psupersticion_max) {
    
    lista_criaturas=new ListaSimple<Individuo>();
    vida_max=pvida_max;
    ataque_max=pataque_max;
    inteligencia_max=pinteligencia_max;
    magia_max=pmagia_max;
    energiavital_max=penergiavital_max;
    blot_max=pblot_max;
    runes_max=prunes_max;
    supersticion_max=psupersticion_max;
    defensa_max=pdefensa_max;
    velocidad_max=pvelocidad_max;
    tipo=ptipo;
}
Pueblo::~Pueblo(){
    delete lista_criaturas;
  //  tipo.erase(0,tipo.npos);
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
bool Pueblo::EdadMuerte(int){}
bool Pueblo::EdadParaPelea(int){}

void Pueblo::SetArbol_genealogico_pueblo(Arbol_Genealogico arbol_genealogico_pueblo) {
    this->arbol_genealogico_pueblo = arbol_genealogico_pueblo;
}

Arbol_Genealogico Pueblo::GetArbol_genealogico_pueblo(){
    return arbol_genealogico_pueblo;
}

void Pueblo::SetEdda_actual(string edda_actual) {
    this->edda_actual = edda_actual;
}

string Pueblo::GetEdda_actual()  {
    return edda_actual;
}
