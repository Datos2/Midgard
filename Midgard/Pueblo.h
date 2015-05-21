
#ifndef PUEBLO_H
#define	PUEBLO_H
#include <iostream>
#include "Estructuras/ListaSimple.h" 
#include "Individuo.h"
#include "Estructuras/Arbol_Genealogico.h"
#include "Edda.h"
#include "randomGenerator.h"
#include <cstdlib>
using namespace std; 

class Pueblo {
public:
    Pueblo();
    Pueblo(const char*);
    Pueblo(const char*,int,int,int,int,int,int,int,int,int,int);
    virtual ~Pueblo();
    void SetTipo(const char* tipo);
    const char* GetTipo();
    void SetLista_criaturas(ListaSimple<Individuo>* lista_criaturas);
    ListaSimple<Individuo>* GetLista_criaturas();
    virtual bool EdadMuerte(int);
    virtual bool EdadParaPelea(int);
    void SetArbol_genealogico_pueblo(Arbol_Genealogico arbol_genealogico_pueblo);
    Arbol_Genealogico GetArbol_genealogico_pueblo();
    void SetStrEdda_actual(const char* edda_actual);
    const char* GetStrEdda_actual();
    void SetEdda_actual(Edda);
    Edda GetEdda_actual();
    void SetSupersticion_max(int supersticion_max);
    int GetSupersticion_max() ;
    void SetRunes_max(int runes_max);
    int GetRunes_max() ;
    void SetBlot_max(int blot_max);
    int GetBlot_max() ;
    void SetEnergiavital_max(int energiavital_max);
    int GetEnergiavital_max() ;
    void SetMagia_max(int magia_max);
    int GetMagia_max() ;
    void SetInteligencia_max(int inteligencia_max);
    int GetInteligencia_max() ;
    void SetVelocidad_max(int velocidad_max);
    int GetVelocidad_max() ;
    void SetDefensa_max(int defensa_max);
    int GetDefensa_max() ;
    void SetAtaque_max(int ataque_max);
    int GetAtaque_max() ;
    void SetVida_max(int vida_max);
    int GetVida_max();
    void SetExperiencia(int experiencia);
    int GetExperiencia();
    void SetSupersticion(int supersticion);
    int GetSupersticion(); 
    
private:
    ListaSimple<Individuo>* lista_criaturas;
    const char* tipo;//ya sea tipo elves, dark elves, entre otros.
    int vida_max,ataque_max,defensa_max,velocidad_max,inteligencia_max,magia_max,
    energiavital_max,blot_max,runes_max,supersticion_max, experiencia,supersticion;
    //caracteristicas que seran mas altas o mas bajas dependiendo de la poblacion.
    Arbol_Genealogico arbol_genealogico_pueblo;
    const char* str_edda_actual;//edda actual de cada poblacion.
    Edda edda_actual;
    
    
};

#endif	/* PUEBLO_H */
 
