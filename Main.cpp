#include <iostream>
#include <string>
#include <vector>
#include "Entrenadores.h"
#include "Equipos.h"
#include "Jugadores.h"
#include "Partidos.h"
#include "Personas.h"

int Menu();

using namespace std;

int main(int argc, char const *argv[]) {
    int opcion = 0;
    vector<Equipos> listaEquipos;
    vector<Jugadores*> listaJugadores;
    opcion = Menu();
    if(opcion==1){
        for (int i = 1; i <= 4; i++) {
            string nombreEquipo = "", nombreEntrenador = "", apellidoEntrenador = "", sobrenombreEntrenador = "", tacticaEntrenador = "";
            Entrenadores* entrenador;
            int nivelEntrenador = 1;
            cout << "Ingrese el nombre del equipo #" << i << ":";
            cin >> nombreEquipo;
            cout << endl;
            cout << "Ingrese el nombre del entrenador del equipo #" << i << ":";
            cin >> nombreEntrenador;
            cout << endl;
            cout << "Ingrese el apellido del entrenador del equipo #" << i << ":";
            cin >> apellidoEntrenador;
            cout << endl;
            cout << "Ingrese el sobrenombre del entrenador del equipo #" << i << ":";
            cin >> sobrenombreEntrenador;
            cout << endl;
            cout << "Ingrese el nivel del entrenador del equipo #" << i << " (1 - 10):";
            cin >> nivelEntrenador;
            if ((nivelEntrenador <= 0) || (nivelEntrenador > 10)) {
                for (;(nivelEntrenador <= 0) || (nivelEntrenador > 10);) {
                    cout << "Lo sentimos, ha ingresado un nivel invalido." << endl;
                    cout << "Ingrese el nivel del entrenador del equipo #" << i << " (1 - 10):";
                    cin >> nivelEntrenador;
                }//Fin del for
            }//Fin del if
            cout << endl;
            cout << "Ingrese la tactica del entrenador del equipo #" << i << ":";
            cin >> tacticaEntrenador;
            entrenador = new Entrenadores(tacticaEntrenador, nombreEntrenador, apellidoEntrenador, sobrenombreEntrenador, nivelEntrenador);
            for (int i = 0; i < 11;i++) {
                string nombreJugador = "", apellidoJugador = "", sobrenombreJugador = "", posicionJugador = "";
                int nivelJugador = 1;
                cout << "Ingrese el nombre del jugador:";
                cin >> nombreEntrenador;
                cout << endl;
                cout << "Ingrese el apellido del jugador:";
                cin >> apellidoJugador;
                cout << endl;
                cout << "Ingrese el sobrenombre del jugador:";
                cin >> sobrenombreJugador;
                cout << endl;
                cout << "Ingrese el nivel del jugador (1 - 10):";
                cin >> nivelJugador;
                if ((nivelJugador <= 0) || (nivelJugador > 10)) {
                    for (;(nivelJugador <= 0) || (nivelJugador > 10);) {
                        cout << "Lo sentimos, ha ingresado un nivel invalido." << endl;
                        cout << "Ingrese el nivel del jugador (1 - 10):";
                        cin >> nivelJugador;
                    }//Fin del for
                }//Fin del if nivel invalido
                cout << "Ingrese la posicion del jugador:";
                cin >> posicionJugador;
                cout << endl;
                Jugadores* jugador = new Jugadores(posicionJugador,nombreJugador, apellidoJugador, sobrenombreJugador, nivelJugador);
                listaJugadores.push_back(jugador);
            }//Fin del for de creacion de jugadroes
            listaEquipos.push_back(new Equipos(nombreEquipo, entrenador, 0, 0));
            for (int j = 0; j < listaJugadores.size(); j++) {
                    listaEquipos.at(i)->setListaJugadores(listaJugadores.at(j));
            }//Fin del for agregar
            for (int j = 0; j < listaJugadores.size(); j++) {
                listaJugadores.erase(listaJugadores.begin() + j);
            }//Fin del for borrar jugadores
            listaJugadores.clear();
        }//Fin del for PADRE
    }//Fin del if
    if(opcion==2){

    }//Fin del if
    if (opcion == 3) {

    }//Fin del if
    if (opcion == 4) {

    }//Fin del if
    if(opcion == 5){
      cout << "Adios" << endl;
    }//Fin del if
    return 0;
}//Fin del main

int Menu () {
    int opcion = 0;
    cout << "---------- Torneo de Futbol ----------" << endl;
    cout << "1. Crear Equipos." << endl;
    cout << "2. Simulacion del torneo." << endl;
    cout << "3. Listar Equipos." << endl;
    cout << "4. Pasar a archivo de texto." << endl;
    cout << "5. Salir del torneo." << endl;
    cout << "Ingrese su opcion:" << endl;
    cin >> opcion;
    if ((opcion > 5) || (opcion <= 0)){
        for (;(opcion > 5) || (opcion <= 0);) {
            cout << "Lo sentimos, ha ingresado una opcion invalida." << endl;
            cout << "Ingrese su opcion:" << endl;
            cin >> opcion;
        }//Fin del for
    }//Fin del if
    return opcion;
}//Fin del menu
