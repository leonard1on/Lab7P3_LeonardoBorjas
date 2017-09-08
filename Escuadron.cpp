#include "Escuadron.h"
#include "Soldado.h"
#include "Arquero.h"
#include "Coraza.h"
#include "Asesino.h"
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

vector<Soldado*> Escuadron::getSoldados(){
  return soldados;
}

void Escuadron::setNombre(string pNombre){
  nombre=pNombre;
}

void Escuadron::setSoldados(vector<Soldado*> pSoldados){
  soldados=pSoldados;
}

int Escuadron::getataque(){
  int ataque=0;
  for (int i = 0; i < soldados.size(); i++) {
    ataque+=soldados.at(i)->ataque();
  }
  return ataque;
}

int Escuadron::getdefensa(){
  int defensa=0;
  for (int i = 0; i < soldados.size(); i++) {
    defensa+=soldados.at(i)->defensa();
  }
  return defensa;
}
