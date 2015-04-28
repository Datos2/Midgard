#ifndef CRIATURA_H
#define	CRIATURA_H
#include <iostream>

using namespace std;
class Individuo {
public:
    Individuo();
    Individuo(string tipo);
    //~Criatura();
    int getId();
    string getTipo();
protected:
    static int idCriat;///variable contador para ir poniendo el id
    int edad,vida,experiencia,velocidad,defensa,inteligencia,
    magia,energia_vital,blot,runes,supersticion,id;
    bool genero;
    string tipo;//ya sea defensa,atacante,hechicero, entre otros.
};

#endif	/* CRIATURA_H */