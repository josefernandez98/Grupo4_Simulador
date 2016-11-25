#include <iostream>
#include <string>
#include <sstream>
#include "Equipos.h"

using namespace std;

Partidos::Partidos(){

}
Partidos::Partidos(Equipos equipo1, Equipos equipo2,
  int MarcadorEquipo1, int Marcadorequipo2, Equipos ganador, Equipos local){
    this->equipo1=equipo1;
    this->equipo2=equipo2;
    this->MarcadorEquipo1=MarcadorEquipo1;
    this->Marcadorequipo2=Marcadorequipo2;
    this->ganador=ganador;
    this->local=local;
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

string Partidos::toString(){
  stringstream ss;
  ss << "Equipo 1: "<< equipo1<<"\n";
  ss << "Equipo 2: "<< equipo2<<"\n";
  ss << "Marcador Equipo 1: "<< MarcadorEquipo1<<"\n";
  ss << "Marcador Equipo 2: "<< MarcadorEquipo2<<"\n";
  ss << "Ganador : "<< ganador <<"\n";
  ss << "Local: "<< local <<"\n";
  return ss.str();
}
