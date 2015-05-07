

#ifndef ARMAS_H
#define	ARMAS_H
#include "Datos/Xml.h"
#include "Estructuras/ListaSimple.h"

class Armas {
public:
    Armas();
    virtual ~Armas();
    void SetTotal_armas();
    ListaSimple<const char*> GetTotal_armas();
private:
    ListaSimple<const char*> total_armas;
};

#endif	/* ARMAS_H */

