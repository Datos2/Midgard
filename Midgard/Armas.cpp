
#include "Armas.h"

Armas::Armas() {
    total_armas= new ListaSimple<const char*>();
} 

Armas::~Armas() {
}

void Armas::SetTotal_armas() {
    Xml xml("Armas.xml");
    //ListaSimple<const char*> *lista_armas=new ListaSimple<const char*>();
   // lista_armas=xml.getElements();
    total_armas=xml.getElements();
    
}

ListaSimple<const char*>* Armas::GetTotal_armas()  {
    return total_armas;
}

