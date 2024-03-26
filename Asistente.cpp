#include "Asistente.h"
#include <iostream>

using namespace std;

Asistente::Asistente(string nombre, string tipoAsistente, int edad, string ocupacion, string institucion){

    this -> nombre = nombre;
    this -> tipoAsistente = tipoAsistente;
    this -> edad = edad;
    this -> ocupacion = ocupacion;
    this -> institucion = institucion;
}

string Asistente::getNombre(){
    return this -> nombre;
}

void Asistente::setNombre(string nombre){
    this -> nombre = nombre;
}

string Asistente::getTipoAsistente(){
    return this -> tipoAsistente;
}

void Asistente::setTipoAsistente(string tipoAsistente){
    this -> tipoAsistente = tipoAsistente;
}

int Asistente::getEdad(){
    return this -> edad;
}

void Asistente::setEdad(int edad){
    this -> edad = edad;
}

string Asistente::getOcupacion(){
    return this -> ocupacion;
}

void Asistente::setOcupacion(string ocupacion){
    this -> ocupacion = ocupacion;
}

string Asistente::getInstitucion(){
    return this -> institucion;
}

void Asistente::setInstitucion(string institucion){
    this -> institucion = institucion;
}

string Asistente::desplegarInfo(){
    cout <<"aqui va la info lol"<<endl;
}