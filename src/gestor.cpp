#include <string>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "string.h"
#include "gestor.h"
#include "vehiculo.h"
#include <time.h> // es necesario incluirla

using namespace std;

Gestor::Gestor()
{
    //ctor
}

Gestor::~Gestor()
{
    //dtor
}

void Gestor::crea_vehiculos(int nv)
{
    //Vehiculo vehiculos_cola;
    for (int i=0; i<nv; i++)                                       //Crea el numero de bastidor
    {
        cout<<"Vehiculo aleatorio número "<< i <<"\n";
        Cola_fabrica.encolar(Vehiculo());
        cout<<"\n";

    }
}
void Gestor::muestra_almacen_fabrica()
{
    Cola_fabrica.mostrarCola();
}

void Gestor::limpia_almacen()
{
    if (Cola_fabrica.es_vacia())
    {
        cout<<"Cola de fabrica vacía. \n";
    }
    else
    {
        while(!Cola_fabrica.es_vacia())
        {
            Cola_fabrica.desencolar();
        }
        cout<<"Almacen de la fabrica vaciado.\n";
    }
}

