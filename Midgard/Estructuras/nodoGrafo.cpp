#include "nodoGrafo.h"

nodoGrafo::nodoGrafo() {
	// TODO Auto-generated constructor stub

}

nodoGrafo::~nodoGrafo() {
	// TODO Auto-generated destructor stub
}

nodoGrafo* nodoGrafo::getPadre()
{
	return this->_padre;
}

nodoGrafo* nodoGrafo::getMadre()
{
	return this->_madre;
}

nodoGrafo* nodoGrafo::getPareja(){
	return this->_pareja;
}

LinkedList<nodoGrafo*>* nodoGrafo::getHijos(){
	this->_hijos;
}
