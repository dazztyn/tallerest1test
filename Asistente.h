#pragma once
#include <string>
#include <vector>
using namespace std;

class Asistente{

protected: //atributos

    string nombre,tipoAsistente;
    int edad;
    string ocupacion;
    //string institucion;

public: //metodos

    Asistente(string, string, int, string); // constructor

    //getters y setters
    virtual string getNombre();
    virtual void setNombre(string);
    virtual string getTipoAsistente();
    virtual void setTipoAsistente(string);
    virtual int getEdad();
    virtual void setEdad(int);
    virtual string getOcupacion();
    virtual void setOcupacion(string);

    /*
    virtual string getInstitucion();
    virtual void setInstitucion(string);
    */

};