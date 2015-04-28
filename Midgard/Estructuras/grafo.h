#ifndef GRAFO_H
#define	GRAFO_H

#include "nodoGrafo.h"

class grafo {

private:
	nodoGrafo* _rootGood;

public:
	grafo();
	virtual ~grafo();
	nodoGrafo* getRootGood();
};

#endif	/* GRAFO_H */

