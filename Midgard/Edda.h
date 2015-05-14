

#ifndef EDDA_H
#define	EDDA_H
#include  "Estructuras/ListaSimple.h"
#include "Armas.h"
#include "Datos/Xml.h"

class Edda {
public:
    Edda();
    virtual ~Edda();
    void SetDuracion(int duracion);
    int GetDuracion();
    void setArmas();
    void SetArmas_edda(ListaSimple<Armas> *armas_edda);
    ListaSimple<Armas>* GetArmas_edda();
    void SetEdda_actual(string edda_actual);
    string GetEdda_actual();//carga las armas del xml.
    
protected: 
    int duracion;
    ListaSimple<Armas>* armas_edda;//se cargan del xml.
 
};

#endif	/* EDDA_H */

