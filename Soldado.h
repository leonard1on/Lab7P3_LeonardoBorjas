#pragma once
#include <string>

using namespace std;

class Soldado{
  private:
    string nombre;
    string ciudad;
    int edad;

  public:
    Soldado();
    Soldado(string, string, int);
    string getNombre();
    string getCiudad();
    int getEdad();
    void setNombre(string);
    void setCiudad(string);
    void setEdad(int);

    virtual int defensa()=0;
    virtual int ataque()=0;

};
