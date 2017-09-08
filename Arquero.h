#pragma once
#include "Soldado.h"
#include <string>
using namespace std;

class Arquero : public Soldado{
  private:
    int flechas;
    double precision;
  public:
    Arquero();
    Arquero(int, int, string, string, int);
    int getFlechas();
    int getPrecision();
    void setFlechas(int);
    void setPrecision(int);

    int defensa();
    int ataque();

};
