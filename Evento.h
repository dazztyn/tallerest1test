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
    int getDuracion();
    void setDuracion(int);
    string getUbicacion();
    void setUbicacion(string);
    string getFecha();
    void setFecha(string);
    string getTipoEvento();
    void setTipoEvento(string);
    
    void agregarAsistente(Asistente*);
    string desplegarAsistentes();
    
};