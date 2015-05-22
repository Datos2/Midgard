

#include <cstdlib>
#include "Armas.h"
#include "Xml.h"
#include "Elves.h"
#include "Individuo.h"
#include "Pueblo.h"
#include "Mundo.h"
#include "Edda.h"
#include "randomGenerator.h"
#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <sstream>
#include <string>
#include <typeinfo>
using namespace std; 
 

/*
 * 
 */
int main() {
    //randomGenerator random; 
    //int num=random.numeroAleatorio(1,1000);

    //const char* s = const char*(itoa(num,charnum,10));
    //cout<<s.c_str()<<endl; 
    //cout.flush();
    
    Mundo mundo;
    ListaSimple<Pueblo>*list=new ListaSimple<Pueblo>(); 
    list=mundo.generarPoblacionInicial();
    cout<<list->getElemento(0).GetTipo()<<endl;
  //  list=mundo.generarPoblacionInicial();
    //cout<<list->getHead()->getValue().GetTipo()<<endl;
    
    /*Xml xml("Armas.xml");
    ListaSimple<const char*> *lista_armas=new ListaSimple<const char*>();
    lista_armas=xml.getElements();
    cout<< lista_armas->getHead()->getValue() <<endl;*/
    
    //cout<<list->getHead()->getValue().GetTipo()<<endl;
    /*Armas *ar=new Armas();
    ar->SetTotal_armas();
    ListaSimple<const char*> *list=new ListaSimple<const char*>();
    list=ar->GetTotal_armas();
    cout<<list->getHead()->getValue()<<endl;*/
    
    //Xml xml("Armas.xml");
    //ListaSimple<const char*>list=xml.getElements();
   // cout<<list.getHead()->getValue()<<endl;

   
    return 0;
}

