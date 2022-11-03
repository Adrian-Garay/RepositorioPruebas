#include "Cola.h"
#include <iostream>
#include <Automovil.h>
using namespace std;


Cola::Cola()
{
    primero=NULL;
    ultimo=NULL;
    lon=0;
    //constructor
}

Cola::~Cola()
{
    primero=NULL;
    ultimo=NULL;
    lon=0;
    //destructor
}

void Cola::encolar_char(char elemento) //metodo para encolar un caracter en la cola
{
    NodoCola* nuevo_nodo=new NodoCola(elemento, ultimo);
    if(esVacia())
    {
        primero=nuevo_nodo;
        ultimo=nuevo_nodo;
    }
    else
    {
        ultimo->siguiente=nuevo_nodo;
        ultimo=nuevo_nodo;
    }
    lon++;
}

void Cola::encolar_automovil(Automovil elemento) //metodo para encolar un automovil en la cola
{
    NodoCola* nuevo_nodo=new NodoCola(elemento, ultimo);
    if(esVacia())
    {
        primero=nuevo_nodo;
        ultimo=nuevo_nodo;
    }
    else
    {
        ultimo->siguiente=nuevo_nodo;
        ultimo=nuevo_nodo;
    }
    lon++;
}

char Cola::desencolar_char() //metodo para desencolar un caracter de la cola
{
    if(!esVacia())
    {
        char elemento_char=primero->elemento_char;
        NodoCola*aux=primero;
        if((primero==ultimo)&&(primero->siguiente==NULL))
        {
            primero=NULL;
            ultimo=NULL;
            aux->siguiente=NULL;
            delete(aux);
        }
        else
        {
            primero=primero->siguiente;
            aux->siguiente=NULL;
            delete(aux);
        }
        lon--;
        return elemento_char;
    }
}

Automovil Cola::desencolar_automovil() //metodo para desencolar un automovil de la cola
{
    if(!esVacia())
    {
        Automovil elemento_automovil=primero->elemento_automovil;
        NodoCola*aux=primero;
        if((primero==ultimo)&&(primero->siguiente==NULL))
        {
            primero=NULL;
            ultimo=NULL;
            aux->siguiente=NULL;
            delete(aux);
        }
        else
        {
            primero=primero->siguiente;
            aux->siguiente=NULL;
            delete(aux);
        }
        lon--;
        return elemento_automovil;
    }
}

char Cola::inicio_char() //metodo para conseguir el primer caracter de la cola
{
    if(!esVacia())
    {
        return primero->elemento_char;
    }
}

Automovil Cola::inicio_automovil() //metodo para conseguir el primer automovil de la cola
{
    if(!esVacia())
    {
        return primero->elemento_automovil;
    }
}

char Cola::fin_char() //metodo para conseguir el ultimo caracter de la cola
{
    if(!esVacia())
    {
        return ultimo->elemento_char;
    }
}

Automovil Cola::fin_automovil() //metodo para conseguir el ultimo automovil de la cola
{
    if(!esVacia())
    {
        return ultimo->elemento_automovil;
    }
}

int Cola::longitud() //metodo para conseguir la longitud de la cola
{
    return lon;
}

bool Cola::esVacia() //metodo para saber si la cola esta vacia
{
    return ((primero==NULL)&&(ultimo==NULL));
}

void Cola::mostrarCola_char() //metodo para mostrar los caracteres de la cola
{
    NodoCola *aux=primero;
    if(esVacia())
    {
        cout<<"Cola vacia: "<<endl;
    }
    else
    {
        cout<<"Datos de la cola: "<<endl;
        while(aux)
        {
            cout<<aux->elemento_char<<endl;
            aux=aux->siguiente;
        }
    }
}

void Cola::mostrar_cola_automovil() //metodo para mostrar los automoviles de la cola
{
    NodoCola *aux=primero;
    if(esVacia())
    {
        cout<<"Cola vacia: "<<endl;
    }
    else
    {
        cout<<"Datos de la cola: "<<endl;
        cout<<""<<endl;
        for(int i=0; i<lon; i++)
        {
            cout<<i+1<<endl;
            cout<<aux->elemento_automovil.getNumeroBastidor()<<endl;
            cout<<aux->elemento_automovil.getModelo()<<endl;
            cout<<aux->elemento_automovil.getColor()<<endl;
            cout<<aux->elemento_automovil.getConcesionarioAsignado()<<endl;
            aux=aux->siguiente;
        }
    }
}
