
#include "Armas.h"

Armas::Armas() {
    total_armas= new ListaSimple<const char*>();
} 

Armas::~Armas() {
}

void Armas::SetTotal_armas() {
    Xml xml("Armas.xml");
    ListaSimple<const char*> lista_armas=ListaSimple<const char*>();
    lista_armas=xml.getElements();
    *total_armas=lista_armas;
    //ListaSimple<const char*> *Elements = new ListaSimple<const char*>();
    //*Elements=xml.getElements();
    //this->total_armas = xml.getElements();
}

ListaSimple<const char*> *Armas::GetTotal_armas()  {
    return total_armas;
}

