#pragma once
#include <iostream>
#include <string>
#include "Equipos.h"

using namespace std;

class Partidos{
  private:
    Equipos equipo1;
    Equipos equipo2;
    int MarcadorEquipo1;
    int Marcadorequipo2;
    Equipos ganador;
    Equipos local;

  public:
    Partidos();
    Partidos(Equipos,Equipos,int,int,Equipos,Equipos);
    Equipos getEquipo1();
    Equipos getEquipo2();
    Equipos getGanador();
    Equipos getLocal();
    int getMarcadorEquipo1();
    int getMarcadorEquipo2();

    void setEquipo1(Equipos);
    void setEquipo2(Equipos);
    void setGanador(Equipos);
    void setLocal(Equipos);
    void setMarcadorEquipo1(int);
    void getMarcadorEquipo2(int);

    string toString();










};
