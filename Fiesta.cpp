#include <iostream>
#include "Fiesta.h"
using namespace std;

Fiesta::Fiesta(int duracion, string ubicacion, string fecha,string tipoEvento,int idEvento, string tematica, string invitado):
Evento(duracion,ubicacion,fecha,tipoEvento,idEvento){

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

void Fiesta::desplegarInfo(){
    Evento::desplegarInfo();
    cout << "tematica: " << this -> tematica << ". invitadx especial: " << this -> invitadoEspecial << endl;
}
