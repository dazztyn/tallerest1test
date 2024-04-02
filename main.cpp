#include <iostream>
#include <vector>
#include "Evento.h"
#include "Conferencia.h"
#include "Concierto.h"
#include "Fiesta.h"
#include "EventoDeportivo.h"
#include "Asistente.h"
using namespace std;

vector<Evento*> listaEventos;

void agendarEvento(){

    cout << "Que evento desea agregar?"<<endl;
    cout <<"1) Concierto "<< endl;
    cout <<"2) Conferencia "<< endl;
    cout <<"3) Fiesta "<< endl;
    cout <<"4) Evento deportivo "<< endl;
    cout << ">" << endl;

    string opt;
    cin>>opt;

    int duracion;
    string ubicacion;
    string fecha;

    cout << "Ingrese duracion en horas (ej: 3): " << endl;
    cout << ">" << endl;
    cin >> duracion;
    cout << "Ingrese ubicacion (ej: Coquimbo): " << endl;
    cout << ">" << endl;
    cin >> ubicacion;
    cout << "Ingrese fecha (dd/mm/aaaa): " << endl;
    cout << ">" << endl;

    if(opt == "1"){

        int capacidad;
        cout << "Ingrese capacidad de asistentes: "<<endl;
        cout << ">" << endl;
        cin>>capacidad;

        string tipoConcierto;
        cout << "Ingrese tipo de concierto (particular / festival): " << endl;
        cout << ">" << endl;
        cin>>tipoConcierto;

        Evento* concierto = new Concierto(duracion,ubicacion,fecha,capacidad,tipoConcierto);
        listaEventos.push_back(concierto);


    }
    else if(opt == "2"){
        string tematica;
        cout << "Ingrese tematica de la conferencia" << endl;
        cout << ">" << endl;
        cin >> tematica;

        Evento* conferencia = new Conferencia(duracion,ubicacion,fecha,tematica);
        listaEventos.push_back(conferencia);
    }
    else if(opt == "3"){
        string tematica;
        cout <<"Ingrese tematica de la fiesta" << endl;
        cout << ">" << endl;
        cin >> tematica;
        string invEsp;
        cout << "Ingrese invitadx especial ( - para ninguno): " << endl;
        cout << ">" <<endl;
        cin >> invEsp;

        Evento* fiesta = new Fiesta(duracion,ubicacion,fecha,tematica,invEsp);
        listaEventos.push_back(fiesta);
    }
    else if(opt == "4"){
        
    }

    
}//fin agendarEvento
void registroAsistentes(){

}//fin registroAsistentes

void consultaAsistentes(){

}//fin consultaAsistentes

void generarInforme(){

}//fin generarInforme

void guardarRegistro(){

}//fin guardarRegistro

void cargarDatos(){

}//fin cargarDatos


void iniciarMenu(){ //inicia el menu del programa

    cout << "------------------------------"<<endl;
    cout << "Bienvenido al sistema de eventos" << endl;
    cout << "Seleccione opcion: " << endl;
    cout << endl;
    cout << "1) Agendar evento" << endl;
    cout << "2) Registrar asistente" << endl;
    cout << "3) Consultar asistentes" << endl;
    cout << "4) Generar informes" << endl;
    cout << "5) Guardar cambios" << endl;
    cout << "6) Cargar datos" << endl;
    cout << "7) Salir" << endl;

    string opt;

    cout<<">"<<endl;
    cin>>opt;

    do{

        if(opt == "1"){ agendarEvento(); }

        else if(opt == "2"){ consultaAsistentes(); }

        else if(opt == "3"){registroAsistentes();}

        else if(opt == "4"){ generarInforme();}

        else if(opt == "5"){ guardarRegistro();}

        else if(opt == "6"){cargarDatos();}

        else if(opt == "7"){
            cout << "Saliendo. ¡Hasta luego!" << endl;
        }

        else{
            cout << "Opcion invalida, por favor intente nuevamente" << endl;
        }

    }

    while(opt != "7");

}//fin iniciarMenu

int main(){

    //cargarDatos();
    iniciarMenu();
    
    return 0;
}//fin main
