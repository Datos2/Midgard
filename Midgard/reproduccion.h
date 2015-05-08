#ifndef REPRODUCCION_H
#define	REPRODUCCION_H
#include "Individuo.h"
namespace reproduccion{
    Individuo cruce(int,Individuo,Individuo);
    int makeMask1(int);
    int makeMask2(int);
    int seekFirstBit(int);
    int mutacion();
};

#endif	/* REPRODUCCION_H */