
#ifndef PUEBLO_H
#define	PUEBLO_H
#include <iostream>
#include "Estructuras/ListaSimple.h" 
#include "Individuo.h"
using namespace std;

class Pueblo {
public:
    Pueblo();
    ~Pueblo();
private:
    ListaSimple<Individuo> lista_criaturas;
    string tipo;//ya sea tipo elves, dark elves, entre otros.
};

#endif	/* PUEBLO_H */
 
