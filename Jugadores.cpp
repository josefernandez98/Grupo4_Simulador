#include <iostream>
#include <string>
#include <sstream>
#include "Personas.h"
#include "Entrenadores.h"
#include "Jugadores.h"

Jugadores::Jugadores(string posicion) {
    this->posicion = posicion;
}//Fin del metodo

Jugadores::Jugadores() {

}//Fin del metodo

void Jugadores::setPosicion(string posicion) {
    this->posicion = posicion;
}//Fin del metodo

string Jugadores::getPosicion() {
    return posicion;
}//Fin del metodo

string Jugadores::toString() {
    stringstream ss;
    ss << Personas::toString() << " Posicion: " << posicion << endl;
    return ss.str();
}//Fin del metodo
