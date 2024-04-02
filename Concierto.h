#pragma once
#include <iostream>
#include "Evento.h"
using namespace std;

class Concierto: public Evento{

private: //atributos
    int capacidad;
    string tipoConcierto;

public: //metodos

    Concierto(int, string, string,string,int,string); //constructor
    ~Concierto(); //destructor

    //getters y setters
    int getCapacidad();
    void setCapacidad(int);
    string getTipoConcierto();
    void setTipoConcierto(string);

};