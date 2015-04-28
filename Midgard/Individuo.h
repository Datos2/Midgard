
#ifndef INDIVIDUO_H
#define	INDIVIDUO_H
#include <iostream>

using namespace std;
class Individuo {
public:
    Individuo();
    Individuo(string tipo);
    ~Individuo();
protected:
    int edad,vida,experiencia,velocidad,defensa,inteligencia,
    magia,energia_vital,blot,runes,supersticion;
    bool genero;
    string tipo;//ya sea defensa,atacante,hechicero, entre otros.
};

#endif	/* INDIVIDUO_H */

