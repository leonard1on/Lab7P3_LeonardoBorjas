#include "Escuadron.h"
#include <vector>
#include <string>

using namespace std;

Escuadron::Escuadron(){
  nombre="Sparta";
}

Escuadron::Escuadron(string pNombre){
  nombre=pNombre;
}

string Escuadron::getNombre(){
  return nombre;
}

vector<Soldado> Escuadron::getSoldados(){
  return soldados;
}

void setNombre(string pNombre){
  nombre=pNombre;
}

void setSoldados(vector<Soldado> pSoldados){
  soldados=pSoldados;
}
