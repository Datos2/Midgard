BitVector::BitVector(int pnum){
    //vector=NumToBits(pnum);}
   
}
BitVector::BitVector(){
    
}
int BitVector::getNum(){
    
}
void BitVector::setBits(char* pvector){
    vector=pvector;
}
char* BitVector::getBits(){
    
}

void BitVector::NumToBits(int pnum,char* point){
    char respuesta[32];
    for(int i=0; i < 32; ++i){
    respuesta[i] = '0';
  }
    
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

int BitVector::BitsToNum(char* bit){
    bool primer=true;
    int num=1;
    for(int i=0;i<32;i++){
        if(bit[i]=='1'and primer ){
            primer=false;
            cout<<"este es el primer 1  "<<i<<endl;
            i++;
            for(i;i<32;i++){
                if(bit[i]=='0'){
                    num=num*2;
                }
                else if(bit[i]=='1'){
                    num=(num*2)+1;
                }
                cout<<"este es el num  "<<num<<endl;
            }
            
        }
    }
    return num;
}
