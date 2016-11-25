#include <iostream>
#include <string>
#include "Personas.h"
#include "Entrenadores.h"

Entrenadores::Entrenadores() {
    posicion = "";
}//Fin del metodo

Entrenadores::Entrenadores() {

}//Fin del metodo

void Entrenadores::setPosicion(string posicion) {
    this->posicion = posicion;
}//Fin del metodo

string Entrenadores::getPosicion() {
    return posicion;
}//Fin del metodo
