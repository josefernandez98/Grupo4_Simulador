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
        Entrenadores(string);
        void setTactica(string);
        string getTactica();
        string toString();
};
