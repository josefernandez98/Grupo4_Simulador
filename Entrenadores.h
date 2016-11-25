#pragma once
#include <iostream>
#include <string>
#include "Personas.h"


using namespace std;

class Entrenadores : public Personas {
    private:
        string tactica;
    public:
        Entrenadores();
        Entrenadores(string, string, string, string, int);
        void setTactica(string);
        string getTactica();
        string toString();
};
