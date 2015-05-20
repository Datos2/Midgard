

#ifndef CIENCIATECNOLOGIA_H
#define	CIENCIATECNOLOGIA_H
#include "Edda.h"
#include "Pueblo.h"

class CienciaTecnologia: public Edda {
public:
    CienciaTecnologia();
    virtual ~CienciaTecnologia();
    bool verifica_inteligencia_ciencia(Pueblo*);
private:

};

#endif	/* CIENCIATECNOLOGIA_H */

