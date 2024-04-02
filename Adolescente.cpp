#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>
#include "Adolescente.h"
#include "Asistente.h"
using namespace std;

//Constructor clase 
Adolescente::Adolescente(string nombre, int edad, string ocupacion, string institucion, int nivel): Asistente(nombre, edad, tipoAsistente,ocupacion)
{
   
    this -> institucion = institucion;
    this -> nivel = nivel;

}

Adolescente::~Adolescente(){};//Destructor clase

//Getters y Setters

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
