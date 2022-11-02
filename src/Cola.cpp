#include "../include/Cola.h"
#include "../include/NodoCola.h"
#include "vehiculo.h"
#include <iostream>
using namespace std;

Cola::Cola()
{primero = NULL; ultimo = NULL;
    longitud = 0;
}
Cola::~Cola() {}

void Cola::encolar( Vehiculo v)
{   NodoCola*nuevo_nodo = new
    NodoCola (v);
    if(es_vacia())
    {   primero = nuevo_nodo;
        ultimo = nuevo_nodo;
    }
    else
    {   ultimo ->siguiente = nuevo_nodo;
        ultimo = nuevo_nodo;
    }
    longitud++;
}

Vehiculo Cola::desencolar()
{   if (!es_vacia())
    {
    Vehiculo v = primero-> v;
    NodoCola*aux = primero;

    if((primero==ultimo) && (primero->siguiente == NULL))
    {
        primero = NULL;
        ultimo = NULL;
        aux->siguiente = NULL;
        delete(aux);
    }
    else
    {
        primero = primero->siguiente;
        aux->siguiente =NULL;
        delete(aux);
    }
    longitud--;
    return v;
    }
}

Vehiculo Cola::inicio()
{
    if (!es_vacia())
    {
    return primero->v;
    }
}

Vehiculo Cola::fin()
    {
    if (!es_vacia())
    {
    return ultimo-> v;
    }
}

int Cola::get_longitud()
{   return longitud;
}

bool Cola:: es_vacia()
{   return ((primero == NULL) && (ultimo ==NULL));
}
/*
void muestraCola( struct cola q )
{
     struct nodo *aux;

     aux = q.delante;

     while( aux != NULL )
     {
            cout<<"   "<< aux->nro ;
            aux = aux->sgte;
     }
}*/
/*void Cola:: mostrarCola()
//No es correcto, la cola solo puede verse mostrando el primero y desencolando, se implementa para comprobar c�digo facilmente
{
    NodoCola*aux =primero;
    if (es_vacia ()) {cout <<"Cola Vac�a: "<<endl;}
    else{
        cout<<"Datos de la Cola: "<<endl;
    while(aux){
        cout<< aux->elemento<<endl;
        aux= aux->siguiente;
        }
    }
}*/

