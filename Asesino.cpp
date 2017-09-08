#include "Soldado.h"
#include "Asesino.h"
#include <string>
using namespace std;

Asesino::Asesino(){

}

Asesino::Asesino(int pAsesinatos, int pDesapercibidad, string pNombre, string pCiudad, pEdad) : Soldado(pNombre, pCiudad, pEdad){
  asesinatos=pAsesinatos;
  desapercibidad=pDesapercibidad;
}

int Asesino::getAsesinatos(){
  return asesinatos;
}

int Asesino::getDesapercibidad(){
  return desapercibidad;
}

void Asesino::setAsesinatos(int pAsesinatos){
  asesinatos=pAsesinatos;
}

void Asesino::setDesapercibidad(int pDesapercibidad){
  desapercibidad=pDesapercibidad;
}

double defensa(){
  return desapercibidad*10;
}

double ataque(){
  return asesinatos;
}