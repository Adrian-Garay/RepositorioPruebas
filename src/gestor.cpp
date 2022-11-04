#include <string>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "string.h"
#include "gestor.h"
#include "vehiculo.h"
#include "Cola.h"
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
       /* Cola colaAux;
        Vehiculo vAux;

    if (Cola_fabrica.es_vacia())
    {
        cout<<"Cola Vacía "<<endl;
    }
    else
    {
        Cola colaAux;
        Vehiculo vAux;
        while ((!Cola_fabrica.es_vacia()) && (Cola_fabrica.get_longitud() > 0))
        {   cout<<"Cola fabrica longitud  = "+to_string(Cola_fabrica.get_longitud()) + "\n";

            //vAux=Cola_fabrica.desencolar();
           // cout<<vAux.verVehiculo();
            for(int i=0; i<2; i++)
            {
                cout<<i+1<<endl;
                cout<<vAux->Vehiculo.devolverNBastidor()<<endl;
                cout<<vAux->Vehiculo.devolverModelo()<<endl;
                cout<<vAux->Vehiculo.devolverColor()<<endl;
                cout<<vAux->Vehiculo.devolverConcesionario()<<endl;
                vAux=vAux->siguiente;
            }

           // colaAux.encolar(vAux);
        }
    }*/
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

