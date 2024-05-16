#ifndef Node_h
#define Node_h

#include "Persona.h"
#include <iostream>

using namespace std;

class Node {
public:
    Node();
    Node(Persona* persona);
    ~Node();


void setData(Persona* dato);
Persona* getData();

void setSig(Node* next);
Node* getSig();

private:
Persona* dato; // Cambiamos int a int* para que dato pueda almacenar un puntero
    Node* next;
};

#endif
