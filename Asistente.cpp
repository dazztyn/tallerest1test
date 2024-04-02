#include "Asistente.h"
#include <iostream>

using namespace std;

Asistente::Asistente(string nombre, int edad, string tipoAsistente, string ocupacion){ //constructor

    this -> nombre = nombre;
    this -> edad = edad;
    this -> tipoAsistente = tipoAsistente;
    this -> ocupacion = ocupacion;
    
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

