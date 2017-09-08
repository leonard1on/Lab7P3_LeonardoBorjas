#pragma once
#include "Solado.h"
#include <string>
using namespace std;

class Asesino : public Soldado{
private:
  int asesinatos;
  int desapercibidad;

public:
  Asesino();
  Asesino(int, int, string, string, int);
  int getAsesinatos();
  int getDesapercibidad();
  void setAsesinatos(int);
  void setDesapercibidad(int);


};
