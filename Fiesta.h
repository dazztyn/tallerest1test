#pragma once
#include <iostream>
#include "Evento.h"
using namespace std;

class Fiesta : public Evento{

private: //atributos
    string tematica, invitadoEspecial;

public: //metodos

    Fiesta(int,string,string,string,string); //constructor
    ~Fiesta(); //destructor

    //getters y setters
    string getTematica();
    void setTematica(string);
    string getInvitadoEspecial();
    void setInvitadoEspecial(string);
};