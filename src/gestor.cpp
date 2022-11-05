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

    for (int i=0; i<nv; i++)
    {
        Cola_fabrica.encolar(Vehiculo());
    }
    Cola_fabrica.VerCima();
    cout<<"Se han creado: "<<nv<<" vehiculos \n";
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
/*
void Cola::MostrarZona()
{
    NodoCola *aux = primero;
    if (es_vacia())
    {
        cout<<"Cola Vacía "<<endl;
    }
    else

    {
        for(int i=0; i<longitud; i++)
        {
            cout <<aux->v.verVehiculo()<<endl;
            aux=aux->siguiente;
        }

    }
}
*/
void Gestor::cambioAlmacenRand(int ns)

{
    int almacenRandom;
    for (int i=1; i<=5; i++)                                //Crea los digitos aleatorios para el almacen aleatorio
    {
        almacenRandom = 1 + rand() % (4); //GENERA ALEATORIOS ENTRE 0 Y 4
        //cout << num<< "";

    }

    if (Cola_fabrica.es_vacia())
    {
        cout<<"Cola de fabrica esta vacía. \n";
    }
    else
    {

        {
            for(int i=0; i<ns; i++)
            {
                Cola_fabrica.desencolar();
                if (almacenRandom ==1())
                {
                    Cola_zonaN.encolar();
                    cout<<"Llevados a almacen número: "<< almacenRandom <<"\n"<<"\n";
                }
                else if (almacenRandom == 2())
                {
                    Cola_zonasS.encolar();
                    cout<<"Llevados a almacen número: "<< almacenRandom <<"\n"<<"\n";
                }
                else if (almacenRandom == 3())
                {
                    Cola_zonaE.encolar();
                    cout<<"Llevados a almacen número: "<< almacenRandom <<"\n"<<"\n";
                }
                else if (almacenRandom == 4())
                {
                    Cola_zonaO.encolar();
                    cout<<"Llevados a almacen número: "<< almacenRandom <<"\n"<<"\n";
                }
                else
                {
                    cout<<error<<"\n";
                }
            }
            cout<<"Se han eliminado "<< ns << " vehiculos \n";

        }

    }
}
void Gestor::cambioAlmacen(int ns, int nAlmacen)
{
    if (Cola_fabrica.es_vacia())
    {
        cout<<"Cola de fabrica esta vacía. \n";
    }
    else
    {

        {
            for(int i=0; i<ns; i++)
            {
                Cola_fabrica.desencolar();
                if (nAlmacen ==1())
                {
                    Cola_zonaN.encolar();
                    cout<<"Llevados a almacen número: "<< nAlmacen <<"\n"<<"\n";
                }
                else if (nAlmacen == 2())
                {
                    Cola_zonasS.encolar();
                    cout<<"Llevados a almacen número: "<< nAlmacen <<"\n"<<"\n";
                }
                else if (nAlmacen == 3())
                {
                    Cola_zonaE.encolar();
                    cout<<"Llevados a almacen número: "<< nAlmacen <<"\n"<<"\n";
                }
                else if (nAlmacen == 4())
                {
                    Cola_zonaO.encolar();
                    cout<<"Llevados a almacen número: "<< nAlmacen <<"\n"<<"\n";
                }
                else
                {
                    cout<<error<<"\n";
                }
            }
            cout<<"Se han eliminado "<< ns << " vehiculos \n";
        }

    }
}
