#pragma once
#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>
#include "Asistente.h"

using namespace std;

class Adolescente: public Asistente{

private:
    string institucion;
    int nivel;


public: //metodos de la clase Adolescente

    Adolescente(string,int, string, string, int);//Constructor del Objeto Adolescente.
    ~Adolescente(); //Destructor del objeto.
    
    
    //Getters y Setters de cada atributo.
    string getInstitucion();
    void setInstitucion(string);
    int getNivel();
    void setNivel(int);
};