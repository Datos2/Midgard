/* 
 * File:   Combate.cpp
 * Author: steven
 * 
 * Created on May 16, 2015, 2:08 AM
 */

#include "Combate.h"

Combate::Combate() {
}

Combate::~Combate() {
}

//se escoge aleatoriamente quien golpea primero.
void Combate::pelea(Individuo individuo1,Individuo individuo2){
    randomGenerator ran;
    if(ran.numeroAleatorio(0,100)<50)//si el numero aleatorio es menor a 50, entonces el individuo1 ataca.
    {}
    if(ran.numeroAleatorio(0,100)>=50)//si el numero aleatorio es menor a 50, entonces el individuo2 ataca.
    {}
}

/*void Combate::bajar_vida(Individuo individuo, int dano){
    individuo.setVida(individuo.getVida()-dano);
}*/