#pragma once
#include "Soldado.h"
#include <vector>
#include <string>

using namespace std;

class Escuadron {
private:
  string nombre;
  vector<Soldado> soldados;

public:
  Escuadron();
  Escuadron (string);
  string getNombre();
  vector<Soldado> getSoldados():
  void setNombre(string);
  void setSoldados(vector<Soldado>);
};
