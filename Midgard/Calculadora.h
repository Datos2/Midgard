/* 
 * File:   GeneradorDeNumeros.h
 * Author: briam
 *
 * Created on April 28, 2015, 4:15 PM
 */

#ifndef CALCULADORA_H
#define	CALCULADORA_H

#include "../Midgard/Estructuras/BitVector.h"

//#include "Estructuras/BitVector.h" 

namespace Calculadora{
    int PorcentajeRand(int);
    BitVector NumToBytes(int);
    int BytesToNum(BitVector);
}

#endif	/* CALCULADORA_H */

