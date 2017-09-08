#include <iostream>
#include <string>
#include <vector>
#include "Escuadron.h"
#include "Soldado.h"
#include "Arquero.h"
#include "Coraza.h"
#include "Asesino.h"

using namespace std;
int menu();
int seleccion();
int main() {
  vector<Escuadron> escuadrones;
  int opcion=0;
  do {
    opcion=menu();
    switch (opcion) {
      case 1:{
        string nombre;
        cout<<"Cual es el nombre del Esquadron" <<endl;
        cin>>nombre;
        Escuadron escuadron(nombre);
        int resp, seleccion, edad;
        string nombre, ciudad;
        do {
          seleccion=seleccion();
          cout<<"Cual es el nombre del soldado: ";
          cin>>nombre;

          cout<<"Cual es su ciudad de origen: ";
          cin>>ciudad;

          cout<<"Cual es su edad: ";
          cin>>edad;

          if (seleccion==1) {
            int cantFlechas;
            double precision;
            cout<<"Cuantas flechas tiene el arquero: "
            cin>>cantFlechas;
            cout<<"Cual es la precision del arquero: "
            cin>>precision
            escuadron.getSoldados().push_back(Arquero(cantFlechas, precision, nombre, ciudad, edad));
          }else if (seleccion==2) {
            int armadura lanzas;
            do{
              cout<<"Dureza de la armadura (1-10): ";
              cin>>armadura;
            } while(armadura>=1 && armadura<=10);

            cout>>"Numero de lanzas: ";
            cin>>lanzas;
            escuadron.getSoldados().push_back(Coraza(armadura, lanzas, nombre, ciudad, edad));
          }else if (seleccion==3) {
            int asesinatos=0, desapercibidad=0;
            cout<<"Cantidad de asesinatos: ";
            cin>>asesinatos;
            do {
              cin>>desapercibidad;
            } while(desapercibidad>=1 && desapercibidad<=10);
            escuadron.getSoldados().push_back(Coraza(asesinatos, desapercibidad, nombre, ciudad, edad));
          }else{
            cout<<"Seleccion incorrecta";
          }

          cout<<"Quiere agregar otro soldado? 1=Si, 2=No" <<endl;
          cin>>resp;
        } while(resp!=2);

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

int seleccion(){
  int opcion;
  cout<<" - Seleccion de Soldado - " <<endl
    "1. Agregar Arquero" <<endl
    "2. Agregar Coraza" <<endl
    "3. Agregar Asesino" <<endl
    "Elija que soldado quiere agregar: ";
  cin>>opcion;
  cout<<endl;
  return opcion;
}
