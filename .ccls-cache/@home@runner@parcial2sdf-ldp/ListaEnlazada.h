#ifndef LISTA_H
#define LISTA_H

#include "Node.h"
#include "Persona.h"

class ListaEnlazada {
    public:
        Node* cab;
        ListaEnlazada();
        void mostrar();
       void insertar(Node* Dato);
       bool estaVacia();
    


    private:
Node* buscarCola();


};

#endif