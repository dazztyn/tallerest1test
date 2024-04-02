#include <iostream>
#include "Concierto.h"
#include "Evento.h"
using namespace std;

//constructor de herencia
Concierto::Concierto(int duracion, string ubicacion, string fecha, string tipoEvento, int capacidad, string tipoConcierto) : Evento(duracion, ubicacion, fecha, tipoEvento)
{
    this -> capacidad = capacidad;
    this -> tipoConcierto = tipoConcierto;
}

Concierto::~Concierto(){}; //destructor

//getters y setters
int Concierto::getCapacidad(){
    return this -> capacidad;
}
void Concierto::setCapacidad(int capacidad){
    this -> capacidad = capacidad;
}
string Concierto::getTipoConcierto(){
    return this -> tipoConcierto;
}
void Concierto::setTipoConcierto(string tipoConcierto){
    this -> tipoConcierto = tipoConcierto;
}