

#include "Mundo.h"
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

Mundo::Mundo() {
    poblaciones=this->generarPoblacionInicial();
}

Mundo::~Mundo() {
    delete poblaciones;
}

void Mundo::SetPoblaciones(ListaSimple<Pueblo>* poblaciones) {
    this->poblaciones = poblaciones;
}

ListaSimple<Pueblo>* Mundo::GetPoblaciones(){
    return poblaciones;
}

ListaSimple<Pueblo>* Mundo::generarPoblacionInicial(){//genera
    ListaSimple<Pueblo>*lista_pueblos=new ListaSimple<Pueblo>();
    Pueblo pueblo_dwarves=Pueblo("Dwarves",80,80,90,30,125,40,125,15,40,10);
    Pueblo pueblo_giants=Pueblo("Giants",75,95,60,25,60,30,60,20,80,25);
    Pueblo pueblo_darkelves=Pueblo("DarkElves",120,60,50,60,70,100,50,95,90,30);
    Pueblo pueblo_elves=Pueblo("Elves",100,85,55,70,80,125,100,25,50,35);
    lista_pueblos->insertar(pueblo_dwarves);
    lista_pueblos->insertar(pueblo_giants);
    lista_pueblos->insertar(pueblo_darkelves);
    lista_pueblos->insertar(pueblo_elves);
    return lista_pueblos;
    
}
