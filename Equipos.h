#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Persona.h"
#include "Entrenadores.h"
#include "Jugadores.h"

using namespace std;

class Equipos{
  private:
    string nombreEquipo;
    Entrenadores entrenador;
    vector<Jugadores> listaJugadores;
    int NivelDefensa;
    int NivelOfensiva;
    int GolesFavor;
    int GolesContra;
  public:
    Equipos();
    Equipos(string,Entrenadores, int, int, int, int);
    int getNivelDefensa();
    int getNivelOfensa();
    int getGolesFavor();
    int getGolesContra();
    void setNivelDefensa(int);
    void setNivelOfensa(int);
    void setGolesFavor(int);
    void setGolesContra(int);

    Entrenadores getEntrenador();
    void setEntrenador(Entrenadores);

    void setListaJugadores(Jugadores);

    string toString();


};
