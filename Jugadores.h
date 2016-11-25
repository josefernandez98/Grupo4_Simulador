#pragma once
#include <iostream>
#include <string>
#include "Personas.h"

using namespace std;

class Jugadores : public Personas {
    private:
        string posicion;
    public:
        Jugadores();
        Jugadores(string);
        void setPosicion(string);
        string getPosicion();
        string toString();
};
