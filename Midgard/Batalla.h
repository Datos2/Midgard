/* 
 * File:   Batalla.h
 * Author: steven
 *
 * Created on April 29, 2015, 7:17 PM
 */

#ifndef BATALLA_H
#define	BATALLA_H
#include "Individuo.h"
//en esta clase se evalua todo lo relacionado en batalla. 
class Batalla {
public:
    Batalla();
    virtual ~Batalla();
    void Interaccion(Individuo,Individuo);
private:

};

#endif	/* BATALLA_H */

