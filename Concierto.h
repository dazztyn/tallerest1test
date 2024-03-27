#pragma once
#include <string>
#include <vector>
#include "Evento.h"
using namespace std;

class Concierto: public Evento{

private:
    int capacidad;
    string tipoConcierto;

public:

    Concierto::Concierto();

};