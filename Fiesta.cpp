#include <iostream>
#include "Fiesta.h"
using namespace std;

Fiesta::Fiesta(int duracion, string ubicacion, string fecha, string tematica, string invitado):Evento(duracion,ubicacion,fecha){

    this -> tematica = tematica;
    this -> invitadoEspecial = invitado;

}

string Fiesta::getTematica(){
    return this -> tematica;
}

void Fiesta::setTematica(string t){
    this -> tematica=t;
}

string Fiesta::getInvitadoEspecial(){
    return this -> invitadoEspecial;
}
void Fiesta::setInvitadoEspecial(string inv){
    this -> invitadoEspecial = inv;
}
