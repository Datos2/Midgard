

#include <cstdlib>
#include "Armas.h"
#include "Datos/Xml.h"
#include "Elves.h"
#include "Individuo.h"
#include "Pueblo.h"
#include "Mundo.h"
#include "reproduccion.h"
#include "Edda.h"
#include <iostream>
#include <string>
#include <stdio.h>     
#include <stdlib.h>   
#include <time.h> 
using namespace std;
using namespace reproduccion;
/*
 * 
 */
int main() {
    
    srand (time(NULL));
    BitVector x1(8*32);
    BitVector x2(8*(8*4));
    int* bc1=new int[8];
    int* bc2=new int[8];
    for(int i=0;i<8;i++){
        bc1[i]=0xFF;
        bc2[i]=0x38;
    }
     
    //cout<<*(bc2);
    x1.initBitVector(bc1);
    x2.initBitVector(bc2);
    //x2.initBitVector(bc2);
    Individuo Javier("Guerrero",&x1);
    Individuo Magda("Sacerdotisa",&x2);
    
    Individuo Bebe1=reproduccion::cruce(8,&Javier,&Magda);
    Individuo Bebe2=reproduccion::cruce(8,&Magda,&Javier);
    
    cout<<"hp bebe1 "<<Bebe1.getHP()<<endl;
    cout<<"hp bebe2 "<<Bebe2.getHP()<<endl;
    
    return 0;
}

