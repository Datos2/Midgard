#include "reproduccion.h"

Individuo reproduccion::cruce(int rand,Individuo pPadre1,Individuo pPadre2){
    BitVector newBit(4*8*8);
    int* padre1=pPadre1.getBitVector().getBits();
    int* padre2=pPadre1.getBitVector().getBits();
    for (int i=0;i<8;i++){
        int index1=seekFirstBit(padre1[i]);
        int index2=seekFirstBit(padre2[i]);
        if(index1>index2){
            int mask1=makeMask1(rand%index1);
            int mask2=makeMask1(rand%index1);
            int newStat1=padre1[i]&mask1;
            int newStat2=padre2[i]&mask2;
            int newStat=newStat1|newStat2;
            newBit.setNum(newStat,i);
        }
        else if(index1<=index2){
            int mask1=makeMask1(rand%index2);
            int mask2=makeMask1(rand%index2);
            int newStat1=padre1[i]&mask1;
            int newStat2=padre2[i]&mask2;
            int newStat=newStat1|newStat2;
            newBit.setNum(newStat,i);
        }
        
    }
    Individuo Bebe("guerrero",newBit);
    return Bebe;
}
int reproduccion::makeMask1(int index){
    int num=0;
    int bit=0x01;
    for(int i=0;i<=index;i++){
        num^=bit<<i;
    }
    return num;
}
int reproduccion::makeMask2(int index){
    int num=0;
    int bit=0x01;
    for(int i=((8*4)-2);i>index;i--){
        num|=bit<<i;
    }
    return num;
}
int reproduccion::seekFirstBit(int num){
    int index;
    bool found= true;
    int bit=0x01;
    for(int i=0;i<(8*4);i++){
        num=num>>i;
        //cout<<"este es el bit"<<i<<endl<<"este es el numero"<<num<<endl;
        if(found and num<1){
            //cout<<"si entro"<<endl;
            index=i;
            found=false;
        }
        
    }
    return index;
}