

#include "Mundo.h"

Mundo::Mundo() {
    poblaciones=this->generarPoblacionInicial();
}

Mundo::~Mundo() {
    delete poblaciones;
}

void Mundo::SetPoblaciones(ListaSimple<Pueblo>* poblaciones) {
    this->poblaciones = poblaciones;
}

ListaSimple<Pueblo>* Mundo::GetPoblaciones(){
    return poblaciones;
}

ListaSimple<Pueblo>* Mundo::generarPoblacionInicial(){//genera las poblaciones iniciales.
    ListaSimple<Pueblo>*lista_pueblos=new ListaSimple<Pueblo>();
     
    /*Pueblo pueblo_dwarves=Pueblo("Dwarves",80,80,90,30,125,40,125,15,40,25);
    Pueblo pueblo_giants=Pueblo("Giants",75,95,60,25,60,30,60,20,80,30);
    Pueblo pueblo_darkelves=Pueblo("DarkElves",120,60,50,60,70,100,50,80,90,40);
    Pueblo pueblo_elves=Pueblo("Elves",100,85,55,70,80,125,100,25,50,50);*/
    
    Pueblo pueblo_dwarves=Pueblo("dwarves","parametrosdwarves.xml");
    Pueblo pueblo_giants=Pueblo("giants","parametrosgiants.xml");
    Pueblo pueblo_darkelves=Pueblo("darkelves","parametrosdarkelves.xml");
    Pueblo pueblo_elves=Pueblo("elves","parametroselves.xml");
    lista_pueblos->insertar(pueblo_dwarves);
    lista_pueblos->insertar(pueblo_giants);
    lista_pueblos->insertar(pueblo_darkelves);
    lista_pueblos->insertar(pueblo_elves);
    return lista_pueblos;
    
}

int Mundo::Combate(Individuo* Individuo1, Individuo* Individuo2){
    srand (time(NULL));//............................................
    int individuo1=1;
    int individuo2=2;
    Individuo* primero;
    Individuo* segundo;
    if(Individuo1->getSpeed()>=Individuo2->getSpeed()){
        primero=Individuo1;
        segundo=Individuo2;
    }
    if(Individuo1->getSpeed()<Individuo2->getSpeed()){
        primero=Individuo2;
        segundo=Individuo1;
        int individuo1=2;
    int individuo2=1;
    }
    int vidaPrimero=primero->getHP();
    int vidaSegundo=segundo->getHP();
    while(true){
        if(vidaPrimero<=0 and vidaSegundo<=0){
            return 0;//mueren los dos
        }
        if(vidaPrimero<=0){
            return individuo1;
        }
        if(vidaSegundo<=0){
            return individuo2;
        }
        if(rand()%100>=50){
        vidaSegundo-=primero->getATK();
        }
        if(rand()%100<=((primero->getMP()*100)/1000000)){
        vidaSegundo-=primero->getInt();
        }
        if(rand()%100<=((primero->getVit()*100)/1000000)){
        vidaPrimero+=primero->getInt();
        }
        //segundo individuo
        if(rand()%100>=50){
        vidaPrimero-=segundo->getATK();
        }
        if(rand()%100<=((segundo->getMP()*100)/1000000)){
        vidaPrimero-=segundo->getInt();
        }
        
        if(rand()%100<=((primero->getVit()*100)/1000000)){
        vidaSegundo+=segundo->getInt();
        }
    }
}
