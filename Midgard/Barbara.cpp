

#include "Barbara.h"


Barbara::Barbara(){duracion=1000;}


Barbara::~Barbara() {}
 

bool verifica_supersticion(Pueblo pueblo){//verifica si ya alcanzo la supersticion maxima para poder cambiar a la edda de fe y supersticion.
    return pueblo.GetSupersticion()==170;
}

