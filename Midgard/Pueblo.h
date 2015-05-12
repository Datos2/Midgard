
#ifndef PUEBLO_H
#define	PUEBLO_H
#include <iostream>
#include "Estructuras/ListaSimple.h" 
#include "Individuo.h"
#include "Estructuras/Arbol_Genealogico.h"

using namespace std;

class Pueblo {
public:
    Pueblo();
    Pueblo(string ptipo);
    Pueblo(string,int,int,int,int,int,int,int,int,int,int);
    virtual ~Pueblo();
    void SetTipo(string tipo);
    string GetTipo();
    void SetLista_criaturas(ListaSimple<Individuo>* lista_criaturas);
    ListaSimple<Individuo>* GetLista_criaturas();
    static virtual bool EdadMuerte(Individuo);
    static virtual bool EdadParaPelea(Individuo);
    void SetArbol_genealogico_pueblo(Arbol_Genealogico arbol_genealogico_pueblo);
    Arbol_Genealogico GetArbol_genealogico_pueblo();
    void SetEdda_actual(string edda_actual);
    string GetEdda_actual();
private:
    ListaSimple<Individuo>* lista_criaturas;
    string tipo;//ya sea tipo elves, dark elves, entre otros.
    int vida_max,ataque_max,defensa_max,velocidad_max,inteligencia_max,magia_max,
    energiavital_max,blot_max,runes_max,supersticion_max;
    //caracteristicas que seran mas altas o mas bajas dependiendo de la poblacion.
    Arbol_Genealogico arbol_genealogico_pueblo;
    string edda_actual;//edda actual de cada poblacion.
    
};

#endif	/* PUEBLO_H */
 
