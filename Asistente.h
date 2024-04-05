#pragma once
#include <iostream>
#include <vector>
using namespace std;

class Asistente{

private: //atributos

    string nombre;
    int edad;
    string tipoAsistente;
    string ocupacion;

protected:

    vector<int> idsEventos;
    
public: //metodos

    Asistente(string,int,string,string); // constructor

    //getters y setters
    string getNombre();
    void setNombre(string);
    int getEdad();
    void setEdad(int);
    string getTipoAsistente();
    void setTipoAsistente(string);
    string getOcupacion();
    void setOcupacion(string);
    
    void agregarEvento(int);
    string mostrarIds();
    string toString();
};