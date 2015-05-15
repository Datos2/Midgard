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
#include <time.h> 
#include "Nodo_Arbol.h"
#include "ListaSimple.h"
#include "../Individuo.h"
#include "../reproduccion.h"

using namespace std;
using namespace reproduccion;

class Arbol_Genealogico {//clase lista
private:
    int num_Pobl;//num de pobladores actuales
    ListaSimple<Nodo_Arbol*>* poblacionActual;
    ListaSimple<Nodo_Arbol>* poblacionTotal;
    string tipo_poblacion;
public://se definen los metodos publicos

    Arbol_Genealogico();

    ~Arbol_Genealogico();
    void poblacionInicial(int,int,int,int,int,int,int,int,int);
    void nuevoIndividuo(Individuo);
    void nuevoIndividuo(int,int,Individuo);
    void matarIndividuosViejos(int);
    int getNum_Pobl();
    void matarIndividuo(int);
    Nodo_Arbol* buscarNodo(int);
    Individuo* buscarIndividuo(int);
    void setTipo_poblacion(string tipo_poblacion);
    string getTipo_poblacion();
    int tipoPoblacion();
    void nuevaGeneracion();
    Individuo* getPadre(int);
    
};



#endif	/* ARBOL_GENEALOGICO_H */

