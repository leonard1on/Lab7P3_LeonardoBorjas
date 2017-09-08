#include "Soldado.h"
#include <string>
using namespace std;

Soldado::Soldado(){
  nombre="Pedro";
  ciudad="Roma";
  edad=21;
}

Soldado::Soldado(string pNombre, string pCiudad, int pEdad){
  nombre=pNombre;
  ciudad=pCiudad;
  edad=pEdad;
}

string Soldado::getNombre(){
  return nombre;
}

string Soldado::getCiudad(){
  return ciudad;
}

int Soldado::getEdad(){
  return edad;
}

void Soldado::setNombre(string pNombre){
  nombre=pNombre;
}

void Soldado::setCiudad(string pCiudad){
  ciudad=pCiudad;
}

void Soldado::setEdad(int pEdad){
  edad=pEdad;
}
