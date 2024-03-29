#pragma once
#include <iostream>
#include <vector>
#include <string>
//#include "Asistente.h"
using namespace std;

class Adulto
{ //atributos clase Adulto
private:
    string nombre, ocupacion, empresa, cargo;
    int edad;

protected:
    vector<Asistente*> asistentes;

public: //metodos

    Adulto::Adulto(string nombre, int edad, string ocupacion, string empresa, string cargo); //Constructor
    Adulto::~Adulto(); //Destructor 

    virtual string getNombre();
    virtual void setNombre(string);
    virtual int getEdad();
    virtual void setEdad(int);
    virtual string getOcupacion();
    virtual void setOcupacion(string);
    virtual string getEmpresa();
    virtual void setEmpresa(string);
    virtual string getCargo();
    virtual void setCargo(string);

    virtual void agregarAsistente(Asistente*);






};