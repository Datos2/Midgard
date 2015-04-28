#include "Individuo.h"
int Individuo::idCriat=1;
Individuo::Individuo() {
}

Individuo::Individuo(string ptipo){
    cout<<ptipo<<endl;
    cout<<idCriat<<endl;
    this->id=idCriat;
    this->tipo=ptipo;
    cout<<tipo<<endl;
    cout<<id<<endl;
    idCriat++;
}

/*Criatura::~Criatura() {
    delete this;
}*/

int Individuo::getId(){
    return id;
}
string Individuo::getTipo(){
    return tipo;
}