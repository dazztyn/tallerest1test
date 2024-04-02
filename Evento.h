#pragma once
#include <iostream>
#include <vector>
#include "Asistente.h"
using namespace std;

class Evento{
private: //atributos
    int duracion;
    string ubicacion, fecha;
protected:
    vector<Asistente*> asistentes;

public: //metodos

    Evento(int, string, string); //constructor
    ~Evento(); //destructor

    //getters y setters
    virtual int getDuracion();
    virtual void setDuracion(int);
    virtual string getUbicacion();
    virtual void setUbicacion(string);
    virtual string getFecha();
    virtual void setFecha(string);
    
    virtual void agregarAsistente(Asistente*);

    
};