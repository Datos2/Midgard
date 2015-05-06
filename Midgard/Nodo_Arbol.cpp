#include "Nodo_Arbol.h"

Nodo_Arbol::Nodo_Arbol(Individuo pcriatura){ //constructor vacio.
    
    padre1=NULL;
    padre2=NULL;
    This=pcriatura;
    //cout<<"este es el id de la creatura ingresada-> ";
    //cout<<This.getId()<<endl;
    //cout<<"este es el tipo de la creatura ingresada-> ";
    //cout<<This.getTipo()<<endl;
}
Nodo_Arbol::Nodo_Arbol(Nodo_Arbol * a,Nodo_Arbol * b,Individuo pcriatura){
    
    padre1=a;
    padre2=b;
    This=pcriatura;
    //cout<<"este es el id de la creatura ingresada-> ";
    //cout<<This.getId()<<endl;
    //cout<<"este es el tipo de la creatura ingresada-> ";
    //cout<<This.getTipo()<<endl;
    }
Nodo_Arbol::Nodo_Arbol(){
    padre1=NULL;
    padre2=NULL;
    }

Nodo_Arbol * Nodo_Arbol::getPadre1(){//retorna dato.
    return padre1;
}
    Nodo_Arbol* Nodo_Arbol::getPadre2(){//retorna dato.
    return padre2;
}
    Individuo* Nodo_Arbol::getThis(){//retorna dato.
    return &This;
}
    
    int Nodo_Arbol::getId(){
        return This.getId();
    }
/*  
Nodo_Arbol::~Nodo_Arbol(){
    delete this;
}*/