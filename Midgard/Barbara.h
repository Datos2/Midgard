

#ifndef BARBARA_H
#define	BARBARA_H
#include "Edda.h"
#include "Pueblo.h"

class Barbara: public Edda {
public:
    Barbara();
    ~Barbara();
    void setArmas();
    void uso_armas();
    bool verifica_supersticion(Pueblo);
      
    
private:
    
};

#endif	/* BARBARA_H */

