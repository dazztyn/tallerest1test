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
