#pragma once
#include <string>
#include <vector>
#include "Asistente.h"
using namespace std;

class Evento{
protected: //atributos

    int duracion;
    string ubicacion, fecha;
    vector<Asistente> asistentes;

public: //metodos

    Evento::Evento(int, string, string); //constructor

    //getters y setters
    virtual int getDuracion();
    virtual void setDuracion(int);
    virtual string getUbicacion();
    virtual void setUbicacion();
    virtual string getFecha();
    virtual void setFecha();
    
    virtual void agregarAsistente(Asistente);
    
    
};