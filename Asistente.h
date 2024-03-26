#pragma once
#include <string>
using namespace std;

class Asistente{

private: //atributos

    string nombre,tipoAsistente;
    int edad;
    string ocupacion,institucion;

public: //metodos

    Asistente(string, string, int, string, string); // constructor

    //getters y setters
    string getNombre();
    void setNombre(string);
    string getTipoAsistente();
    void setTipoAsistente(string);
    int getEdad();
    void setEdad(int);
    string getOcupacion();
    void setOcupacion(string);
    string getInstitucion();
    void setInstitucion(string);

    string desplegarInfo();

};