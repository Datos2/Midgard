#ifndef CRIATURA_H
#define	CRIATURA_H
#include <iostream>
#include "BitVector.h"
using namespace std;
class Individuo {
public:
    Individuo();
    Individuo(string);
    Individuo(string,BitVector);
    //~Criatura();
    BitVector getBitVector();
    int getId();
    string getTipo();
    void setHP(int);
    void setSpeed(int);
    void setDef(int);
    void setInt(int);
    void setMP(int);
    void setVit(int);
    void setBlot(int);
    void setRunes(int);
    int getHP();
    int getSpeed();
    int getDef();
    int getInt();
    int getMP();
    int getVit();
    int getBlot();
    int getRunes();
    
protected:
    static int idCriat;///variable contador para ir poniendo el id
    BitVector _stats;//vida,velocidad,defensa,inteligencia,magia,energia_vital,blot,runes
    int id,edad,experiencia;
    bool genero;
    string tipo;//ya sea defensa,atacante,hechicero, entre otros.
};

#endif	/* CRIATURA_H */