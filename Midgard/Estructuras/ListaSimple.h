

#ifndef LISTASIMPLE_H
#define	LISTASIMPLE_H

#include <iostream>
#include <cstdio>
#include "Nodo.h"


using namespace std;

template<class T>//se define una clase template.
//template<class E, template<typename> class T >
class ListaSimple{//clase lista
private:
    Nodo<T> *head;//nodos head y tail como atributos privados.
    int num_nodos;//se inicializa el contador de nodos.

public://se definen los metodos publicos

    ListaSimple(){//constructor sin parametros.
    head=NULL;//se inicializan el head y tail como nulos.
    num_nodos=0;
}

    ~ListaSimple() {//destructor de la clase.
        this->clearList(); //elimina el objeto.
}

    void insertar(T* valor){//metodo insertar un elemento al inicio.
    cout<<"insertando un puntero"<<endl;
    //cout<<((int)valor->getOffset())<<endl;
    Nodo<T> *nodo_nuevo=new Nodo<T>((*valor));//se crea el nodo con valor del parametro.
    cout<<"se inserto un puntero"<<endl;
    if(head==NULL)//si el head es nulo.
        head=nodo_nuevo;
    else{
        nodo_nuevo->setNext(head);//asigna el head como el siguiente del nuevo
        head = nodo_nuevo;
    }
    num_nodos++;//aumenta variable.
}
void insertar(T valor){//metodo insertar un elemento al inicio.
    cout<<"insertando un dato"<<endl;
    Nodo<T> *nodo_nuevo=new Nodo<T>(valor);//se crea el nodo con valor del parametro.
    //Nodo<T> *tmp = head;//se define temporal.
    if(head==NULL)//si el head es nulo.
        head=nodo_nuevo;
    else{
        nodo_nuevo->setNext(head);//asigna el head como el siguiente del nuevo
        head = nodo_nuevo;
    }
    num_nodos++;//aumenta variable.
}

void insertarFinal(T valor){//metodo insertar un elemento al inicio.
    cout<<"insertando un dato"<<endl;
    Nodo<T> *nodo_nuevo=new Nodo<T>(valor);//se crea el nodo con valor del parametro.
    
    if(head==NULL)//si el head es nulo.
        head=nodo_nuevo;
    else{
        Nodo<T>* tmp=this->getNodo(num_nodos-1);
        tmp->setNext(nodo_nuevo);
    }
    num_nodos++;//aumenta variable.
}

void eliminarPos(int pos){//elimina el elemento segun posicion.
        Nodo<T> *tmp;
        if(pos==0){
            head=head->getNext();
            head->~Nodo();
        }
        else if(pos==largoLista()-1){
            tmp=this->getNodo(largoLista()-2);
            tmp->setNext(NULL);
            tmp=this->getNodo(largoLista()-1);
            tmp->~Nodo();
            
        }
        else if(pos<=0 or pos>largoLista()){
            cout<<"index error";
        }
        else{
           tmp=this->getNodo(pos-1);
            tmp->setNext(this->getNodo(pos+1));
            tmp=this->getNodo(pos);
            tmp->~Nodo(); 
        }
        num_nodos--;
}

Nodo<T> * getHead(){//devuelve el head de la lista.
    return head;
}

int get_num_nodos(){
    return this->num_nodos;
}

int largoLista(){//devuelve el largo de la lista.
		Nodo<T> *tmp = head;
		int contador=0;
		while (tmp!=NULL) {//recorre la lista hasta que sea nula.
			tmp = tmp->getNext();//asigna al siguiente.
			contador++;//contador de elementos se suma.
		}
    return contador;//se retorna valor.
}

T getElemento(int pos){//devuelve elemento segun posicion.
	Nodo<T> *tmp = head;
        if(pos>0 and pos<=this->largoLista()-1){///si esta en el rango.
            tmp=tmp->getNext();
            for(int i=1;i<pos;i++){
                tmp=tmp->getNext();
            }
        
        }
        return tmp->getValue();
};

Nodo<T>* getNodo(int pos){//devuelve elemento segun posicion.
	Nodo<T> *tmp = head;
        if(pos>0 and pos<=this->largoLista()-1){///si esta en el rango.
            tmp=tmp->getNext();
            for(int i=1;i<pos;i++){
                tmp=tmp->getNext();
            }
        
        }
        else{
            cout<<"index Error";
        }
        return tmp;
}

void change_pos_value(int id,int new_value){
    Nodo<T> *nodo=getNodo(id);
    nodo->setValue(new_value);
}

void clearList(){//destruye la lista.
    /*Nodo<T> *tmp = head;      
    while (tmp != NULL) {    
        head = head->getNext();
        delete tmp;
        tmp = head;
    }
    head = head = NULL;*/}
};

#endif	/* LISTASIMPLE_H */

