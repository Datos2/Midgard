/* 
 * File:   randomGenerator.h
 * Author: steven
 *
 * Created on May 15, 2015, 11:53 AM
 */

#ifndef RANDOMGENERATOR_H
#define	RANDOMGENERATOR_H
#include <cstdlib>
#include <stdlib.h> 
#include <time.h>

class randomGenerator {
public:
    randomGenerator();
    virtual ~randomGenerator();
    int numeroAleatorio(int,int);
private:

};

#endif	/* RANDOMGENERATOR_H */

