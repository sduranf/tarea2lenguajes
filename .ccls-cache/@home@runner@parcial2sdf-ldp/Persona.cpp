#include <iostream>
#include <string>
#include "Persona.h"

using namespace std;


Persona::Persona(string Nombre, int Documento){
    nombre = Nombre;
    documento = Documento;
}

 string Persona::to_string(){
    string valor = " "  + std::to_string(documento) + " :: " + nombre;

 return valor;
}


