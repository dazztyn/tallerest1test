#pragma once
#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>
//#include "Asistente.h"

using namespace std;

class Adolescente
{

private:
    string nombre,ocupacion,institucion;
    int edad, nivel;

protected:
    vector<Asistente*> asistentes;

public: //metodos de la clase Adolescente

    Adolescente::Adolescente(string nombre, int edad, string ocupacion, string institucion, int nivel);//Constructor del Objeto Adolescente.
    Adolescente::~Adolescente(); //Destructor del objeto.
    
    
    //Getters y Setters de cada atributo.
    virtual string getNombre();
    virtual void setNombre(string);
    virtual int getEdad();
    virtual void setEdad(int);
    virtual string getOcupacion();
    virtual void setOcupacion(string);
    virtual string getInstitucion();
    virtual void setInstitucion(string);
    virtual int getNivel();
    virtual void setNivel(int);

    virtual void addAdolescente(Asistente*);




};