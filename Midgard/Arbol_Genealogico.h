/* 
 * File:   Arbol_Genealogico.h
 * Author: briam
 *
 * Created on April 28, 2015, 12:32 AM
 */

#ifndef ARBOL_GENEALOGICO_H
#define	ARBOL_GENEALOGICO_H

#include <iostream>
#include <cstdio>
#include "Nodo_Arbol.h"
#include "ListaSimple.h"
#include "Individuo.h"

using namespace std;

class Arbol_Genealogico {//clase lista
private:
    int num_Pobl;//num de pobladores actuales
    ListaSimple<Nodo_Arbol*>* poblacionActual;
    ListaSimple<Nodo_Arbol>* poblacionTotal;
    
public://se definen los metodos publicos

    Arbol_Genealogico();

    ~Arbol_Genealogico();
    void nuevoIndividuo(Individuo);
    void nuevoIndividuo(int,int,Individuo);
    void matarIndividuosViejos();
    int getNum_Pobl();
    void matarIndividuo(int);
    Nodo_Arbol* buscarNodo(int);
    Individuo* buscarIndividuo(int);
    
};



#endif	/* ARBOL_GENEALOGICO_H */

