

#ifndef MUNDO_H
#define	MUNDO_H
#include "Estructuras/ListaSimple.h"
class Mundo {
public:
    Mundo();
    ~Mundo();
private:
    //tipo de edda.
    ListaSimple<Poblacion> poblaciones;
};

#endif	/* MUNDO_H */

