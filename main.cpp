#include <iostream>
#include <vector>
#include <stdlib.h> //para los archivos
#include <fstream> //para los archivos
#include <sstream> 
#include <cmath> //para utilizar round()
#include "Evento.h"
#include "Conferencia.h"
#include "Concierto.h"
#include "Fiesta.h"
#include "EventoDeportivo.h"
#include "Asistente.h"
using namespace std;

//lista global eventos
vector<Evento*> listaEventos;
vector<Asistente*> listaAsistentes;
vector<string> tokens;

int nuevaID() { //genera una id random para los eventos
    int num = 1;
    num = 10000 + rand() % 9999;
    return num;
}

void agendarEvento(){ //permite agendar un nuevo evento

    cout << "Que evento desea agregar?"<<endl;
    cout <<"1) Concierto "<< endl;
    cout <<"2) Conferencia "<< endl;
    cout <<"3) Fiesta "<< endl;
    cout <<"4) Evento deportivo "<< endl;
    cout << ">";

    string opt;
    cin>>opt; //se pide una opcion

    cout<<endl;
    int duracion; string ubicacion; string fecha;

    //se piden los datos - salto de linea - se ingresa la info - se salta la linea
    cout << "Ingrese duracion en horas (ej: 3): " << endl; cout << ">"; cin >> duracion; cout<<endl;
    cout << "Ingrese ubicacion (ej: Coquimbo): " << endl; cout << ">"; cin >> ubicacion; cout<<endl;
    cout << "Ingrese fecha (dd/mm/aaaa): " << endl; cout << ">"; cin >> fecha; cout<<endl;

    int id = nuevaID(); //se genera una id random para el evento

    if(opt == "1"){

        int capacidad;
        cout << "Ingrese capacidad de asistentes: "<<endl; cout << ">" << endl; cin>>capacidad;

        string tipoConcierto;
        cout << "Ingrese tipo de concierto (particular / festival): " << endl; cout << ">" << endl; cin>>tipoConcierto;
        
        Evento* concierto = new Concierto(duracion,ubicacion,fecha,"concierto",id,capacidad,tipoConcierto); //se crea un concierto y se agrega a la lista general
        listaEventos.push_back(concierto);

        cout << "¡Concierto agregado!" << endl;
        
    }
    else if(opt == "2"){
        string tematica;
        cout << "Ingrese tematica de la conferencia" << endl; cout << ">" << endl; cin >> tematica;

        Evento* conferencia = new Conferencia(duracion,ubicacion,fecha,"conferencia",id,tematica); //se crea una conferencia y se agrega a la lista general
        listaEventos.push_back(conferencia);

        cout << "¡Conferencia agregada!" << endl;
    }
    else if(opt == "3"){
        string tematica;
        cout <<"Ingrese tematica de la fiesta" << endl; cout << ">" << endl; cin >> tematica;

        string invEsp;
        cout << "Ingrese invitadx especial ( - para ninguno): " << endl; cout << ">" <<endl; cin >> invEsp;

        Evento* fiesta = new Fiesta(duracion,ubicacion,fecha,"fiesta",id,tematica,invEsp); //se crea una fiesta y se agrega a la lista general
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

        Evento* evDeportivo = new EventoDeportivo(duracion,ubicacion,fecha,"evento deportivo",id,deporte,hayApuesta); //se crea un e. deportivo y se agrega a la lista general
        listaEventos.push_back(evDeportivo);

        cout << "¡Evento Deportivo agregado!" << endl;
        
    }
    else{ //se ingresa una opcion invalida
        cout << "Opcion invalida. Saliendo..." << endl;
    }

    
}//fin agendarEvento

void registroAsistentes(){ //permite elegir un evento existente y registra a un asistente

    cout << "seleccione un evento: "<<endl;
    int num = 1;

    for(Evento* ptrEvento: listaEventos){ //se crea un puntero de tipo evento y apunta a cada evento a la hora de seleccionar
        cout << num << ") " << ptrEvento -> getTipoEvento() << " id: " << ptrEvento -> getIdEvento() << endl;
        num++;
    }

    int eleccion; cout << ">"; cin >> eleccion; cout << endl;

    Evento* ptrEvento;

    if(eleccion <= listaEventos.size() and eleccion >= 1){ //si el evento está en la lista
        ptrEvento = listaEventos[eleccion-1]; //se selecciona el evento mediante el uso del puntero

        string nombre; int edad; string ocupacion;
        
        cout << "Ingrese nombre de asistente: "<<endl; cout << ">"; cin >> nombre; cout << endl;

        cout << "Ingrese edad de asistente:" <<endl; cout << ">"; cin >> edad; cout << endl;

        cout << "Ingrese ocupacion de asistente (estudiante, trabajador, etc): "<<endl; cout << "<"; cin>>ocupacion; cout<<endl;

        if(edad >= 18){
            Asistente* asistente = new Asistente(nombre,edad,"mayor",ocupacion); //se crea el asistente
            ptrEvento -> agregarAsistente(asistente); //se agrega el asistente al evento
            listaAsistentes.push_back(asistente); //se agrega el asistente a la lista general de asistentes
            asistente -> agregarEvento(ptrEvento -> getIdEvento()); //se agrega el id de evento a la lista de eventos asistidos de la persona

            cout << "asistente adulto registrado!" << endl;
        }
        else{
            if((ptrEvento -> getTipoEvento() == "conferencia") or (ptrEvento -> getTipoEvento() == "fiesta")){
                cout << "El asistente no cumple la edad minima para este tipo de eventos" << endl;
            }
            else{
                Asistente* asistente = new Asistente(nombre,edad,"mayor",ocupacion); //se crea el asistente
                ptrEvento -> agregarAsistente(asistente); //se agrega el asistente al evento
                listaAsistentes.push_back(asistente); //se agrega el asistente a la lista general de asistentes
                asistente -> agregarEvento(ptrEvento -> getIdEvento()); //se agrega el id de evento a la lista de eventos asistidos de la persona

                cout << "asistente registrado!"<<endl;
                }
        }
    }
    else{ //evento no existe o se ingresa id invalida
        delete ptrEvento;
        cout << "Evento no encontrado, saliendo..." << endl;
    }

}//fin registroAsistentes

