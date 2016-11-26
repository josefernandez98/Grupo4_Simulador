#include <iostream>
#include <string>
#include <vector>
#include "Entrenadores.h"
#include "Equipos.h"
#include "Jugadores.h"
#include "Partidos.h"
#include "Personas.h"
#include <stdlib.h>
#include <time.h>

int Menu();

using namespace std;

int main(int argc, char const *argv[]) {
    int opcion = 0;
    vector<Equipos*> listaEquipos;
    vector<Jugadores*> listaJugadores;
    vector<Partidos*> torneo;
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
            for (int j = 0; j < 11;j++) {
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

        //Partido 1
        Equipos* local;
        int aleatorio = 1;
        aleatorio = rand() % 2;
        if (aleatorio == 0) {
            local = listaEquipos.at(0);
        } else {
            local = listaEquipos.at(1);
        }//Fin del if
        torneo.push_back(new Partidos(listaEquipos.at(0), listaEquipos.at(1), 0, 0, local));

        //Partido 2
        aleatorio = rand() % 2;
        if (aleatorio == 0) {
            local = listaEquipos.at(0);
        } else {
            local = listaEquipos.at(2);
        }//Fin del if
        torneo.push_back(new Partidos(listaEquipos.at(0), listaEquipos.at(2), 0, 0, local));

        //Partido 3
        aleatorio = rand() % 2;
        if (aleatorio == 0) {
            local = listaEquipos.at(0);
        } else {
            local = listaEquipos.at(3);
        }//Fin del if
        torneo.push_back(new Partidos(listaEquipos.at(0), listaEquipos.at(3), 0, 0, local));

        //Partido 4
        aleatorio = rand() % 2;
        if (aleatorio == 0) {
            local = listaEquipos.at(1);
        } else {
            local = listaEquipos.at(2);
        }//Fin del if
        torneo.push_back(new Partidos(listaEquipos.at(1), listaEquipos.at(2), 0, 0, local));

        //Partido 5
        aleatorio = rand() % 2;
        if (aleatorio == 0) {
            local = listaEquipos.at(1);
        } else {
            local = listaEquipos.at(3);
        }//Fin del if
        torneo.push_back(new Partidos(listaEquipos.at(1), listaEquipos.at(3), 0, 0, local));

        //Partido 6
        aleatorio = rand() % 2;
        if (aleatorio == 0) {
            local = listaEquipos.at(2);
        } else {
            local = listaEquipos.at(3);
        }//Fin del if
        torneo.push_back(new Partidos(listaEquipos.at(0), listaEquipos.at(1), 0, 0, local));

        for (int i = 0; i < 6; i++) {
            int defensaLocal = 0, defensaVisitante = 0, ofensivaLocal = 0, ofensivaVisitante = 0, equipoLocal = 0, equipoVisitante = 0;
            if (torneo.at(i)->getEquipo1() == torneo.at(i)->getLocal()) {
                defensaVisitante = torneo.at(i)->getEquipo2()->getNivelDefensa() * 0.9;
                defensaLocal = torneo.at(i)->getEquipo1()->getNivelDefensa();
                ofensivaLocal = torneo.at(i)->getEquipo1()->getNivelOfensa();
                ofensivaVisitante = torneo.at(i)->getEquipo2()->getNivelOfensa();
                equipoLocal = 1;
            } else {
                defensaVisitante = torneo.at(i)->getEquipo1()->getNivelDefensa() * 0.9;
                defensaLocal = torneo.at(i)->getEquipo2()->getNivelDefensa();
                ofensivaLocal = torneo.at(i)->getEquipo2()->getNivelOfensa();
                ofensivaVisitante = torneo.at(i)->getEquipo1()->getNivelOfensa();
                equipoLocal = 2;
            }//Fin de esto
            if (equipoLocal == 1) {
                int goles = 0;
                for (int j = 0; j < 5; j++) {
                    aleatorio = rand() % 10 + 1;
                    ofensivaVisitante *= aleatorio;
                    if (ofensivaLocal > defensaVisitante) {
                        goles++;
                        torneo.at(i)->getEquipo1()->setGolesFavor(goles);
                    }//Fin del if
                }//Fin del primer equipo
                for (int j = 0; j < 5; j++) {
                    aleatorio = rand() % 10 + 1;
                    ofensivaVisitante *= aleatorio;
                    goles = 0;
                    if (ofensivaVisitante > defensaLocal) {
                        goles++;
                        torneo.at(i)->getEquipo2()->setGolesFavor(goles);
                    }//Fin del if
                }//Fin del primer equipo
            } else if (equipoLocal == 2){
                int goles = 0;
                for (int j = 0; j < 5; j++) {
                    aleatorio = rand() % 10 + 1;
                    ofensivaVisitante *= aleatorio;
                    if (ofensivaLocal > defensaVisitante) {
                        goles++;
                        torneo.at(i)->getEquipo2()->setGolesFavor(goles);
                    }//Fin del if
                }//Fin del primer equipo
                for (int j = 0; j < 5; j++) {
                    aleatorio = rand() % 10 + 1;
                    ofensivaVisitante *= aleatorio;
                    goles = 0;
                    if (ofensivaVisitante > defensaLocal) {
                        goles++;
                        torneo.at(i)->getEquipo1()->setGolesFavor(goles);
                    }//Fin del if
                }//Fin del primer equipo
            }//FUCK
        }//Fin del for
        int mayor1 = 0, mayor2 = 0, auxiliar = 0;
        for (int i = 0; i < listaEquipos.size(); i++) {
            auxiliar = listaEquipos.at(i)->getGolesFavor() - listaEquipos.at(i)->getGolesContra();
            /*
            Mirá Herbert, este lab estana muy largo, por ende, no pudimos hacer esta shit.
            Atte. José y Harold.
            */
        }//Fin de esta mierda. Herbert lee esto, easter egg
    }//Fin del if
    if (opcion == 3) {

    }//Fin del if
    if (opcion == 4) {
        cout << "Hasta luego." << endl;
    }//Fin del if
    return 0;
}//Fin del main

int Menu () {
    int opcion = 0;
    cout << "---------- Torneo de Futbol ----------" << endl;
    cout << "1. Crear Equipos." << endl;
    cout << "2. Simulacion del torneo." << endl;
    cout << "3. Pasar a archivo de texto." << endl;
    cout << "4. Salir del torneo." << endl;
    cout << "Ingrese su opcion:";
    cin >> opcion;
    if ((opcion > 4) || (opcion <= 0)){
        for (;(opcion > 4) || (opcion <= 0);) {
            cout << "Lo sentimos, ha ingresado una opcion invalida." << endl;
            cout << "Ingrese su opcion:" << endl;
            cin >> opcion;
        }//Fin del for
    }//Fin del if
    return opcion;
}//Fin del menu
