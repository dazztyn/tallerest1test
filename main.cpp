#include <iostream>
#include <vector>
#include "Evento.h"
#include "Conferencia.h"
#include "Concierto.h"
#include "Fiesta.h"
#include "EventoDeportivo.h"
#include "Asistente.h"
using namespace std;

//lista global eventos
vector<Evento*> listaEventos;

void agendarEvento(){

    cout << "Que evento desea agregar?"<<endl;
    cout <<"1) Concierto "<< endl;
    cout <<"2) Conferencia "<< endl;
    cout <<"3) Fiesta "<< endl;
    cout <<"4) Evento deportivo "<< endl;
    cout << ">";

    string opt;
    cin>>opt;

    cout<<endl;
    int duracion;
    string ubicacion;
    string fecha;

    cout << "Ingrese duracion en horas (ej: 3): " << endl; cout << ">"; cin >> duracion; cout<<endl;

    cout << "Ingrese ubicacion (ej: Coquimbo): " << endl; cout << ">"; cin >> ubicacion; cout<<endl;

    cout << "Ingrese fecha (dd/mm/aaaa): " << endl; cout << ">"; cin >> fecha; cout<<endl;

    if(opt == "1"){

        int capacidad;
        cout << "Ingrese capacidad de asistentes: "<<endl; cout << ">" << endl; cin>>capacidad;

        string tipoConcierto;
        cout << "Ingrese tipo de concierto (particular / festival): " << endl; cout << ">" << endl; cin>>tipoConcierto;

        Evento* concierto = new Concierto(duracion,ubicacion,fecha,"concierto",capacidad,tipoConcierto);
        listaEventos.push_back(concierto);

        cout << "¡Concierto agregado!" << endl;
        
    }
    else if(opt == "2"){
        string tematica;
        cout << "Ingrese tematica de la conferencia" << endl; cout << ">" << endl; cin >> tematica;

        Evento* conferencia = new Conferencia(duracion,ubicacion,fecha,"conferencia",tematica);
        listaEventos.push_back(conferencia);

        cout << "¡Conferencia agregada!" << endl;
    }
    else if(opt == "3"){
        string tematica;
        cout <<"Ingrese tematica de la fiesta" << endl; cout << ">" << endl; cin >> tematica;

        string invEsp;
        cout << "Ingrese invitadx especial ( - para ninguno): " << endl; cout << ">" <<endl; cin >> invEsp;

        Evento* fiesta = new Fiesta(duracion,ubicacion,fecha,"fiesta",tematica,invEsp);
        listaEventos.push_back(fiesta);

        cout <<"¡Fiesta agregada!"<<endl;
        
    }
    else if(opt == "4"){
        string deporte;
        cout << "Ingrese deporte a jugar: " << endl; cout << ">" << endl; cin>> deporte;

        string apuestas;
        bool hayApuesta = false;
        cout << "Hay apuestas? (s/n): " << endl; cout << ">" <<endl; cin>>apuestas;

        if(apuestas == "s"){ hayApuesta = true;}

        Evento* evDeportivo = new EventoDeportivo(duracion,ubicacion,fecha,"evento deportivo",deporte,hayApuesta);
        listaEventos.push_back(evDeportivo);

        cout << "¡Evento Deportivo agregado!" << endl;
        
    }
    else{
        cout << "Opcion invalida. Saliendo..." << endl;
    }

    
}//fin agendarEvento

void registroAsistentes(){

    cout << "seleccione un evento: "<<endl;
    int num;

    for(Evento* ptrEvento: listaEventos){ //se crea un puntero de tipo evento y apunta a cada evento a la hora de seleccionar
        cout << num << ") " << ptrEvento -> getTipoEvento() <<endl;
        num++;
    }

    int eleccion;
    cout << ">";
    cin >> eleccion;

    Evento* ptrEvento;

    if(eleccion <= listaEventos.size() and eleccion >= 1){
        ptrEvento = listaEventos[eleccion-1]; //se selecciona el evento mediante el uso del puntero

        string nombre;
        int edad;
        string ocupacion;
        
        cout << "Ingrese nombre de asistente: "<<endl; cout << ">"; cin >> nombre; cout << endl;

        cout << "Ingrese edad de asistente:" <<endl; cout << ">"; cin >> edad; cout << endl;

        cout << "Ingrese ocupacion de asistente (estudiante, trabajador, etc): "<<endl; cout << "<"; cin>>ocupacion; cout<<endl;

        if(edad >= 18){
            Asistente* asistente = new Asistente(nombre,edad,"mayor",ocupacion);
            ptrEvento -> agregarAsistente(asistente);
            cout << "asistente adulto registrado!" << endl;
        }
        Asistente* asistente = new Asistente(nombre,edad,"menor",ocupacion);
        ptrEvento -> agregarAsistente(asistente);

        cout << "asistente registrado!"<<endl;

    }
    else{
        ptrEvento = NULL;
        cout << "Evento no encontrado, saliendo..." << endl;
    }

}//fin registroAsistentes

void consultaAsistentes(){

    cout << "seleccione un evento: "<<endl;
    int num;

    for(Evento* ptrEvento: listaEventos){ //se crea un puntero de tipo evento y apunta a cada evento a la hora de seleccionar
        cout << num << ") " << ptrEvento -> getTipoEvento() <<endl;
        num++;
    }

    int eleccion;
    cout << ">";
    cin >> eleccion;

    Evento* ptrEvento;
    if(eleccion <= listaEventos.size() and eleccion >= 1){
        ptrEvento = listaEventos[eleccion-1]; //se selecciona el evento mediante el uso del puntero
        string texto = ptrEvento -> desplegarAsistentes();
        cout << texto << endl;
    }
    else{
        ptrEvento = NULL;
        cout <<"Evento no encontrado, saliendo..."<<endl;
    }
}//fin consultaAsistentes

void generarInforme(){

}//fin generarInforme

void guardarRegistro(){

}//fin guardarRegistro

void cargarDatos(){

}//fin cargarDatos

void printeoMenu(){
    
}


void iniciarMenu(){ //inicia el menu del programa

    string opt;
    cout << "Bienvenido al sistema de eventos" << endl;
    do{
        
        cout << "------------------------------"<<endl;
        cout << "Seleccione opcion: " << endl;
        cout << "1) Agendar evento" << endl;
        cout << "2) Registrar asistente" << endl;
        cout << "3) Consultar asistentes" << endl;
        cout << "4) Generar informes" << endl;
        cout << "5) Guardar cambios" << endl;
        cout << "6) Cargar datos" << endl;
        cout << "7) Salir" << endl;
        cout << "------------------------------"<<endl;
        cout<<">"; cin>>opt; cout<<endl;

        if(opt == "1"){ agendarEvento(); }

        else if(opt == "2"){ registroAsistentes(); }

        else if(opt == "3"){consultaAsistentes();}

        else if(opt == "4"){ generarInforme();}

        else if(opt == "5"){ guardarRegistro();}

        else if(opt == "6"){cargarDatos();}

        else if(opt == "7"){
            cout << "Saliendo. ¡Hasta luego!" << endl;
        }

        else{
            cout << "Opcion invalida! por favor intente nuevamente" << endl;
        }

    }

    while(opt != "7");

}//fin iniciarMenu

int main(){

    //cargarDatos();
    iniciarMenu();
    
    return 0;
}//fin main
