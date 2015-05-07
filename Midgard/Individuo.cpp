#include "Individuo.h"
#include<iostream>
using namespace std;

int Individuo::idCriat=1;
Individuo::Individuo(){  
    
}
Individuo::~Individuo() {
}

Individuo::Individuo(string ptipo){
    cout<<ptipo<<endl;
    cout<<idCriat<<endl;
    this->id=idCriat;
    this->tipo=ptipo;
    cout<<tipo<<endl;
    cout<<id<<endl;
    idCriat++;
}

void Individuo::SetTipo(string tipo) {
    this->tipo = tipo;
}

string Individuo::GetTipo()  {
    return tipo;
}

void Individuo::SetGenero(bool genero) {
    this->genero = genero;
}

bool Individuo::IsGenero()  {
    return genero;
}

void Individuo::SetId(int id) {
    this->id = id;
}

int Individuo::GetId()  {
    return id;
}

void Individuo::SetSupersticion(int supersticion) {
    this->supersticion = supersticion;
}

int Individuo::GetSupersticion()  {
    return supersticion;
}

void Individuo::SetRunes(int runes) {
    this->runes = runes;
}

int Individuo::GetRunes()  {
    return runes;
}

void Individuo::SetBlot(int blot) {
    this->blot = blot;
}

int Individuo::GetBlot()  {
    return blot;
}

void Individuo::SetEnergia_vital(int energia_vital) {
    this->energia_vital = energia_vital;
}

int Individuo::GetEnergia_vital()  {
    return energia_vital;
}

void Individuo::SetMagia(int magia) {
    this->magia = magia;
}

int Individuo::GetMagia()  {
    return magia;
}

void Individuo::SetInteligencia(int inteligencia) {
    this->inteligencia = inteligencia;
}

int Individuo::GetInteligencia()  {
    return inteligencia;
}

void Individuo::SetDefensa(int defensa) {
    this->defensa = defensa;
}

int Individuo::GetDefensa()  {
    return defensa;
}

void Individuo::SetVelocidad(int velocidad) {
    this->velocidad = velocidad;
}

int Individuo::GetVelocidad()  {
    return velocidad;
}

void Individuo::SetExperiencia(int experiencia) {
    this->experiencia = experiencia;
}

int Individuo::GetExperiencia()  {
    return experiencia;
}

void Individuo::SetVida(int vida) {
    this->vida = vida;
}

int Individuo::GetVida()  {
    return vida;
}

void Individuo::SetEdad(int edad) {
    this->edad = edad;
}

int Individuo::GetEdad()  {
    return edad;
}

void Individuo::SetIdCriat(int idCriat) {
    Individuo::idCriat = idCriat;
}

int Individuo::GetIdCriat() {
    return idCriat;
}


bool Individuo::EdadMuerte(){}

bool Individuo::EdadParaPelea(){}