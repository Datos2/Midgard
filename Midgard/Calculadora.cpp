#include "Calculadora.h"
/*
int Calculadora::PorcentajeRand(int porcentaje){
    int porc=rand()% porcentaje;
    return porc;
}*/
void Calculadora::NumToBytes(int pnum,char* point){
    char respuesta[32];
    int i=31;
    while(pnum>0 and i>=0){
        if(pnum%2==1){
            respuesta[i]='1';
        }
        if(pnum%2==0){
            respuesta[i]='0';
        }
        if(pnum/2<int(pnum/2)){
            pnum=int(pnum/2)-1;
        }
        else if(pnum/2>int(pnum/2)){
            pnum=int(pnum/2);
        }
        else if(pnum/2==int(pnum/2)){
            pnum=pnum/2;
        }
        
        cout<<"este es el bit "<<i<<"->"<<respuesta[i]<<endl<<"este es el num"<<pnum<<endl;
        i--;

    }
    for(int i=0; i < 32; ++i){
    point[i] = respuesta[i];
  }
}

int Calculadora::BytesToNum(char* bit){
    bool primer=false;
    int num=1;
    for(int i=0;i<32;i++){
        if(bit[i]=='1'){
            for(i+1;i<32;i++){
                if(bit[i]=='0'){
                    num=num*2;
                }
                else if(bit[i]=='1'){
                    num=(num*2)+1;
                }
            }
            break;
        }
    }
    return num;
}