
#ifndef ELVES_H
#define	ELVES_H
#include "Individuo.h"
#include "Pueblo.h"

class Elves: public Pueblo{
public:
    Elves();   
    Elves(const char*,int,int,int,int,int,int,int,int,int,int);
    Elves(const char*,const char*);
    virtual ~Elves();
    bool EdadMuerte(int);
    bool EdadParaPelea(int);

};

#endif	/* ELVES_H */

