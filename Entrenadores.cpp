#include <iostream>
#include <string>
#include <sstream>
#include "Personas.h"
#include "Entrenadores.h"

using namespace std;

Entrenadores::Entrenadores(string tactica, string nombre, string apellido, string
sobrenombre, int nivel):Personas(nombre, apellido, sobrenombre, nivel) {
    this->tactica = tactica;
}//Fin del metodo

Entrenadores::Entrenadores () {

}//Fin del metodo

string Entrenadores::toString () {
    stringstream ss;
    ss << Personas::toString() << " Tactica: " << tactica << endl;
    return ss.str();
}//Fin del metodo

void Entrenadores::setTactica(string tactica) {
    this->tactica = tactica;
}//Fin del metodo

string Entrenadores::getTactica() {
    return tactica;
}//Fin del metodo
