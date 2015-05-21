/* 
 * File:   reproduccion.h
 * Author: steven
 *
 * Created on May 6, 2015, 10:06 PM
 */

/* 
 * File:   reproduccion.h
 * Author: briam
 *
 * Created on May 2, 2015, 1:46 AM
 */

#ifndef REPRODUCCION_H
#define	REPRODUCCION_H
#include "Individuo.h"
#include "Estructuras/Nodo_Arbol.h"

namespace reproduccion{
    Individuo cruce(int,Individuo*,Individuo*);
    int makeMask1(int);
    int makeMask2(int);
    int seekFirstBit(int);
    int mutate(int,int);
    int inversion(int);
    int maxFitness(ListaSimple<Nodo_Arbol*>*);
    int fitnessInd(Individuo*);
};

#endif	/* REPRODUCCION_H */

