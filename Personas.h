#pragma once
#include <iostream>
#include <string>

using namespace std;

class Personas {
    protected:
        string nombre;
        string apellido;
        string sobrenombre;
        int nivel;
    public:
        Personas();
        Personas(string, string, string, int);
        void setNombre(string);
        void setApellido(string);
        void setSobrenombre(string);
        void setNivel(int);
        string getNombre();
        string getApellido();
        string getSobrenombre();
        int getNivel();
        string toString();
};
