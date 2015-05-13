/* 
 * File:   reproduccion.cpp
 * Author: steven
 * 
 * Created on May 6, 2015, 10:06 PM
 */

#include "reproduccion.h"

Individuo reproduccion::cruce(int rand,Individuo pPadre1,Individuo pPadre2){
    BitVector* newBit=new BitVector(32*8);
    int* padre1=pPadre1.getBitVector()->getBits();
    int* padre2=pPadre2.getBitVector()->getBits();
    cout<<"primer bit de padre 1 "<<padre1[0]<<endl;
    cout<<"primer bit de padre 2 "<<padre2[0]<<endl;
    for (int i=0;i<8;i++){
        int index1=seekFirstBit(padre1[i]);
        int index2=seekFirstBit(padre2[i]);
        if(index1>index2){
            int mask1=makeMask1(rand%index1);
            int mask2=makeMask2(rand%index1);
            int newStat1=padre1[i]&mask1;
            int newStat2=padre2[i]&mask2;
            int newStat=newStat1|newStat2;/*
            if(rand()%100<5){
                newStat=mutate(newStat,rand()%seekFirstBit(newStat));
            }*/
            newBit->setNum(newStat,i);
        }
        else if(index1<=index2){
            int mask1=makeMask1(rand%index2);
            int mask2=makeMask2(rand%index2);
            int newStat1=padre1[i]&mask1;
            int newStat2=padre2[i]&mask2;
            int newStat=newStat1|newStat2;/*
            if(rand()%100<5){
                newStat=mutate(newStat,rand()%seekFirstBit(newStat));
            }*/
            newBit->setNum(newStat,i);
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
    return (index+1);
}
int reproduccion::mutate(int chrom, int bit_index){
        
        int cromo = chrom;
        int mask = 0x01;
        mask = mask << bit_index;
        cromo = cromo^mask;
        return cromo;
}

int reproduccion::inversion(int num){
    int _num=num;
    int Num=seekFirstBit(_num);
    int rango=rand()%Num;
    int inicio=rand()%(Num-rango);
    int mask=0x01;
    for(inicio;inicio<Num+rango;inicio++){
        _num=_num^mask>>inicio;
    }
    return _num;
}

