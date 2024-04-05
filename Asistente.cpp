#include "Asistente.h"
#include <iostream>

using namespace std;

Asistente::Asistente(string nombre, int edad, string tipoAsistente, string ocupacion){ //constructor

    this -> nombre = nombre;
    this -> edad = edad;
    this -> tipoAsistente = tipoAsistente;
    this -> ocupacion = ocupacion;
}

//getters y setters
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

void Asistente::agregarEvento(int id){
    idsEventos.push_back(id);
}

string Asistente::mostrarIds(){
    string txt = "";
    for(int id : idsEventos){
        txt += to_string(id) + " "; //despliega las ids de los eventos a los que un asistente va
    }
    return txt;
}

string Asistente::toString(){ //retorna una linea de string para la sobreescritura del archivo
    string txt;

    txt += this -> nombre + "," + to_string(this -> edad) + "," + this -> tipoAsistente + "," + this ->ocupacion + ",";
    
    string idsEventos;
    int cont = 1;
    int limite = this -> idsEventos.size();

    for(int id: this -> idsEventos){
        if(cont == limite){
            idsEventos += to_string(id);
        }
        else{
            idsEventos += to_string(id) + ",";
        }
        cont++;
    }

    txt += idsEventos + "\n";

    return txt;
}