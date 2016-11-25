#include <iostream>
#include <string>
#include "Equipos.h"

using namespace std;

Partidos::Partidos(){

}

Equipos Partidos::getEquipo1(){
  return equipo1;
}

Equipos Partidos::getEquipo2(){
  return equipo2;
}

Equipos Partidos::getGanador(){
  return ganador;
}

Equipos Partidos::getLocal(){
  return local;
}

int getMarcadorEquipo1(){
  return MarcadorEquipo1;
}

int getMarcadorEquipo2(){
  return MarcadorEquipo2;
}

//seters

void Partidos::setEquipo1(Equipos equipo1){
  this->equipo1=equipo1;
}

void Partidos::setEquipo2(Equipos equipo2){
  this->equipo2=equipo2;
}

void Partidos::setGanador(Equipos ganador){
  this->ganador=ganador;
}

void Partidos::setLocal(Equipos local){
  this->local=local;
}

void getMarcadorEquipo1(int MarcadorEquipo1){
  this->MarcadorEquipo1=MarcadorEquipo1;
}

void getMarcadorEquipo2(int MarcadorEquipo2){
  this->MarcadorEquipo2=MarcadorEquipo2;
}
