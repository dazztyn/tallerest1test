#pragma once
#include <iostream>
#include <vector>
#include "Asistente.h"
using namespace std;

class Evento{
private: //atributos
    int duracion;
    string ubicacion, fecha, tipoEvento;
protected:
    vector<Asistente*> asistentes;

public: //metodos

    Evento(int, string, string, string); //constructor
    ~Evento(); //destructor

    //getters y setters
    virtual int getDuracion();
    virtual void setDuracion(int);
    virtual string getUbicacion();
    virtual void setUbicacion(string);
    virtual string getFecha();
    virtual void setFecha(string);
    virtual string getTipoEvento();
    virtual void setTipoEvento(string);
    
    virtual void agregarAsistente(Asistente*);

    
};