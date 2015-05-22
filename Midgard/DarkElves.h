
#ifndef DARKELVES_H
#define	DARKELVES_H
#include "Individuo.h"
#include "Pueblo.h"

class DarkElves: public Pueblo{
public:
    DarkElves();
    DarkElves(const char*);
    DarkElves(const char*,int,int,int,int,int,int,int,int,int,int);
    DarkElves(const char*,const char*);
    ~DarkElves();
    bool EdadMuerte(int);
    bool EdadParaPelea(int);
private:

};

#endif	/* DARKELVES_H */

