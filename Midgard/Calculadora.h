/* 
 * File:   GeneradorDeNumeros.h
 * Author: briam
 *
 * Created on April 28, 2015, 4:15 PM
 */

#ifndef CALCULADORA_H
#define	CALCULADORA_H

#include "Estructuras/BitVector.h" 

namespace Calculadora{
    int PorcentajeRand(int);
    BitVector NumToBytes(int);
    int BytesToNum(BitVector);
}

#endif	/* CALCULADORA_H */

