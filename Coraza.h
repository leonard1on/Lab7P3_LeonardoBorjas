#pragma once
#include "Soldado.h"
class Coraza : public Soldado{
private:
  int armadura;
  int lanzas;
public:
  Coraza();
  Coraza(int, int, string, string, int);
  int getArmadura();
  int getLanzas();
  void setArmadura(int);
  void setLanzas(int);

  double defensa();
  double ataque();

};
