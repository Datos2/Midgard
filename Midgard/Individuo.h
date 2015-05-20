#ifndef CRIATURA_H
#define	CRIATURA_H
#include <iostream>
#include "Estructuras/BitVector.h"
using namespace std;
class Individuo {
public:
    Individuo();
    Individuo(string);
    Individuo(string,BitVector*);
    virtual BitVector* getBitVector();
    virtual int getId();
    virtual string getTipo();
    virtual void setHP(int);
    virtual void setSpeed(int);
    virtual void setDef(int);
    virtual void setInt(int);
    virtual void setMP(int);
    virtual void setVit(int);
    virtual void setBlot(int);
    virtual void setRunes(int);
    virtual int getHP();
    virtual int getSpeed();
    virtual int getDef();
    virtual int getInt();
    virtual int getMP();
    virtual int getVit();
    virtual int getBlot();
    virtual int getRunes();
    void setEdad(int edad);
    int getEdad();
    bool estamuerto();
    void matarIndividuo();//mata al individuo.
protected:
    static int idCriat;///variable contador para ir poniendo el id
    BitVector* _stats;//vida,velocidad,defensa,inteligencia,magia,energia_vital,blot,runes
    int id,edad,experiencia;
    bool genero;
    string tipo;//ya sea defensa,atacante,hechicero, entre otros.
};

#endif	/* CRIATURA_H */