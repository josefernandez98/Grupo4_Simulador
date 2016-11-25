#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include "Personas.h"
#include "Jugadores.h"
#include "Entrenadores.h"
#include "Equipos.h"

using namespace std;

Equipos::Equipos(){
  nombreEquipo="";
  entrenador;
  NivelDefensa=0;
  NivelOfensiva=0;
  GolesFavor=0;
  GolesContra=0;
}

Equipos::Equipos(string nombreEquipo, Entrenadores entrenador,
int NivelDefensa, int NivelOfensiva, int GolesFavor, int GolesContra){
  this->nombreEquipo=nombreEquipo;
  this->entrenador=entrenador;
  this->NivelDefensa=NivelDefensa;
  this->NivelOfensiva=NivelOfensiva;
  this->GolesFavor=GolesFavor;
  this->GolesContra=GolesContra;
}
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

Entrenadores Equipos::getEntrenador() {
    return entrenador;
}

void Equipos::setEntrenador(Entrenadores entrenador){
  this->entrenador;
}

void Equipos::setListaJugadores(Jugadores jugador){
  listaJugadores.push_back(jugador);
}

string Equipos::toString(){
  stringstream ss;
  ss << "Nombre Equipo: " << nombreEquipo << endl;
  ss << "Entrenador: " << entrenador.toString() << endl;
  ss << "Nivel Defensa: " << NivelDefensa << endl;
  ss << "Nivel Ofensa: " << NivelOfensiva << endl;
  ss << "Goles Favor : " << GolesFavor << endl;
  ss << "Goles Contra: " << GolesContra << endl;
  return ss.str();
}
