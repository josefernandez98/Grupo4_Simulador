#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include "Personas.h"
#include "Jugadores.h"
#include "Entrenadores.h"

Equipos::Equipos(){

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

Entrenadores Equipos::getEntrenador();
void Equipos::setEntrenador(Entrenadores entrenador){
  this->entrenador;
}

void Equipos::setListaJugadores(Jugadores jugador){
  Jugadores.push_back(jugador);
}

string Equipos::toString(){
  stringstream ss;
  ss << "Nombre Equipo: "<< nombreEquipo<<"\n";
  ss << "Entrenador: "<< entrenador<<"\n";
  ss << "Nivel Defensa: "<< NivelDefensa<<"\n";
  ss << "Nivel Ofensa: "<< NivelOfensiva<<"\n";
  ss << "Goles Favor : "<< GolesFavor <<"\n";
  ss << "Goles Contra: "<< GolesContra <<"\n";
  return ss.str();
}
