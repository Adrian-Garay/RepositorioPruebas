#include "Pila.h"

Pila::Pila()
{
    cima = NULL;
}

bool Pila::esVacia(){ return cima == NULL; }

void Pila::apilar(Cliente c){
    pnodo nuevo = new NodoPila(c,cima);
    //comienzo de la pila nevo nodo
    cima = nuevo;
}

Cliente Pila::desapilar(){
    pnodo nodo; //puntero aux para manipular el nodo
    if(cima){
        nodo = cima;
        cima = nodo->siguiente;
        return cima->cliente;
        delete nodo;
    }
}

//destructor
Pila::~Pila(){while(cima) desapilar();}

