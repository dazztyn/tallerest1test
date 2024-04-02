#include <iostream>
#include <vector>
#include "Evento.h"
#include "Asistente.h"
using namespace std;

Evento::Evento(int duracion, string ubicacion, string fecha,string tipoEvento){ //constructor clase padre

    this -> duracion = duracion;
    this -> ubicacion = ubicacion;
    this -> fecha = fecha;
    this -> tipoEvento = tipoEvento;
    
}

Evento::~Evento(){}; //destructor clase padre

//getters y setters
int Evento::getDuracion(){
    return this -> duracion;
}
void Evento::setDuracion(int duracion){
    this -> duracion = duracion;
} 

string Evento::getUbicacion(){
    return this -> ubicacion;
}

void Evento::setUbicacion(string ubicacion){
    this -> ubicacion = ubicacion;
}

string Evento::getFecha(){
    return this -> fecha;
}

void Evento::setFecha(string fecha){
    this -> fecha = fecha;
}

string Evento::getTipoEvento(){
    return this -> tipoEvento;
}
void Evento::setTipoEvento(string tipoEvento){
    this -> tipoEvento = tipoEvento;
}

void Evento::agregarAsistente(Asistente* ptrAsistente){ //agrega un puntero tipo asistente a la lista
    asistentes.push_back(ptrAsistente);
}
