

#ifndef EDDA_H
#define	EDDA_H
#include  "Estructuras/ListaSimple.h"
#include "Armas.h"
#include "Datos/Xml.h"

class Edda {
public:
    Edda();
    virtual ~Edda();
    virtual void SetDuracion(int duracion);
    virtual int GetDuracion();
    virtual void setArmas();
    void SetArmas_edda(ListaSimple<Armas> armas_edda);
    ListaSimple<Armas> GetArmas_edda();//carga las armas del xml.
    
private: 
    int duracion;
    ListaSimple<Armas> armas_edda;//se cargan del xml.
    
};

#endif	/* EDDA_H */

