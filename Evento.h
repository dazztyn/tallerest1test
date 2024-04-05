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
    
    virtual void agregarAsistente(Asistente*); //agrega un asistente a la lista de asistentes de cada evento (opcion 2)
    virtual void desplegarAsistentes(); //despliega los asistentes que van a cierto evento (opcion 3)

    virtual void desplegarInfo(); //despliega la informacion de un evento en detalle en la seccion de informes (opcion 4 - opcion 1)
    virtual string toString(); //retorna un string usando polimorfismo para la sobreescritura de archivos
    
};