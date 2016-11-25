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
