#include <iostream>
#include "Conferencia.h"
#include "Evento.h"
using namespace std;

//constructor de la herencia
Conferencia::Conferencia(int duracion, string ubicacion, string fecha,string tipoEvento,int idEvento, string temaConferencia) : 
Evento(duracion,ubicacion,fecha,tipoEvento,idEvento){
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

void Conferencia::desplegarInfo(){
    Evento::desplegarInfo();
    cout << "Tema de Conferencia: " << this -> temaConferencia << endl;
}

string Conferencia::toString(){

    string str;

    int duracion = Evento::getDuracion();
    string ubicacion =  Evento::getUbicacion();
    string fecha =  Evento::getFecha();
    string tipoEvento =  Evento::getTipoEvento();
    int id =  Evento::getIdEvento();

    str += to_string(duracion) + "," + ubicacion + "," + fecha + "," + tipoEvento + ",";
    str += to_string(id) + "," + this -> temaConferencia + "\n";
    
    return str;

}
