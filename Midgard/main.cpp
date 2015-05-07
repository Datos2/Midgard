

#include <cstdlib>
#include <iostream>

#include "BitVector.h"
#include "Individuo.h"
#include "Arbol_Genealogico.h"
#include "reproduccion.h"
using namespace std;
using namespace reproduccion;
//using namespace Calculadora;



int main(int argc, char** argv) {
    BitVector x1(8*32);
    BitVector x2(8*(8*4));
    int* bc1=new int[8];
    int* bc2=new int[8];
    for(int i=0;i<8;i++){
        bc1[i]=0x0F;
        bc2[i]=0x08;
    }
     
    //cout<<*(bc2);
    x1.initBitVector(bc1);
    x2.initBitVector(bc2);
    //x2.initBitVector(bc2);
    Individuo Javier("Guerrero",&x1);
    Individuo Magda("Sacerdotisa",&x2);
    
    Individuo Bebe1=reproduccion::cruce(32,Javier,Magda);
    Individuo Bebe2=reproduccion::cruce(32,Magda,Javier);
    
    //cout<<(int)Javier.getHP();
    //Arbol_Genealogico* myArbol=new Arbol_Genealogico();
    //myArbol->nuevoIndividuo(Javier);
}

