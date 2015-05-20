/* 
 * File:   randomGenerator.cpp
 * Author: steven
 * 
 * Created on May 15, 2015, 11:53 AM
 */

#include "randomGenerator.h"

randomGenerator::randomGenerator() {
}


randomGenerator::~randomGenerator() {
}
int randomGenerator::numeroAleatorio(int inicio,int final){
    srand (time(NULL));
    int num=rand() % final + inicio; 
    return num;
}

