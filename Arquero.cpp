#include "Arquero.h"
#include "Soldado.h"
#include <string>
using namespace std;

Arquero::Arquero(){

}

Arquero::Arquero(int pFlechas, double pPrecision, string pNombre, string pCiudad, int pEdad) : Soldado(pNombre, pCiudad, pEdad){
  flechas=pFlechas;
  precision=pPrecision;
}

int Arquero::getFlechas(){
  return flechas;
}

double Arquero::getPrecision(){
  return precision;
}

void Arquero::setFlechas(int pFlechas){
  flechas=pFlechas;
}

void Arquero::setPrecision(double pPrecision){
  precision=pPrecision;
}

double Arquero::ataque(){
  return flechas*(precision/1000);
}

double Arquero::defensa(){
  return 0;
}
