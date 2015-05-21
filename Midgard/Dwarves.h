

#ifndef DWARVES_H
#define	DWARVES_H
#include "Individuo.h"
#include "Pueblo.h"
 
class Dwarves: public Pueblo {
public:
    Dwarves();
    Dwarves(const char*,int,int,int,int,int,int,int,int,int,int);
    ~Dwarves();
    bool EdadMuerte(int);
    bool EdadParaPelea(int);
private:
    
};

#endif	/* DWARVES_H */

