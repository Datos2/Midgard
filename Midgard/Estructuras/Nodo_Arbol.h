#ifndef NODO_ARBOL_H
#define	NODO_ARBOL_H

#include "../Individuo.h"
//#include "Individuo.h"

#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

class Nodo_Arbol {
private:
    Nodo_Arbol* padre1;
    Nodo_Arbol* padre2;
    Individuo This;
public:
    //~Nodo_Arbol();
    Nodo_Arbol();
    Nodo_Arbol(Individuo);
    //Constructor con valor.
    Nodo_Arbol(Nodo_Arbol * ,Nodo_Arbol * ,Individuo);
    // Getters y setters
    Nodo_Arbol* getPadre1();
    Nodo_Arbol* getPadre2();
    Individuo* getThis();
    int getId();

};


#endif	/* NODO_ARBOL_H */