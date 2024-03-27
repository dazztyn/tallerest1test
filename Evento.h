#pragma once
#include <string>
#include <vector>
#include "Asistente.h"
using namespace std;

class Evento{
protected:

    int duracion;
    string ubicacion, fecha;
    vector<Asistente> asistentes;

public:

    Evento::Evento(int, string, string);
    virtual int getDuracion();
    virtual void setDuracion(int);
    virtual string getUbicacion();
    virtual void setUbicacion();
    virtual string getFecha();
    virtual void setFecha();
    
    
};