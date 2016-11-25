#include <iostream>
#include <string>
#include "Entrenadores.h"
#include "Equipos.h"
#include "Jugadores.h"
#include "Partidos.h"
#include "Personas.h"

int Menu();

using namespace std;

int main(int argc, char const *argv[]) {
    int opcion = 0;
    opcion = Menu();
    
    return 0;
}//Fin del main

int Menu () {
    int opcion = 0;
    cout << "---------- Torneo de Futbol ----------" << endl;
    cout << "1. Crear Equipos." << endl;
    cout << "2. Simulacion del torneo." << endl;
    cout << "3. Salir del torneo." << endl;
    cout << "Ingrese su opcion:" << endl;
    cin >> opcion;
    if ((opcion > 3) || (opcion <= 0)){
        for (;(opcion > 3) || (opcion <= 0);) {
            cout << "Lo sentimos, ha ingresado una opcion invalida." << endl;
            cout << "Ingrese su opcion:" << endl;
            cin >> opcion;
        }//Fin del for
    }//Fin del if
    return opcion;
}//Fin del menu
