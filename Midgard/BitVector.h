/* 
 * File:   BitVector.h
 * Author: briam
 *
 * Created on April 28, 2015, 4:39 PM
 */

#ifndef BITVECTOR_H
#define	BITVECTOR_H

class BitVector{
   char* vector;
public:
    BitVector(int);
    BitVector();
    int getNum();
    void setBits(char*);
    char* getBits();
    int BitsToNum(char*);
    char* NumToBits(int);
};
#endif	/* BITVECTOR_H */

