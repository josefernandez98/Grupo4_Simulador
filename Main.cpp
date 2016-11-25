#include <iostream>
#include <string>
#include "Entrenadores.h"
#include "Equipos.h"
#include "Jugadores.h"
#include "Partidos.h"
#include "Personas.h"

void Menu(int);

using namespace std;

int main(int argc, char const *argv[]) {

    return 0;
}//Fin del main

void Menu (int opcion) {
    cout << "---------- Torneo de Futbol ----------" << endl;
    cout << "1. Crear Equipos." << endl;
    cout << "2. Simulacion del torneo." << endl;
    cout << "3. Salir del torneo." << endl;
    cout << "Ingrese su opcion:" << endl;
    cin >> opcion;
}//Fin del menu
