/* 
 * File:   readSerial.h
 * Author: briam
 *
 * Created on May 20, 2015, 6:23 PM
 */

#ifndef READSERIAL_H
#define	READSERIAL_H
#include <stdio.h>
#include <string.h>
#include <iostream>

class readSerial {
public:
    int leerSerial();
private:
char serialPortFilename[];
int i;
char readBuffer[4];
FILE *serPort;

};

#endif	/* READSERIAL_H */


