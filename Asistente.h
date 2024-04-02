#pragma once
#include <iostream>
using namespace std;

class Asistente{

protected: //atributos

    string nombre;
    int edad;
    string tipoAsistente;
    string ocupacion;

public: //metodos

    Asistente(string,int,string,string); // constructor

    //getters y setters
    virtual string getNombre();
    virtual void setNombre(string);
    virtual int getEdad();
    virtual void setEdad(int);
    virtual string getTipoAsistente();
    virtual void setTipoAsistente(string);
    virtual string getOcupacion();
    virtual void setOcupacion(string);

};