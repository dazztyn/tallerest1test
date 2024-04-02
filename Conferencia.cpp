#include <iostream>
#include "Conferencia.h"
#include "Evento.h"
using namespace std;

//constructor de la herencia
Conferencia::Conferencia(int duracion, string ubicacion, string fecha, string temaConferencia): Evento(duracion,ubicacion,fecha){
    this -> temaConferencia = temaConferencia;
};
//destructor
Conferencia::~Conferencia(){};

//getters y setters
string Conferencia::getTemaConferencia(){
    return this -> temaConferencia;
}
void Conferencia::setTemaConferencia(string temaConferencia){
    this -> temaConferencia = temaConferencia;
}