void consultaAsistentes(){ //permite revisar los asistentes de un evento

    cout << "seleccione un evento: "<<endl;
    int num = 1;

    for(Evento* ptrEvento: listaEventos){ //se crea un puntero de tipo evento y apunta a cada evento a la hora de seleccionar
        cout << num << ") " << ptrEvento -> getTipoEvento() <<endl;
        num++;
    }

    int eleccion; cout << ">"; cin >> eleccion;

    Evento* ptrEvento;

    if(eleccion <= listaEventos.size() and eleccion >= 1){
        ptrEvento = listaEventos[eleccion-1]; //se selecciona el evento mediante el uso del puntero
        ptrEvento -> desplegarAsistentes();

    }
    else{
        ptrEvento = NULL;
        cout <<"Evento no encontrado, saliendo..."<<endl;
    }
}//fin consultaAsistentes

void eventosProgramados(){ //opcion  para desplegar todos los eventos programados
    
    for(Evento* ptrEvento: listaEventos){
        ptrEvento -> desplegarInfo();
    }
}

void asistentesRegistrados(){ //permite desplegar a los asistentes de un evento programado

    for(Asistente* ptrAsistente : listaAsistentes){

        cout << "asistencias (id) de: " << ptrAsistente -> getNombre() << " asiste a: ";
        cout << ptrAsistente -> mostrarIds() << endl;
    }
}

void estadisticas(){ //seccion del menu de informes que despliega estadisticas generales de los eventos y asistentes

    int contMenores = 0, contMayores = 0;
    
    for(Asistente* ptrAsistente : listaAsistentes){
        if (ptrAsistente -> getEdad() >= 18){contMayores++;}
        else{contMenores++;}
    }
    
    cout << "ASISTENTES POR EDAD: " << endl;
    cout << "Asistentes mayores de edad: " << contMayores << endl;
    cout << "Asistentes menores de edad: " << contMenores << endl;

    int contConciertos = 0, contConferencias = 0, contED = 0, contFiestas = 0;

    for(Evento* ptrEvento : listaEventos){
        if(ptrEvento -> getTipoEvento() == "concierto"){contConciertos++;}
        else if(ptrEvento -> getTipoEvento() == "conferencia"){contConferencias++;}
        else if(ptrEvento -> getTipoEvento() == "evento deportivo") {contED++;}
        else if(ptrEvento -> getTipoEvento() == "fiesta") {contFiestas++;}
    }

    cout << "-----------------------------" << endl;
    cout << "CANTIDAD DE EVENTOS: " << endl;
    cout << "Conferencias: "<<contConferencias<<endl;
    cout << "Conciertos: " << contConciertos << endl;
    cout << "Fiestas: "<<contFiestas<<endl;
    cout << "Ev. Deportivos: "<<contED<<endl;
    cout << "-----------------------------" << endl;

    int sumaEdades = 0;
    for (Asistente* ptrAsistente : listaAsistentes) {
        sumaEdades += ptrAsistente->getEdad();
    }
    double promedio = (sumaEdades / listaAsistentes.size());
    int promedioInt = round(promedio);

    cout << "la edad promedio de los asistentes es de "<<promedioInt<<" años"<<endl;
    cout << "-----------------------------" << endl;
    int asistConciertos = 0, asistConferencias = 0, asistED = 0, asistFiestas = 0;

    for (Evento* ptrEvento : listaEventos) {
        if (ptrEvento->getTipoEvento() == "concierto") { asistConciertos += ptrEvento->getAsistentes(); }
        else if (ptrEvento->getTipoEvento() == "conferencia") { asistConferencias += ptrEvento->getAsistentes(); }
        else if (ptrEvento->getTipoEvento() == "evento deportivo") { asistED += ptrEvento->getAsistentes(); }
        else if (ptrEvento->getTipoEvento() == "fiesta") { asistFiestas += ptrEvento->getAsistentes(); }
    }

    cout << "Asistentes en conferencias: " << asistConferencias << endl;
    cout << "Asistentes en conciertos: " << asistConciertos << endl;
    cout << "Asistentes en fiestas: " << asistFiestas << endl;
    cout << "Asistentes en eventos deportivos: " << asistED << endl;
    cout << "-----------------------------" << endl;

}//fin estadisticas

