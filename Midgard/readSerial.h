#include <stdio.h>
#include <string.h>
#include <iostream>
#ifndef READSERIAL_H
#define	READSERIAL_H

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

