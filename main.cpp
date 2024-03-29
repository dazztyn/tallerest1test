#include <iostream>
using namespace std;

//declaracion de funciones

void agendarEvento(){

}//fin agendarEvento

void consultaAsistentes(){

}//fin consultaAsistentes

void registroAsistentes(){

}//fin registroAsistentes

void guardarRegistro(){

}//fin guardarRegistro

void iniciarMenu(){ //inicia el menu del programa

    cout << "------------------------------"<<endl;
    cout << "Bienvenido al sistema de registro de eventos" << endl;
    cout << "Seleccione opcion: " << endl;
    cout << endl;
    cout << "1) Agendar evento" << endl;
    cout << "2) Consultar asistentes " << endl;
    cout << "3) Registro de asistentes" << endl;
    cout << "4) Guardar registro" << endl;
    cout << "5) Salir" << endl;

    string opt;

    cout<<">"<<endl;
    cin>>opt;

    do{

        if(opt == "1"){
            agendarEvento();
        }
        else if(opt == "2"){
            consultaAsistentes();
        }
        else if(opt == "3"){
            registroAsistentes();
        }
        else if(opt == "4"){
            guardarRegistro();
        }
        else if(opt == "5"){
            cout << "Saliendo. Hasta luego!" << endl;
        }
        else{
            cout << "Opcion invalida, por favor intente nuevamente" << endl;
        }

    }

    while(opt != "5");

    cout<<"Adios..."<<endl;

}//fin iniciarMenu

int main(){

    //cargarDatos();
    iniciarMenu();
    
    return 0;
}//fin main
