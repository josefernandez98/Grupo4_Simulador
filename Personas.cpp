#include <iostream>
#include <string>
#include <sstream>
#include "Personas.h"

using namespace std;

Personas::Personas(string nombre, string apellido, string sobrenombre, int nivel) {
    this->nombre = nombre;
    this->apellido = apellido;
    this->sobrenombre = sobrenombre;
    this->nivel = nivel;
}//Fin del metodo

Personas::Personas() {

}//Fin del metodo

string Personas::toString() {
    stringstream ss;
    ss << "Nombre: " << nombre << endl;
    ss << "Apellido: " << apellido << endl;
    ss << "Sobrenombre: " << sobrenombre << endl;
    ss << "Nivel: " << nivel << endl;
    return ss.str();
}

void Personas::setNombre (string nombre) {
    this->nombre = nombre;
}//Fin del metodo

void Personas::setApellido (string apellido) {
    this->apellido = apellido;
}//Fin del metodo

void Personas::setSobrenombre (string sobrenombre) {
    this->sobrenombre = sobrenombre;
}//Fin del metodo

void Personas::setNivel (int nivel) {
    this->nivel = nivel;
}//Fin del metodo

string Personas::getNombre () {
    return nombre;
}//Fin del metodo

string Personas::getApellido () {
    return apellido;
}//Fin del metodo

string Personas::getSobrenombre () {
    return sobrenombre;
}//Fin del metodo
int Personas::getNivel () {
    return nivel;
}//Fin del metodo
