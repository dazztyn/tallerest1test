#include <iostream>
#include "EventoDeportivo.h"
using namespace std;

EventoDeportivo::EventoDeportivo(int duracion, string ubicacion, string fecha, string tipoEvento, int idEvento,string deporte, bool hayApuestas)
:Evento(duracion,ubicacion,fecha,tipoEvento,idEvento){ //constructor
    this -> deporte = deporte;
    this -> hayApuestas = hayApuestas;
}

EventoDeportivo::~EventoDeportivo(){}; //destructor

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

void EventoDeportivo::desplegarInfo(){ //despliega la info faltante
    Evento::desplegarInfo();

    string verificadorApuestas = "no";
    if (this -> hayApuestas == true){
        verificadorApuestas = "si";
    }

    cout << "Deporte a jugar: " << this -> deporte << "apuestas: " << verificadorApuestas << endl;
}

string EventoDeportivo::toString(){ //retorna linea para el txt

    string str;

    int duracion = Evento::getDuracion();
    string ubicacion =  Evento::getUbicacion();
    string fecha =  Evento::getFecha();
    string tipoEvento =  Evento::getTipoEvento();
    int id =  Evento::getIdEvento();

    bool apuesta = false;
    string apuestaStr = "n";
    if(this -> hayApuestas){
        apuestaStr = "s";
    }

    str += to_string(duracion) + "," + ubicacion + "," + fecha + "," + tipoEvento + ",";
    str += to_string(id) + "," + this -> deporte + "," + apuestaStr + "\n";
    
    return str;
}