void generarInforme(){ //seccion que muestra el menu de informes desde el menu de usuario

    cout << "1) Lista de eventos programados" << endl;
    cout << "2) Asistentes registrados para evento" << endl;
    cout << "3) Estadisticas" << endl;

    string opt;
    cout << ">"; cin >> opt; cout << endl;
    
    if(opt == "1"){
        eventosProgramados();
    }
    else if(opt == "2"){
        asistentesRegistrados();
    }
    else if(opt == "3"){
        estadisticas();
    }
    else{
        cout << "opcion invalida, saliendo..." << endl;
    }

}//fin generarInforme

void guardarRegistro(){ //permite guardar los cambios de nueva informacion en la "base de datos"

}//fin guardarRegistro

vector<string> dividirLinea(string str, char separador) {

    vector<string> partes;
    stringstream ss(str);
    string parte;

    while (getline(ss, parte, separador)) {
        partes.push_back(parte);
    }
    
    return partes;
}

void cargarEventos(){ //lee el archivo inicial de eventos

    string linea;
    ifstream archivo("eventos.txt");
    char separador = ',';

    while(getline(archivo,linea)){

        vector<string> partes = dividirLinea(linea, separador); 
        int duracion = stoi(partes[0]); //stoi para castear de str a int
        string ubicacion = partes[1];
        string fecha = partes[2];
        string tipoEvento = partes[3];
        int idEvento = stoi(partes[4]);

        if(tipoEvento == "concierto") {
            int capacidad = stoi(partes[5]); string tipoConcierto = partes[6];
            Evento* concierto = new Concierto(duracion,ubicacion,fecha,tipoEvento,idEvento,capacidad,tipoConcierto);
            listaEventos.push_back(concierto);
        }
        else if(tipoEvento == "conferencia"){
            string tipoConferencia = partes[5];
            Evento* conferencia = new Conferencia(duracion,ubicacion,fecha,tipoEvento,idEvento,tipoConferencia);
            listaEventos.push_back(conferencia);
        }
        else if(tipoEvento == "fiesta"){
            string tematica = partes[5], invitadoEspecial = partes[6];
            Evento* fiesta = new Fiesta(duracion,ubicacion,fecha,tipoEvento,idEvento,tematica,invitadoEspecial);
            listaEventos.push_back(fiesta);
        }
        else if(tipoEvento == "evento deportivo"){
            string deporte = partes[5];
            bool apuestas = false;
            if(partes[6] == "s"){ apuestas = true;}
            Evento* eDep = new EventoDeportivo(duracion,ubicacion,fecha,tipoEvento,idEvento,deporte,apuestas);
            listaEventos.push_back(eDep);
        }
    }//fin del while
}

void agregarAsistente(Asistente* asistente, int idEvento){
    for(Evento* ptrEvento: listaEventos){
        if(ptrEvento -> getIdEvento() == idEvento){
            ptrEvento -> agregarAsistente(asistente);
        }
    }
}

void cargarAsistentes(){ //lee el archivo inicial de asistentes

    string linea;
    ifstream archivo("asistentes.txt");
    char separador = ',';

    while(getline(archivo,linea)){

        vector<string> partes = dividirLinea(linea, separador);
        int largo = partes.size();

        string nombre = partes[0];
        int edad = stoi(partes[1]);
        string tipo = partes[2];
        string ocupacion = partes[3];

        Asistente* asistente = new Asistente(nombre,edad,tipo,ocupacion);

        
        for(int i = 4; i < largo; i++){
            int idEvento = stoi(partes[i]);
            asistente -> agregarEvento(idEvento);
            agregarAsistente(asistente,idEvento);
        }
        listaAsistentes.push_back(asistente);
    }

}//fin cargarAsistentes

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
        cout << "6) Salir" << endl;
        cout << "------------------------------"<<endl;
        cout<<">"; cin>>opt; cout<<endl;

        if(opt == "1"){ agendarEvento(); }

        else if(opt == "2"){ registroAsistentes(); }

        else if(opt == "3"){consultaAsistentes();}

        else if(opt == "4"){ generarInforme();}

        else if(opt == "5"){ guardarRegistro();}

        else if(opt == "6"){
            cout << "Saliendo. ¡Hasta luego!" << endl;
        }

        else{
            cout << "Opcion invalida! por favor intente nuevamente" << endl;
            cin.clear();
        }

    }

    while(opt != "6");

}//fin iniciarMenu

int main(){ //main del programa, llama al inicio de menu

    cargarEventos();
    cargarAsistentes();
    iniciarMenu();
    
    return 0;
}//fin main
