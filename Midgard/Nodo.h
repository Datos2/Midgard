
#ifndef NODO_H
#define	NODO_H
#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;
template <class T>//se crea la clase template.

class Nodo {
private:
    T dato;//dato del nodo.
    Nodo *siguiente;//puntero hacia el siguiente nodo.

public:

    Nodo(void){ //constructor vacio.
    dato=NULL;
    siguiente=NULL;
}
    //Constructor con valor.
    Nodo(T valor){
        dato=valor;
        siguiente=NULL;
    }
    //  Constructor con valor y puntero hacia el siguiente
    Nodo(T valor, Nodo *next){//constructor con valor y puntero siguiente.
    dato=valor;
    siguiente=next;
}
    // Getters y setters
    T getValue(){//retorna dato.
    return dato;
}
    Nodo* getNext(){//retorna puntero siguiente.
    return siguiente;
}
    void setValue(T pdata){
        this->dato=pdata;
    }
    void setNext(Nodo<T> *nodo){//setea puntero siguiente.
    siguiente=nodo;
}
    ~Nodo(){
    delete this;
}


};


#endif	/* NODO_H */

