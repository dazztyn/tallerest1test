#include <iostream>
#include "Concierto.h"
#include "Evento.h"
using namespace std;

//constructor de herencia
Concierto::Concierto(int duracion, string ubicacion, string fecha, string tipoEvento, int idEvento, int capacidad, string tipoConcierto) : 
Evento(duracion, ubicacion, fecha, tipoEvento,idEvento)
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

void Concierto::desplegarInfo(){ //despliega la info faltante desde la subclase de un evento
    Evento::desplegarInfo();
    cout << "capacidad: " << this -> capacidad << " personas. El show es un " << this -> tipoConcierto << endl;
}

string Concierto::toString(){ //retorna la linea del txt
    string str;

    int duracion = Evento::getDuracion();
    string ubicacion =  Evento::getUbicacion();
    string fecha =  Evento::getFecha();
    string tipoEvento =  Evento::getTipoEvento();
    int id =  Evento::getIdEvento();

    str += to_string(duracion) + "," + ubicacion + "," + fecha + "," + tipoEvento + ",";
    str += to_string(id) + "," + to_string(this -> capacidad) + "," + this -> tipoConcierto + "\n";
    
    return str;
}