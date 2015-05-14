

#include <cstdlib>
#include "Armas.h"
#include "Xml.h"
#include "Elves.h"
#include "Individuo.h"
#include "Pueblo.h"
#include "Mundo.h"
#include "Edda.h"
#include <iostream>
#include <string>

using namespace std; 
 
/*
 * 
 */
int main() {
    
   /* Mundo mundo;
    ListaSimple<Pueblo>*list=new ListaSimple<Pueblo>(); 
    list=mundo.generarPoblacionInicial();
    cout<<list->getHead()->getValue().GetTipo()<<endl;*/
    
   /* Xml xml("Armas.xml");
    ListaSimple<const char*> *lista_armas=new ListaSimple<const char*>();
    lista_armas=xml.getElements();
    cout<<lista_armas->getHead()->getValue()<<endl;*/
    
    //cout<<list->getHead()->getValue().GetTipo()<<endl;
    Armas *ar=new Armas();
    ar->SetTotal_armas();
    cout<<ar->GetTotal_armas()->getHead()->getValue()<<endl;
    //Xml xml("Armas.xml");
    //ListaSimple<const char*>list=xml.getElements();
   // cout<<list.getHead()->getValue()<<endl;
    
   
    return 0;
}

