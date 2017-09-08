#include "Arquero.h"
#include "Soldado.h"
#include <string>
using namespace std;

Arquero::Arquero(){

}

Arquero::Arquero(int pFlechas, int pPrecision, string pNombre, string pCiudad, int pEdad) : Soldado(pNombre, pCiudad, pEdad){
  flechas=pFlechas;
  precision=pPrecision;
}

int Arquero::getFlechas(){
  return flechas;
}

int Arquero::getPrecision(){
  return precision;
}

void Arquero::setFlechas(int pFlechas){
  flechas=pFlechas;
}

void Arquero::setPrecision(int pPrecision){
  precision=pPrecision;
}

int Arquero::ataque(){
  return flechas*(precision/1000);
}

int Arquero::defensa(){
  return 0;
}
