/* 
 * File:   Combate.h
 * Author: steven
 *
 * Created on May 16, 2015, 2:08 AM
 */

#ifndef COMBATE_H
#define	COMBATE_H
#include "Individuo.h"
#include "randomGenerator.h"
class Combate {
public:
    Combate();
    virtual ~Combate();
    void pelea(Individuo,Individuo);
    void bajar_vida(Individuo,int);
    
private:

};

#endif	/* COMBATE_H */

