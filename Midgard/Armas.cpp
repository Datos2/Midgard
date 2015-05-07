
#include "Armas.h"

Armas::Armas() {
    total_armas;
} 

Armas::~Armas() {
}

void Armas::SetTotal_armas() {
    Xml xml("LDMM.xml");
   // ListaSimple<const char*> lista_armas=ListaSimple<const char*>();
    //lista_armas=xml.getElements();
    ListaSimple<const char*> *Elements = new ListaSimple<const char*>();
    *Elements=xml.getElements();
    //this->total_armas = xml.getElements();
}

ListaSimple<const char*> Armas::GetTotal_armas()  {
    return total_armas;
}

