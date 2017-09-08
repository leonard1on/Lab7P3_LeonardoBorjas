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

void Coraza::setArmadura(int pArmadura){
  armadura=pArmadura;
}

void Coraza::setLanzas(int pLanzas){
  lanzas=pLanzas;
}

int Coraza::defensa(){
  return armadura;
}

int Coraza::ataque(){
  return lanzas;
}
