#include <iostream>
#include "Conferencia.h"
#include "Evento.h"
using namespace std;

//constructor de la herencia
Conferencia::Conferencia(int duracion, string ubicacion, string fecha, string tipoConferencia, string temaConferencia): Evento(duracion,ubicacion,fecha){

    this -> tipoConferencia = tipoConferencia;
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
string Conferencia::getTipoConferencia(){
    return this -> tipoConferencia;
}
void Conferencia::setTipoConferencia(string tipoConferencia){
    this -> tipoConferencia = tipoConferencia;
}
