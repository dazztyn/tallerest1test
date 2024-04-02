#include <iostream>
#include "EventoDeportivo.h"
using namespace std;

EventoDeportivo::EventoDeportivo(int duracion, string ubicacion, string fecha, string tipoEvento, string deporte, bool hayApuestas)
:Evento(duracion,ubicacion,fecha,tipoEvento){

    this -> deporte = deporte;
    this -> hayApuestas = hayApuestas;

}

EventoDeportivo::~EventoDeportivo(){};

string EventoDeportivo::getDeporte(){
    return this -> deporte;
}
void EventoDeportivo::setDeporte(string deporte){
    this -> deporte = deporte;
}

bool EventoDeportivo::getHayApuestas(){
    return this -> hayApuestas;
}
 void EventoDeportivo::setHayApuestas(bool apuesta){
    this -> hayApuestas = apuesta;
 }