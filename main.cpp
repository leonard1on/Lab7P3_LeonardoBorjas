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
int select();
int main() {
  vector<Escuadron> escuadrones;
  int opcion=0;
  do {
    opcion=menu();
    switch (opcion) {
      case 1:{
        string name;
        vector<Soldado> soldad;
        cout<<"Cual es el nombre del Esquadron" <<endl;
        cin>>name;
        Escuadron escuadron(name);
        int resp, seleccion, edad;
        string nombre, ciudad;
        do {
          seleccion=select();
          cout<<"Cual es el nombre del soldado: ";
          cin>>nombre;

          cout<<"Cual es su ciudad de origen: ";
          cin>>ciudad;

          cout<<"Cual es su edad: ";
          cin>>edad;

          if (seleccion==1) {
            int cantFlechas;
            double precision;
            cout<<"Cuantas flechas tiene el arquero: ";
            cin>>cantFlechas;
            cout<<"Cual es la precision del arquero: ";
            cin>>precision;
            soldad.push_back(Arquero(cantFlechas, precision, nombre, ciudad, edad));
          }else if (seleccion==2) {
            int armadura=0, lanzas=0;
            do{
              cout<<"Dureza de la armadura (1-10): ";
              cin>>armadura;
            } while(armadura<1 || armadura>10);

            cout<<"Numero de lanzas: ";
            cin>>lanzas;
            soldad.push_back(Coraza(armadura, lanzas, nombre, ciudad, edad));
          }else if (seleccion==3) {
            int asesinatos=0, desapercibidad=0;
            cout<<"Cantidad de asesinatos: ";
            cin>>asesinatos;
            do {
              cout<<"Cual es la desapercibidad del Asesino: ";
              cin>>desapercibidad;
            } while(desapercibidad<1 || desapercibidad>10);
            soldad.push_back(Asesino(asesinatos, desapercibidad, nombre, ciudad, edad));
          }else{

            cout<<"Seleccion incorrecta";
          }

          cout<<"Quiere agregar otro soldado? 1=Si, 2=No" <<endl;
          cin>>resp;
        } while(resp!=2);
        escuadron.setSoldados(soldad);
        escuadrones.push_back(escuadron);
      }break;

      case 2:{
        int esto;
        for (int i = 0; i < escuadrones.size(); i++) {
            cout<<i <<". " <<escuadrones.at(i).getNombre() <<endl;
        }
        cout<<"Cual desea ver?";
        cin>>esto;
        for (int i = 0; i < escuadrones.at(esto).getSoldados().size(); i++) {
          cout<<i <<". " <<escuadrones.at(esto).getSoldados().at(i).getNombre();
        }
        cout<<endl;
      }break;

      case 3:{
        int eleccion=0;
        int ataque=0, defensa=0;
        if (escuadrones.size()<4) {
          cout<<"No hay escuadrones suficientes";
        }else{ //else

          int* Jugador1 = new int[2];
          int* Jugador2 = new int[2];

          //Frontal Jugador 1
          for (int i = 0; i < escuadrones.size(); i++) {
            cout<<i <<". " <<escuadrones.at(i).getNombre() <<endl;
          }
          cout<<endl;
          cout<<"Jugador 1: Cual escuadron quieres en frente?: ";
          cin>>eleccion;

          for (int i = 0; i < escuadrones.at(eleccion).getSoldados().size(); i++) {
            ataque+=escuadrones.at(eleccion).getSoldados().at(i).ataque();
          }

          Jugador1[0]=ataque;

          //Retaguardia Jugador 1
          for (int i = 0; i < escuadrones.size(); i++) {
            cout<<i <<". " <<escuadrones.at(i).getNombre() <<endl;
          }
          cout<<endl;
          cout<<"Jugador 1: Cual escuadron quieres en la retaguardia?: ";
          cin>>eleccion;

          for (int i = 0; i < escuadrones.at(eleccion).getSoldados().size(); i++) {
            defensa+=escuadrones.at(eleccion).getSoldados().at(i).defensa();
          }

          Jugador1[1]=defensa;

        //Frontal Jugador 2
        for (int i = 0; i < escuadrones.size(); i++) {
          cout<<i <<". " <<escuadrones.at(i).getNombre()<<endl;
        }
        cout<<endl;
        cout<<"Jugador 2: Cual escuadron quieres en frente?: ";
        cin>>eleccion;

        for (int i = 0; i < escuadrones.at(eleccion).getSoldados().size(); i++) {
          ataque+=escuadrones.at(eleccion).getSoldados().at(i).ataque();
        }

        Jugador2[0]=ataque;

        //Retaguardia Jugador 2
        for (int i = 0; i < escuadrones.size(); i++) {
          cout<<i <<". " <<escuadrones.at(i).getNombre() <<endl;
        }
        cout<<endl;
        cout<<"Jugador 2: Cual escuadron quieres en la retaguardia?: ";
        cin>>eleccion;

        for (int i = 0; i < escuadrones.at(eleccion).getSoldados().size(); i++) {
          defensa+=escuadrones.at(eleccion).getSoldados().at(i).defensa();
        }

        Jugador2[1]=defensa;

        cout<<"Attack" <<Jugador1[0] << "Defense" <<Jugador1[1] <<endl;

        if (Jugador1[0] > Jugador2[1]*10) {
          cout<<"Jugador 1 ha ganado!";
        }else if (Jugador2[0] > Jugador1[1]*10) {
          cout<<"Jugador 2 ha ganado!";
        }else{
          cout<<"La batalla termina en empate";
        }
        opcion=4;
      }//fin else
    }//fin case

      default:
        break;
    }
  } while(opcion!=4);


  return 0;
}

int menu(){
  int opcion;
  cout<<" - Menu - " <<endl
    <<"1. Crear Escuadron" <<endl
    <<"2. Listar" <<endl
    <<"3. Simulacion" <<endl
    <<"4. Salir" <<endl
    <<"Seleccion una opcion: ";
  cin>>opcion;
  cout<<endl;

  return opcion;
}

int select(){
  int opcion;
  cout<<" - Seleccion de Soldado - " <<endl
    <<"1. Agregar Arquero" <<endl
    <<"2. Agregar Coraza" <<endl
    <<"3. Agregar Asesino" <<endl
    <<"Elija que soldado quiere agregar: ";
  cin>>opcion;
  cout<<endl;
  return opcion;
}
