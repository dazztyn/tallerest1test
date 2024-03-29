#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>
#include "Adolescente.h"
//#include "Asistente.h"
using namespace std;

//Constructor clase 
Adolescente::Adolescente(string nombre, int edad, string ocupacion, string institucion, int nivel)
{
    this -> nombre = nombre;
    this -> edad = edad;
    this -> ocupacion = ocupacion;
    this -> institucion = institucion;
    this -> nivel = nivel;

}

Adolescente::~Adolescente(){};//Destructor clase

//Getters y Setters
string Adolescente::getNombre()
{
    return this -> nombre;
}

void Adolescente::setNombre(string nombre)
{
    this -> nombre = nombre;
}

int Adolescente::getEdad()
{
    return this -> edad;
}

void Adolescente::setEdad(int edad)
{
    this -> edad = edad;
}

string Adolescente::getOcupacion()
{
    return this -> ocupacion = ocupacion;
}

void Adolescente::setOcupacion(string ocupacion)
{
    this -> ocupacion = ocupacion;
}

string Adolescente::getInstitucion()
{
    return this -> institucion = institucion;
}

void Adolescente::setInstitucion(string institucion)
{
    this -> institucion = institucion;
}

int Adolescente::getNivel()
{
    return this -> nivel = nivel;
}

void Adolescente::setNivel(int nivel)
{
    this -> nivel = nivel;
}

void Adolescente::addAdolescente(Asistente* ptrAsistente) //?? sera necesario para esta clase vecino?
{
    asistentes.push_back(ptrAsistente);
}