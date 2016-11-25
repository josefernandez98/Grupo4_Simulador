#pragma once
#include <iostream>
#include <string>

using namespace std;

class Equipos{
  private:
    string nombreEquipo;
    int NivelDefensa;
    int NivelOfensiva;
    int GolesFavor;
    int GolesContra;

  public:
    Equipos();
    int getNivelDefensa();
    int getNivelOfensa();
    int getGolesFavor();
    int getGolesContra();
    void setNivelDefensa(int);
    void setNivelOfensa(int);
    void setGolesFavor(int);
    void setGolesContra(int);

};
