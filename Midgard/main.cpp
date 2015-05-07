

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
    for(int i=0;i<8;i++){
        bc1[i]=0x0F;
    }
     
    //cout<<*(bc2);
    x1.initBitVector(bc1);
    int ba=makeMask2(2);
    int a=1;
    cout<<"ba "<<(a)<<endl;
    
    //x2.initBitVector(bc2);
    //Individuo Javier("Guerrero");
    //Individuo Magda("Sacerdotisa");
    //cout<<x1.getValue(0)<<"    "<<bc1[0];
    //Individuo Bebe=reproduccion::cruce(2345,Javier,Magda);
    //cout<<(int)Javier.getHP();
    //Arbol_Genealogico* myArbol=new Arbol_Genealogico();
    //myArbol->nuevoIndividuo(Javier);
}

