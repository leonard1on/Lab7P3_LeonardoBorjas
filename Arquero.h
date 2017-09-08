#pragma once;
#include "Soldado.h"
#include <string>
using namespace std;

class Arquero : public Soldado{
  private:
    int flechas;
    double precision;
  public:
    Arquero();
    Arquero(int, double, string, string, int);
    int getFlechas();
    double getPrecision();
    void setFlechas(int);
    void setPrecision(double);

    double defensa();
    double ataque();

}
