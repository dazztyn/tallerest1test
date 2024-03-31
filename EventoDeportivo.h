#pragma once
#include <iostream>
#include "Evento.h"
using namespace std;

class EventoDeportivo : public Evento{

private: //atributos
    string deporte;
    bool hayApuestas;

public: //metodos
    EventoDeportivo::EventoDeportivo(int,string,string,string,bool); //constructor
    EventoDeportivo::~EventoDeportivo(); //destructor

    //getters y setters
    string getDeporte();
    void setDeporte(string);
    bool getHayApuestas();
    void setHayApuestas(bool);

};