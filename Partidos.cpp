#include <iostream>
#include <string>
#include <sstream>
#include "Equipos.h"
#include "Partidos.h"

using namespace std;

Partidos::Partidos(){
  equipo1;
  equipo2;
  MarcadorEquipo1=0;
  MarcadorEquipo2=0;
  ganador;
  local;

}
Partidos::Partidos(Equipos* equipo1, Equipos* equipo2,
  int MarcadorEquipo1, int MarcadorEquipo2, Equipos* local){
    this->equipo1=equipo1;
    this->equipo2=equipo2;
    this->MarcadorEquipo1=MarcadorEquipo1;
    this->MarcadorEquipo2=MarcadorEquipo2;
    //this->ganador=ganador;
    this->local=local;
}

Equipos* Partidos::getEquipo1(){
  return equipo1;
}

Equipos* Partidos::getEquipo2(){
  return equipo2;
}

Equipos* Partidos::getGanador(){
  return ganador;
}

Equipos* Partidos::getLocal(){
  return local;
}

int Partidos::getMarcadorEquipo1(){
  return MarcadorEquipo1;
}

int Partidos::getMarcadorEquipo2(){
  return MarcadorEquipo2;
}

//seters

void Partidos::setEquipo1(Equipos* equipo1){
  this->equipo1=equipo1;
}

void Partidos::setEquipo2(Equipos* equipo2){
  this->equipo2=equipo2;
}

void Partidos::setGanador(Equipos* ganador){
  this->ganador=ganador;
}

void Partidos::setLocal(Equipos* local){
  this->local=local;
}

void Partidos::setMarcadorEquipo1(int MarcadorEquipo1){
  this->MarcadorEquipo1=MarcadorEquipo1;
}

void Partidos::setMarcadorEquipo2(int MarcadorEquipo2){
  this->MarcadorEquipo2=MarcadorEquipo2;
}

string Partidos::toString(){
  stringstream ss;
  ss << "Equipo 1: "<< equipo1->toString()<<"\n";
  ss << "Equipo 2: "<< equipo2->toString()<<"\n";
  ss << "Marcador Equipo 1: "<< MarcadorEquipo1<<"\n";
  ss << "Marcador Equipo 2: "<< MarcadorEquipo2<<"\n";
  ss << "Ganador : "<< ganador->toString() <<"\n";
  ss << "Local: "<< local->toString() <<"\n";
  return ss.str();
}
