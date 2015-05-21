

#ifndef GIANTS_H
#define	GIANTS_H
#include "Individuo.h"
#include "Pueblo.h"

class Giants:public Pueblo{
public:
    Giants();
    Giants(const char*,int,int,int,int,int,int,int,int,int,int);
    ~Giants();
    bool EdadMuerte(int);
    bool EdadParaPelea(int);
private:

};

#endif	/* GIANTS_H */

