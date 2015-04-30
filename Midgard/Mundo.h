

#ifndef MUNDO_H
#define	MUNDO_H
#include "Estructuras/ListaSimple.h"
#include "Pueblo.h"
#include "Edda.h"

class Mundo {
public:
    Mundo();
    ~Mundo();
    void SetPoblaciones(ListaSimple<Pueblo> poblaciones);
    ListaSimple<Pueblo> GetPoblaciones();
    void SetEdda_actual(Edda edda_actual);
    Edda GetEdda_actual();
private:
    Edda edda_actual;
    ListaSimple<Pueblo> poblaciones;
};

#endif	/* MUNDO_H */

