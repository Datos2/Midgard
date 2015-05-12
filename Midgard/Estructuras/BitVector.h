/* 
 * File:   BitVector.h
 * Author: briam
 *
 * Created on April 28, 2015, 4:39 PM
 */

#ifndef BITVECTOR_H
#define	BITVECTOR_H
#include "ListaSimple.h"

//#include <iostream>
#include <cstdlib>
#include <iostream>
using namespace std;

class BitVector{
   //int* vector;
   int _size;
public:
    int* vector;
    BitVector(int);
    BitVector();
    
    void initBitVector(int *);
    
    bool setBit(int pBitNum);
    bool getBit(int pBitNum);
    void setNum(int,int);
    int* getBits();
    int getValue(int);

};

#endif	/* BITVECTOR_H */

