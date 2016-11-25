#include <iostream>
#include <string>
#include "Personas.h"
#include "Jugadores.h"
#include "Entrenadores.h"

Equipos::Equipos();
int Equipos::getNivelDefensa(){
  return NivelDefensa;
}

int Equipos::getNivelOfensa(){
  return NivelOfensiva;
}
int Equipos::getGolesFavor(){
  return GolesFavor;
}
int Equipos::getGolesContra(){
  return GolesContra;
}
void Equipos::setNivelDefensa(int NivelDefensa){
  this->NivelDefensa=NivelDefensa;
}
void Equipos::setNivelOfensa(int NivelOfensiva){
  this->NivelOfensiva=NivelOfensiva;
}
void Equipos::setGolesFavor(int GolesFavor){
  this->GolesFavor=GolesFavor;
}
void Equipos::setGolesContra(int GolesContra){
  this->GolesContra=GolesContra;
}

Entrenadores Equipos::getEntrenador();
void Equipos::setEntrenador(Entrenadores entrenador){
  this->entrenador;
}

void Equipos::setListaJugadores(Jugadores jugador){
  Jugadores.push_back(jugador);
}
