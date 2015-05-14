

#ifndef MUNDO_H
#define	MUNDO_H
#include "Estructuras/ListaSimple.h"
#include "Pueblo.h"
#include "Edda.h"
#include "DarkElves.h"
#include "Dwarves.h"
#include "Elves.h"
#include "Giants.h"

class Mundo {
public:
    Mundo();
    Mundo(string);
    ~Mundo();
    void SetPoblaciones(ListaSimple<Pueblo>* poblaciones);
    ListaSimple<Pueblo> *GetPoblaciones();
    ListaSimple<Pueblo>*generarPoblacionInicial();
private:
    ListaSimple<Pueblo>* poblaciones;
};

#endif	/* MUNDO_H */

