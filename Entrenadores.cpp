#include <iostream>
#include <string>
#include "Personas.h"
#include "Entrenadores.h"

using namespace std;

Entrenadores::Entrenadores() {
    tactica = "";
}//Fin del metodo

Entrenadores::Entrenadores () {

}//Fin del metodo

void Entrenadores::setTactica(string tactica) {
    this->tactica = tactica;
}//Fin del metodo

string Entrenadores::getTactica() {
    return tactica;
}//Fin del metodo
