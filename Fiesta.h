#pragma once
#include <iostream>
#include <vector>
#include "Evento.h"
using namespace std;

class Fiesta : public Evento{

private: //atributos
    string tematica, invitadoEspecial;

public: //metodos

    Fiesta::Fiesta(int,string,string,string,string); //constructor
    Fiesta::~Fiesta(); //destructor
    string getTematica();
    void setTematica(string);
    string getInvitadoEspecial();
    void setInvitadoEspecial();
};