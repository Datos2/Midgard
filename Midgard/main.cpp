

#include <cstdlib>
#include "Armas.h"
#include "Datos/Xml.h"
using namespace std;
 
/*
 * 
 */
int main() {

    Armas *ar=new Armas();
    ar->SetTotal_armas();
   // cout<<ar->GetTotal_armas().getElemento(0)<<endl;
    //Xml xml("LDMM.xml");
    //ListaSimple<const char*> list;
   // list=xml.getElements();
   // cout<<list.getHead()->getValue()<<endl;
    return 0;
}

