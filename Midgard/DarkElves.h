
#ifndef DARKELVES_H
#define	DARKELVES_H
#include "Individuo.h"
#include "Pueblo.h"

class DarkElves: public Pueblo{
public:
    DarkElves();
    DarkElves(string);
    DarkElves(string,int,int,int,int,int,int,int,int,int,int);
    ~DarkElves();
    bool EdadMuerte(int);
    bool EdadParaPelea(int);
private:

};

#endif	/* DARKELVES_H */

