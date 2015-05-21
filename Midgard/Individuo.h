#ifndef CRIATURA_H
#define	CRIATURA_H
#include <iostream>
#include "Estructuras/BitVector.h"
using namespace std;
class Individuo {
public:
    Individuo();
    Individuo(int);
    Individuo(BitVector*,int);
    BitVector* getBitVector();
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
    int getATK();
    int getHP();
    int getSpeed();
    int getDef();
    int getInt();
    int getMP();
    int getVit();
    int getBlot();
    int getRunes();
    void setEdad(int edad);
    int getEdad();
    void matarIndividuo();
    
protected:
    static int idCriat;///variable contador para ir poniendo el id
    BitVector* _stats;//ataque,velocidad,defensa,inteligencia,magia,energia_vital,blot,runes
    int HP,id,edad,experiencia;
    bool genero;
    string tipo;//ya sea defensa,atacante,hechicero, entre otros.
    
};

#endif	/* CRIATURA_H */