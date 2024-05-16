#ifndef PERSONA
#define PERSONA

#include <iostream>
#include <string>
using namespace std;

class Persona {
    public:
        string nombre;
        int documento;


        Persona(string Nombre, int documento);

        string to_string();
    private:

};

#endif