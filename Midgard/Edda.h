

#ifndef EDDA_H
#define	EDDA_H

class Edda {
public:
    Edda();
    virtual ~Edda();
    virtual void SetDuracion(int duracion);
    virtual int GetDuracion();
private:
    int duracion;
    
};

#endif	/* EDDA_H */

