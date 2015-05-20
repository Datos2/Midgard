/* 
 * File:   readSerial.h
 * Author: steven
 *
 * Created on May 15, 2015, 11:41 AM
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

