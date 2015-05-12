

#ifndef GIANTS_H
#define	GIANTS_H
#include "Individuo.h"
#include "Pueblo.h"

class Giants:public Pueblo{
public:
    Giants();
    Giants(string,int,int,int,int,int,int,int,int,int,int);
    ~Giants();
    bool EdadMuerte(Individuo);
    bool EdadParaPelea(Individuo);
private:

};

#endif	/* GIANTS_H */

