#include <iostream>
#include "EventoDeportivo.h"
using namespace std;

EventoDeportivo::EventoDeportivo(int duracion, string ubicacion, string fecha, string tipoEvento, int idEvento,string deporte, bool hayApuestas)
:Evento(duracion,ubicacion,fecha,tipoEvento,idEvento){

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

void EventoDeportivo::desplegarInfo(){
    Evento::desplegarInfo();

    string verificadorApuestas = "no";
    if (this -> hayApuestas == true){
        verificadorApuestas = "si";
    }

    cout << "Deporte a jugar: " << this -> deporte << "apuestas: " << verificadorApuestas << endl;
}