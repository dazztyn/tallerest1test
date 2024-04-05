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

void Fiesta::desplegarInfo(){ //desplega la info faltante del evento
    Evento::desplegarInfo();
    cout << "tematica: " << this -> tematica << ". invitadx especial: " << this -> invitadoEspecial << endl;
}

string Fiesta::toString(){ //retorna la linea del txt
    
    string str;

    int duracion = Evento::getDuracion();
    string ubicacion =  Evento::getUbicacion();
    string fecha =  Evento::getFecha();
    string tipoEvento =  Evento::getTipoEvento();
    int id =  Evento::getIdEvento();

    str += to_string(duracion) + "," + ubicacion + "," + fecha + "," + tipoEvento + ",";
    str += to_string(id) + "," + this -> tematica + "," + this -> invitadoEspecial + "\n";
    
    return str;
}
