

#ifndef EDDA_H
#define	EDDA_H
#include  "Estructuras/ListaSimple.h"
#include  "Armas.h"
#include "Xml.h"
#include "randomGenerator.h"
#include "Pueblo.h"
class Edda {
public:
    Edda();
    virtual ~Edda();
    void SetDuracion(int duracion);
    int GetDuracion();
    void setArmas();
    void SetEdda_actual(string edda_actual);
    string GetEdda_actual();//carga las armas del xml.
    int randomNumero(int,int);
    void SetArmas_edda(Armas armas_edda);
    Armas GetArmas_edda();
    
   // void se   
protected: 
    int duracion;
    Armas armas_edda;//se cargan del xml.
    
};

#endif	/* EDDA_H */

