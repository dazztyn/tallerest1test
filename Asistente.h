#pragma once
#include <string>
#include <vector>
using namespace std;

class Asistente{

protected: //atributos

    string nombre,tipoAsistente;
    int edad;
    string ocupacion;

public: //metodos

    Asistente(string, string, int, string); // constructor

    //getters y setters
    string getNombre();
    void setNombre(string);
    string getTipoAsistente();
    void setTipoAsistente(string);
    int getEdad();
    void setEdad(int);
    string getOcupacion();
    void setOcupacion(string);

    string desplegarInfo();

};