#include <iostream>
#include <vector>
#include "Adulto.h"
#include "Asistente.h"

using namespace std;

Adulto::Adulto(string nombre, int edad, string ocupacion, string empresa, string cargo) : Asistente(nombre, edad, tipoAsistente,ocupacion)
{

    this -> empresa = empresa;
    this -> cargo = cargo;


}

Adulto::~Adulto(){}

string Adulto::getEmpresa()
{
    return this -> empresa;
}

void Adulto::setEmpresa(string empresa)
{
    this -> empresa = empresa;
}

string Adulto::getCargo()
{
    return this -> cargo;
}

void Adulto::setCargo(string cargo)
{
    this -> cargo = cargo;
} 

