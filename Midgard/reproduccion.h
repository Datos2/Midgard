#ifndef REPRODUCCION_H
#define	REPRODUCCION_H
#include "Individuo.h"
#include "Estructuras/ListaSimple.h"
#include "Estructuras/Arbol_Genealogico.h"

namespace reproduccion{
    Individuo cruce(int,Individuo,Individuo);
    int makeMask1(int);
    int makeMask2(int);
    int seekFirstBit(int);
    int mutacion();
    int maxFitness(ListaSimple<Nodo_Arbol*>*);
    int fitnessInd(Individuo*);
    
};

#endif	/* REPRODUCCION_H */