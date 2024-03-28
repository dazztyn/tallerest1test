#pragma once
#include <iostream>
#include "Evento.h"
using namespace std;

class Conferencia : public Evento{
private:
    string tipoConferencia,temaConferencia;

public:

    Conferencia::Conferencia(int,string,string,string,string); //constructor
    Conferencia::~Conferencia();

    //atributos
    string getTipoConferencia();
    void setTipoConferencia(string);
    string getTemaConferencia();
    void setTemaConferencia(string);
};