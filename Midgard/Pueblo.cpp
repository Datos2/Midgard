
#include "Pueblo.h"
#include  "Barbara.h"
Pueblo::Pueblo(){ 
    lista_criaturas=new ListaSimple<Individuo>();
   
   
}

Pueblo::Pueblo(const char* nombre){ 
    lista_criaturas=new ListaSimple<Individuo>();
    Xml xml(nombre);
    ListaSimple<const char*>* parametros_pueblos=new ListaSimple<const char*>();
    parametros_pueblos=xml.getElements();
    this->vida_max=atoi(parametros_pueblos->getElemento(9));
    this->ataque_max=atoi(parametros_pueblos->getElemento(8));
    this->defensa_max=atoi(parametros_pueblos->getElemento(7));
    this->velocidad_max=atoi(parametros_pueblos->getElemento(6));
    this->inteligencia_max=atoi(parametros_pueblos->getElemento(5));
    this->magia_max=atoi(parametros_pueblos->getElemento(4));
    this->energiavital_max=atoi(parametros_pueblos->getElemento(3));
    this->blot_max=atoi(parametros_pueblos->getElemento(2));
    this->runes_max=atoi(parametros_pueblos->getElemento(1));
    this->supersticion_max=atoi(parametros_pueblos->getElemento(0));
    this->tipo=nombre;
}

void Pueblo::SetEdda_actual(Edda edda_actual) {
    this->edda_actual = edda_actual;
}

Edda Pueblo::GetEdda_actual(){
    return edda_actual;
}

void Pueblo::SetSupersticion_max(int supersticion_max) {
    this->supersticion_max = supersticion_max;
}

int Pueblo::GetSupersticion_max()  {
    return supersticion_max;
}

void Pueblo::SetRunes_max(int runes_max) {
    this->runes_max = runes_max;
}

int Pueblo::GetRunes_max()  {
    return runes_max;
}

void Pueblo::SetBlot_max(int blot_max) {
    this->blot_max = blot_max;
}

int Pueblo::GetBlot_max()  {
    return blot_max;
}

void Pueblo::SetEnergiavital_max(int energiavital_max) {
    this->energiavital_max = energiavital_max;
}

int Pueblo::GetEnergiavital_max()  {
    return energiavital_max;
}

void Pueblo::SetMagia_max(int magia_max) {
    this->magia_max = magia_max;
}

int Pueblo::GetMagia_max()  {
    return magia_max;
}

void Pueblo::SetInteligencia_max(int inteligencia_max) {
    this->inteligencia_max = inteligencia_max;
}

int Pueblo::GetInteligencia_max()  {
    return inteligencia_max;
}

void Pueblo::SetVelocidad_max(int velocidad_max) {
    this->velocidad_max = velocidad_max;
}

int Pueblo::GetVelocidad_max()  {
    return velocidad_max;
}

void Pueblo::SetDefensa_max(int defensa_max) {
    this->defensa_max = defensa_max;
}

int Pueblo::GetDefensa_max()  {
    return defensa_max;
}

void Pueblo::SetAtaque_max(int ataque_max) {
    this->ataque_max = ataque_max;
}

int Pueblo::GetAtaque_max()  {
    return ataque_max;
}

void Pueblo::SetVida_max(int vida_max) {
    this->vida_max = vida_max;
}

int Pueblo::GetVida_max()  {
    return vida_max;
}

void Pueblo::SetExperiencia(int experiencia) {
    this->experiencia = experiencia;
}

int Pueblo::GetExperiencia(){
    return experiencia;
}

void Pueblo::SetSupersticion(int supersticion) {
    this->supersticion = supersticion;
}

int Pueblo::GetSupersticion() {
    return supersticion;
}

Pueblo::Pueblo(const char* ptipo,int pvida_max,int pataque_max,int pdefensa_max,
    int pvelocidad_max,int pinteligencia_max,int pmagia_max,
    int penergiavital_max,int pblot_max,int prunes_max,int psupersticion_max) {
    randomGenerator rm;
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
    experiencia=0;
    edda_actual;
    supersticion=rm.numeroAleatorio(1,10);
}
Pueblo::~Pueblo(){
    delete lista_criaturas;
  //  tipo.erase(0,tipo.npos);
}

void Pueblo::SetTipo(const char* tipo) {
    this->tipo = tipo;
}

const char* Pueblo::GetTipo(){
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

void Pueblo::SetStrEdda_actual(const char* edda_actual) {
    this->str_edda_actual = edda_actual;
}

const char* Pueblo::GetStrEdda_actual()  {
    return str_edda_actual;
}



