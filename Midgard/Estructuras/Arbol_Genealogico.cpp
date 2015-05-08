#include "../Estructuras/Arbol_Genealogico.h"





Arbol_Genealogico::Arbol_Genealogico(){
    
    poblacionActual=new ListaSimple<Nodo_Arbol*>();
    poblacionTotal=new ListaSimple<Nodo_Arbol>();
    
}

Arbol_Genealogico::~Arbol_Genealogico(){
    delete this;
}

void Arbol_Genealogico::nuevoIndividuo(Individuo pcriatura){
    Nodo_Arbol newNod(pcriatura);
    poblacionTotal->insertar(newNod);
    poblacionActual->insertar(&newNod);
    num_Pobl++;
    
}

void Arbol_Genealogico::nuevoIndividuo(int id_padre1,int id_padre2,Individuo pcriatura){
    Nodo_Arbol newNod(buscarNodo(id_padre1),buscarNodo(id_padre2),pcriatura);
    Nodo_Arbol * ptrNod=&newNod;
    poblacionTotal->insertar(newNod);
    poblacionActual->insertar(ptrNod);
    num_Pobl++;
    
}
void Arbol_Genealogico::matarIndividuosViejos(){
    //mata a los individuos de más de n años
    
}
int Arbol_Genealogico::getNum_Pobl(){
    return num_Pobl;
}
void Arbol_Genealogico::matarIndividuo(int id){
    
}

Individuo* Arbol_Genealogico::buscarIndividuo(int pid){
    for(int i=0;i<poblacionActual->largoLista();i++){
        if(pid=poblacionActual->getElemento(i)->getId()){
            return poblacionActual->getElemento(i)->getThis();
        }
        cout<<"el individuo con este id no existe en la poblacion actual"<<endl;
        return NULL;
    }
}

Nodo_Arbol* Arbol_Genealogico::buscarNodo(int pid){
    for(int i=0;i<poblacionActual->largoLista();i++){
        if(pid=poblacionActual->getElemento(i)->getId()){
            return poblacionActual->getElemento(i);
        }
        cout<<"el individuo con este id no existe en la poblacion actual"<<endl;
        return NULL;
    }
}