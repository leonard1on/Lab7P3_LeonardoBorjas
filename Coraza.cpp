#include "Soldado.h"
#include "Coraza.h"
#include <string>
using namespace std;

Coraza::Coraza(){

}

Coraza::Coraza(int pArmadura, int pLanzas, string pNombre, string pCiudad, int pEdad) : Soldado(pNombre, pCiudad, pEdad){
  armadura=pArmadura;
  lanzas=pLanzas;
}

int Coraza::getArmadura(){
  return armadura;
}

int Coraza::getLanzas(){
  return lanzas;
}

void Coraza::setArmadura(int pArmadrua){
  armadura=pArmadura;
}

void Coraz::setLanzas(int pLanzas){
  lanzas=pLanzas;
}
