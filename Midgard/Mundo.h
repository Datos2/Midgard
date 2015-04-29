

#ifndef MUNDO_H
#define	MUNDO_H
#include "Estructuras/ListaSimple.h"
#include "Pueblo.h"
class Mundo {
public:
    Mundo();
    ~Mundo();
private:
    //tipo de edda.
    ListaSimple<Pueblo> poblaciones;
};

#endif	/* MUNDO_H */

