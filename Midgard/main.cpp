

#include <cstdlib>
#include "Armas.h"
#include "Datos/Xml.h"
#include "Elves.h"
#include "Individuo.h"
#include "Pueblo.h"
#include "Mundo.h"
#include "Edda.h"
#include <iostream>
using namespace std;
 
/*
 * 
 */
int main() {
    Mundo mundo;
    ListaSimple<Pueblo>*list=mundo.generarPoblacionInicial();
    cout<<list->getHead()->getValue().GetTipo()<<endl;
    //Armas *ar=new Armas();
    //ar->SetTotal_armas();
   // cout<<ar->GetTotal_armas().getElemento(0)<<endl;
    //Xml xml("Armas.xml");
    //ListaSimple<const char*>list=xml.getElements();
   // cout<<list.getHead()->getValue()<<endl;
    
   
    return 0;
}

