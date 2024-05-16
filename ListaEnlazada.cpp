#include <iostream>
#include "ListaEnlazada.h"
#include "Persona.h"
#include "Node.h"

ListaEnlazada::ListaEnlazada(){
    cab = nullptr;   //"Se llama el constructor de Lista" 
}


void ListaEnlazada::mostrar(){
    //iteracion de todos los elementos
    Node* actual;
    actual = cab;
    int i = 1;
    std::cout << "Listando... \n";
    if (this->estaVacia()){
        std::cout << "Lista vacia \n";
    }

    while(actual != nullptr){
      Persona* item = actual->getData();
        std::cout <<"[" << "turno #" << i << "]"<< item->to_string()<< std::endl; 
        i = i+1;
        actual = actual->getSig();
    }
   //cout << "NULL" << endl;
}                         

bool ListaEnlazada::estaVacia(){

  if (this->cab == nullptr){
    return true;
  } 
  else {
    return false;
  }
  
}


Node* ListaEnlazada::buscarCola(){
    Node* actual;
    actual = cab;
    //recorrido hasta el final
    //el final node.sig es null
    while (actual->getSig() != nullptr){
        actual=actual->getSig();
    }
    return actual;
}
void ListaEnlazada::insertar(Node* Dato){
    if (cab == nullptr){  //La lista es vacia
        cab = Dato;
    } else {
        Node* cola = buscarCola();
        cola->setSig(Dato);
    }
}

