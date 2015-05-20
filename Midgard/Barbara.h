

#ifndef BARBARA_H
#define	BARBARA_H
#include "Pueblo.h"
#include "Edda.h"

class Barbara: public Edda {
public:
    Barbara();
    ~Barbara();
    void setArmas();
    void uso_armas();
    bool verifica_supersticion_barbara(Pueblo);
      
    
private:
    
};

#endif	/* BARBARA_H */

