#include <iostream>
using namespace std;

void iniciarMenu();

int main(){

    //cargarDatos();
    iniciarMenu();
    
    return 0;
}


void iniciarMenu(){

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

        
        

    }

    while(opt != "6");
        
    



}