#include "Node.h"

// Implementación del constructor predeterminado
Node::Node() {
    next = nullptr;
}

// Implementación del constructor con parámetro
Node::Node(Persona* valor) {
    dato = valor;
    next = nullptr;
}

// Implementación del destructor
Node::~Node() {
    cout << "Node destruido" << endl;

}

void Node::setData(Persona* Dato){
    dato = Dato;
}

Persona* Node::getData(){
    return dato;
}

void Node::setSig(Node* siguiente){
    next = siguiente;
}

Node* Node::getSig(){
    return next;
}