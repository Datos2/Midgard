#include "BitVector.h"


// int size .... bits
//
// chrVector[size/8];
// _size = size;
//

BitVector::BitVector(int pSize){
    vector= new int[pSize/32];
    _size = pSize;
    for(int i=0;i<8;i++){
        vector[i]=0;
    }
    
}
BitVector::BitVector(){
    vector= new int[8];
    _size = 32*4;
    for(int i=0;i<8;i++){
        vector[i]=0;
    }
}

void BitVector::initBitVector(int * pInitValue){
    
    for (int i=0;i< 8;i++){
        //cout<<i<<endl;
        //cout<<"value del pInit "<<*(pInitValue+i)<<endl;
        
        vector[i]=*(pInitValue+i);
        
        //cout<<i<<endl;
    }
    //cout<<"i final "<<i<<" i final"<<endl;
}





bool BitVector::getBit(int pBitNum){
    if(pBitNum < _size) // 64 0 63
        return false;
    else{
        int chr_index = pBitNum/(8*4);// indice del arreglo
        int bit_index = pBitNum%(8*4);// indice del bit 
        
        char indice = vector[chr_index];
        char mask = 0x01;
        mask = mask << bit_index;
        
        indice = indice&mask;
        if(indice == 0x00)
            return false;
        else
            return true;
    }
}








int* BitVector::getBits(){
    return vector;
}

void BitVector::setNum(int pnum,int pos){
        //cout<<"pos "<<pos<<endl;
        //cout<<"pnum "<<pnum<<endl;
        *(vector+pos)=pnum;
        //cout<<"vector "<<*(vector+pos)<<endl;
}

int BitVector::getValue(int crom){
    
   
        return this->vector[crom];
    
}