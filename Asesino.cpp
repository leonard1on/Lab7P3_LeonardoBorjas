#include "Soldado.h"
#include "Asesino.h"
#include <string>
using namespace std;

Asesino::Asesino(){

}

Asesino::Asesino(int pAsesinatos, int pDesapercibidad, string pNombre, string pCiudad, int pEdad) : Soldado(pNombre, pCiudad, pEdad){
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

int Asesino::defensa(){
  return desapercibidad*10;
}

int Asesino::ataque(){
  return asesinatos;
}
