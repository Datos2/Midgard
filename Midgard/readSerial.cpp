#include "readSerial.h"

int readSerial::leerSerial(){
    char serialPortFilename[] = "/dev/ttyACM0";
            int i;
        char readBuffer[1024];

    FILE *serPort = fopen(serialPortFilename, "r");

    if (serPort == NULL)
	{
            printf("ERROR");	
	}

    
	memset(readBuffer, 0, 1024);
	fread(readBuffer, sizeof(char),1024,serPort);


        sscanf(readBuffer, "%d", &i);
        std::cout<<i<<std::endl;
	
        return i;
}