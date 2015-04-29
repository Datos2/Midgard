/* 
 * File:   BitVector.h
 * Author: briam
 *
 * Created on April 28, 2015, 4:39 PM
 */

#ifndef BITVECTOR_H
#define	BITVECTOR_H

#include "ListaSimple.h"

class BitVector{
   ListaSimple<bool> vector;
public:
    BitVector(int);
    int getNum();
    void setBits();
    ListaSimple<bool> getBits();
};

#endif	/* BITVECTOR_H */

