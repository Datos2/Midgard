#ifndef NODOGRAFO_H
#define	NODOGRAFO_H

#include "linkedList.h"

class nodoGrafo {

private:
	//individuo
	nodoGrafo* _madre;
	nodoGrafo* _padre;
	nodoGrafo* _pareja;
	LinkedList<nodoGrafo*>* _hijos;

public:
	nodoGrafo();
	virtual ~nodoGrafo();

	nodoGrafo* getMadre();
	nodoGrafo* getPadre();
	nodoGrafo* getPareja();
	LinkedList<nodoGrafo*>* getHijos();

};

#endif	/* NODOGRAFO_H */

