

#ifndef ARMAS_H
#define	ARMAS_H
#include "Xml.h"
#include "Estructuras/ListaSimple.h"

class Armas {
public:
    Armas();
    virtual ~Armas();
    void SetTotal_armas();
    ListaSimple<const char*>* GetTotal_armas();
   // int danoarma(int);//setea el daño de cada arma.
private:
    ListaSimple<const char*>* total_armas;
};

#endif	/* ARMAS_H */

