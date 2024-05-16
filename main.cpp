#include <iostream>
#include <string>
#include "ListaEnlazada.h"
#include "Node.h"
#include "Persona.h"

int main() {
 
  ListaEnlazada* listita = new ListaEnlazada();



 listita->insertar(new Node(new Persona("Ana Ruiz",11222)));
  listita->insertar(new Node(new Persona("Juan Pérez",43567)));
  listita->insertar(new Node(new Persona("Luis Acosta",12098)));
  listita->insertar(new Node(new Persona("Lucía Vélez",76543)));
  listita->insertar(new Node(new Persona("Kevin Romo",89444)));
 
  listita->mostrar();
}