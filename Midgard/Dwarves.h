

#ifndef DWARVES_H
#define	DWARVES_H
#include "Individuo.h"
#include "Pueblo.h"

class Dwarves: public Pueblo {
public:
    Dwarves();
    Dwarves(string,int,int,int,int,int,int,int,int,int,int);
    ~Dwarves();
    bool EdadMuerte(Individuo);
    bool EdadParaPelea(Individuo);
private:
    
};

#endif	/* DWARVES_H */

