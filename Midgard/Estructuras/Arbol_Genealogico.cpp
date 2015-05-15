#include "Arbol_Genealogico.h"

Arbol_Genealogico::Arbol_Genealogico(){
    
    poblacionActual=new ListaSimple<Nodo_Arbol*>();
    poblacionTotal=new ListaSimple<Nodo_Arbol>();
    
}

Arbol_Genealogico::~Arbol_Genealogico(){
    delete poblacionActual;
    delete poblacionTotal;
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
void Arbol_Genealogico::matarIndividuosViejos(int edadMax){
    //bool Dwarves;
    int largoPoblacion_total=0;
    while(largoPoblacion_total<num_Pobl){
            if(edadMax<this->poblacionActual->getElemento(largoPoblacion_total)->getThis()->getEdad()){
            matarIndividuo(poblacionActual->getElemento(largoPoblacion_total)->getId());
        }
        
        largoPoblacion_total++;
    }
}

void Arbol_Genealogico::matarIndividuo(int id){
    int largo=poblacionActual->largoLista();
    for(int i=0;i<largo;i++){
        if(id==poblacionActual->getElemento(i)->getId()){
            poblacionActual->eliminarPos(i);
        }
    }
}

int Arbol_Genealogico::tipoPoblacion(){//retorna un int segun el tipo de pueblo.
        if(this->tipo_poblacion.compare("Dwarves")==0)
            return 1;
        else if(this->tipo_poblacion.compare("Elves")==0)
            return 2;
        else if(this->tipo_poblacion.compare("DarkElves")==0)
            return 3;
        else if(this->tipo_poblacion.compare("Giants")==0)
            return 4;
}
int Arbol_Genealogico::getNum_Pobl(){
    return num_Pobl;
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

void Arbol_Genealogico::setTipo_poblacion(string tipo_poblacion) {
    this->tipo_poblacion = tipo_poblacion;
}

string Arbol_Genealogico::getTipo_poblacion() {
    return tipo_poblacion;
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
void Arbol_Genealogico::poblacionInicial(int numPoblacion,int HP,int spd,int def,int Int,int MP,int VIT,int blot,int runes){
    srand (time(NULL));//.......................................................................................
    for(int i=0;i<numPoblacion;i++){
        BitVector* newBit=new BitVector(32*8);
        int* newArray=new int[8];
        newArray[0]=rand()%HP;
        newArray[1]=rand()%spd;
        newArray[2]=rand()%def;
        newArray[3]=rand()%Int;
        newArray[4]=rand()%MP;
        newArray[5]=rand()%VIT;
        newArray[6]=rand()%blot;
        newArray[7]=rand()%runes;
        newBit->initBitVector(newArray);
        Individuo newInd("nada",newBit);
        nuevoIndividuo(newInd);
    }
     
}


void Arbol_Genealogico::nuevaGeneracion(){
    srand (time(NULL));//.......................................................................................
    ListaSimple<Individuo *> poblacion;

    int cantidadNacimientos=int(poblacionActual->largoLista()/3);
    int maxFit=maxFitness(poblacionActual);
    for(int i = 0; i < poblacionActual->largoLista(); i++){
        poblacion.insertar(poblacionActual->getElemento(i)->getThis());
    }
    for(int j = 0; j < cantidadNacimientos; j++){
        Individuo* padre1;
        Individuo* padre2;
        int rand1=rand()%maxFit;
        int rand2=rand()%maxFit;
        for(int g = 0; g < poblacion.largoLista(); g++){
            if(fitnessInd(poblacion.getElemento(g))>=rand1){
                padre1=poblacion.getElemento(g);
                poblacion.eliminarPos(g);
            }
        }
        for(int f = 0; f < poblacion.largoLista(); f++){
            if(fitnessInd(poblacion.getElemento(f))>=rand1){
                padre2=poblacion.getElemento(f);
                poblacion.eliminarPos(f);
            }
            
        }
        Individuo Bebe1=cruce(rand(),padre1,padre2);
        Individuo Bebe2=cruce(rand(),padre2,padre1);
        nuevoIndividuo(padre1->getId(),padre2->getId(),Bebe1);
        nuevoIndividuo(padre1->getId(),padre2->getId(),Bebe2);
        
    }
}

Individuo* Arbol_Genealogico::getPadre(int fitness){
    
}