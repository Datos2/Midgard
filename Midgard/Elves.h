
#ifndef ELVES_H
#define	ELVES_H
#include "Individuo.h"
#include "Pueblo.h"

class Elves: public Pueblo{
public:
    Elves();   
    Elves(string,int,int,int,int,int,int,int,int,int,int);
    virtual ~Elves();
    bool EdadMuerte(Individuo);
    bool EdadParaPelea(Individuo);

};

#endif	/* ELVES_H */

