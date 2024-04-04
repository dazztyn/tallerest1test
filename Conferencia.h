#pragma once
#include <iostream>
#include "Evento.h"
using namespace std;

class Conferencia : public Evento{
private:
    string temaConferencia;

public:

    Conferencia(int,string,string,string,int,string); //constructor
    ~Conferencia();

    //atributos

    string getTemaConferencia();
    void setTemaConferencia(string);
    void desplegarInfo();
};