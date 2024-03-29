#include <iostream>
#include <vector>
#include "Adulto.h"
//#include "Asistente.h"

using namespace std;

Adulto::Adulto(string nombre, int edad, string ocupacion, string empresa, string cargo){

    this -> nombre = nombre;
    this -> edad = edad;
    this -> ocupacion = ocupacion;
    this -> empresa = empresa;
    this -> cargo = cargo;


}

Adulto::~Adulto(){}

string Adulto::getNombre(){
    return this -> nombre;
}

void Adulto::setNombre(string nombre)
{
    this -> nombre = nombre;    
}

int Adulto:: getEdad(){
    return this -> edad;
}

void Adulto::setEdad(int edad)
{
    this -> edad = edad;
}

string Adulto::getOcupacion()
{
    return this -> ocupacion;
}

void Adulto::setOcupacion(string ocupacion)
{
    this -> ocupacion = ocupacion;
}

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

void Adolescente::addAdolescente(Asistente* ptrAsistente); //?? sera necesario para esta clase vecino?
{
    asistentes.push_back(ptrAsistente);
}