
#ifndef FESUPERSTICION_H
#define	FESUPERSTICION_H
#include "Edda.h"
#include "Pueblo.h"
class FeSupersticion: public Edda {
public:
    FeSupersticion();
    virtual ~FeSupersticion();
    bool verifica_inteligencia_supersticion(Pueblo);
private:

};

#endif	/* FESUPERSTICION_H */

