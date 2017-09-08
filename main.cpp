#include <iostream>
#include <string>
#include <vector>
#include "Escuadron.h"
#include "Soldado.h"
#include "Arquero.h"
#include "Coraza.h"*/:
#include "Asesino.h"

using namespace std;
int menu();
int main() {
  vector<Escuadron> escuadrones;
  int opcion=0;
  do {
    opcion=menu();
    switch (opcion) {
      case 1:{

      }break;

      case 2:{

      }break;

      default:
        break;
    }
  } while(opcion!=3);


  return 0;
}

int menu(){
  int opcion;
  cout<<" - Menu - " <<endl
    <<"1. Crear Escuadron" <<endl
    <<"2. Simulacion" <<endl
    <<"3. Salir" <<endl
    <<"Seleccion una opcion: ";
  cin>>opcion;
  cout<<endl;

  return opcion;
}
