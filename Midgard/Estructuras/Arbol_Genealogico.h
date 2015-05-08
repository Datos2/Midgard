#ifndef ARBOL_GENEALOGICO_H
#define	ARBOL_GENEALOGICO_H

#include <iostream>
#include <cstdio>
#include "Nodo_Arbol.h"
#include "ListaSimple.h"
#include "../Individuo.h"

using namespace std;

class Arbol_Genealogico {//clase lista
private:
    int num_Pobl;//num de pobladores actuales
    ListaSimple<Nodo_Arbol*>* poblacionActual;
    ListaSimple<Nodo_Arbol>* poblacionTotal;
    
public://se definen los metodos publicos

    Arbol_Genealogico();

    ~Arbol_Genealogico();
    void poblacionInicial(int,int,int,int,int,int,int,int,int);
    void nuevoIndividuo(Individuo);
    void nuevoIndividuo(int,int,Individuo);
    void matarIndividuosViejos();
    int getNum_Pobl();
    void matarIndividuo(int);
    Nodo_Arbol* buscarNodo(int);
    Individuo* buscarIndividuo(int);
    void Reproduccion();
    
};

#endif	/* ARBOL_GENEALOGICO_H */