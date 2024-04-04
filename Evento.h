#pragma once
#include <iostream>
#include <vector>
#include "Asistente.h"
using namespace std;

class Evento{
private: //atributos
    int duracion;
    string ubicacion, fecha, tipoEvento;
    int idEvento;
protected:
    vector<Asistente*> asistentes;

public: //metodos

    Evento(int, string, string, string,int); //constructor
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
    virtual int getIdEvento();
    virtual void setIdEvento(int);
    virtual int getAsistentes();
    
    virtual void agregarAsistente(Asistente*);
    virtual void desplegarAsistentes();

    virtual void desplegarInfo();
    
};