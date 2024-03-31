#include <iostream>
#include "Fiesta.h"

Fiesta::Fiesta(int duracion, string ubicacion, string fecha, string tematica, string invitadoEspecial) : Evento(duracion,ubicacion,fecha){

    this -> tematica = tematica;
    this -> invitadoEspecial = invitadoEspecial;
}

Fiesta::~Fiesta(){};

string Fiesta::getTematica(){
    return this -> tematica;
}

void Fiesta::setTematica(string tematica){
    this -> tematica = tematica;
}

string Fiesta::getInvitadoEspecial(){
    return this -> invitadoEspecial;
}

void Fiesta::setInvitadoEspecial(string invEsp){
    this -> invitadoEspecial = invEsp;
}