#pragma once
#include <iostream>
#include <string>
#include "Personas.h"

using namespace std;

Personas::Personas() {
    nombre = "";
    apellido = "";
    sobrenombre = "";
    nivel = 1;
}//Fin del metodo

Personas::Personas() {

}//Fin del metodo

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
