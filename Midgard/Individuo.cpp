#include "Individuo.h"
#include "Individuo.h"
int Individuo::idCriat=1;
Individuo::Individuo() {
}

Individuo::Individuo(string ptipo){ 
    id=idCriat;
    tipo=ptipo;
    edad=1;
    experiencia=0;

    idCriat++;
    BitVector* Bit=new BitVector(32*8);
    
    for(int i=0;i<8;i++){
    Bit->setNum(0,i);
    }
    _stats=Bit;
    
}

Individuo::Individuo(string ptipo,BitVector* vector){
    
    this->id=idCriat;
    this->tipo=ptipo;
    edad=1;
    experiencia=0;
    
    idCriat++;
    _stats=vector;
}

BitVector* Individuo::getBitVector(){
    return _stats;
}
int Individuo::getId(){
    return id;
}
string Individuo::getTipo(){
    return tipo;
}

void Individuo::setHP(int pstat){
    _stats->setNum(pstat,0);
    
}
void Individuo::setSpeed(int pstat){
    _stats->setNum(pstat,1);
}
void Individuo::setDef(int pstat){
    _stats->setNum(pstat,2);
}
void Individuo::setInt(int pstat){
    _stats->setNum(pstat,3);
}
void Individuo::setMP(int pstat){
    _stats->setNum(pstat,4);
}
void Individuo::setVit(int pstat){
    _stats->setNum(pstat,5);
}
void Individuo::setBlot(int pstat){
    _stats->setNum(pstat,6);
}
void Individuo::setRunes(int pstat){
    _stats->setNum(pstat,7);
}
int Individuo::getHP(){
    return _stats->getValue(0);
}
int Individuo::getSpeed(){
    return _stats->getValue(1);
}
int Individuo::getDef(){
    return _stats->getValue(2);
}
int Individuo::getInt(){
    return _stats->getValue(3);
}
int Individuo::getMP(){
    return _stats->getValue(4);
}
int Individuo::getVit(){
    return _stats->getValue(5);
}
int Individuo::getBlot(){
    return _stats->getValue(6);
}
int Individuo::getRunes(){
    return _stats->getValue(7);
}

void Individuo::setEdad(int edad) {
    this->edad = edad;
}

int Individuo::getEdad(){
    return edad;
}