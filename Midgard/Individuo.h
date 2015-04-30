#ifndef CRIATURA_H
#define	CRIATURA_H
#include <iostream>

using namespace std;
class Individuo {
public://getters y setters de los atributos.
    Individuo();
    Individuo(string tipo);
    virtual ~Individuo();
    void SetTipo(string tipo);
    string GetTipo() ;
    void SetGenero(bool genero);
    bool IsGenero() ;
    void SetId(int id);
    int GetId() ;
    void SetSupersticion(int supersticion);
    int GetSupersticion() ;
    void SetRunes(int runes);
    int GetRunes() ;
    void SetBlot(int blot);
    int GetBlot() ;
    void SetEnergia_vital(int energia_vital);
    int GetEnergia_vital() ;
    void SetMagia(int magia);
    int GetMagia() ;
    void SetInteligencia(int inteligencia);
    int GetInteligencia() ;
    void SetDefensa(int defensa);
    int GetDefensa() ;
    void SetVelocidad(int velocidad);
    int GetVelocidad() ;
    void SetExperiencia(int experiencia);
    int GetExperiencia() ;
    void SetVida(int vida);
    int GetVida();
    void SetEdad(int edad);
    int GetEdad();
    static void SetIdCriat(int idCriat);
    static int GetIdCriat();
    
    virtual bool EdadMuerte();//verifica el limite de edad dependiendo de la especie.
    virtual bool EdadParaPelea();
protected:
    static int idCriat;///variable contador para ir poniendo el id
    int edad,vida,experiencia,velocidad,defensa,inteligencia,
    magia,energia_vital,blot,runes,supersticion,id;
    bool genero;
    string tipo;//ya sea defensa,atacante,hechicero, entre otros.
};

#endif	/* CRIATURA_H */