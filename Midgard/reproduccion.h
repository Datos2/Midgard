/* 
 * File:   reproduccion.h
 * Author: briam
 *
 * Created on May 2, 2015, 1:46 AM
 */

#ifndef REPRODUCCION_H
#define	REPRODUCCION_H
#include "Individuo.h"
namespace reproduccion{
    Individuo cruce(int,Individuo,Individuo);
    int makeMask1(int);
    int makeMask2(int);
    int seekFirstBit(int);
};

#endif	/* REPRODUCCION_H */

