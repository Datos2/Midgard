

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
    cout<<(int)x1.vector[3]<<endl;
    //BitVector x2(8*(8*4));
    int bc1[8]={0};
    int* bc2=bc1;
    for(int i=0;i<8;i++){
        bc2[i]=0x0F;
    }
  
    //cout<<*(bc2);
    //x1.initBitVector(bc2);
    
    
    //x2.initBitVector(bc2);
    //Individuo Javier("Guerrero");
    //Individuo Magda("Sacerdotisa");
    //cout<<x1.getValue(0)<<"    "<<bc1[0];
    //Individuo Bebe=reproduccion::cruce(2345,Javier,Magda);
    //cout<<(int)Javier.getHP();
    //Arbol_Genealogico* myArbol=new Arbol_Genealogico();
    //myArbol->nuevoIndividuo(Javier);
}

