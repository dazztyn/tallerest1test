#pragma once
#include <iostream>
#include <string>
#include "Asistente.h"
using namespace std;

class Adulto: public Asistente{ //atributos clase Adulto
private:
    string empresa, cargo;

public: //metodos

    Adulto::Adulto(string,int, string, string, string); //Constructor
    Adulto::~Adulto(); //Destructor 

    //Getters y Setters
    string getEmpresa();
    void setEmpresa(string);
    string getCargo();
    void setCargo(string);




};