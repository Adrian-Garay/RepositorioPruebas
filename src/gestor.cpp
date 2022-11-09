#include <string>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "string.h"
#include "gestor.h"
#include "vehiculo.h"
#include "Cola.h"
#include <time.h> // es necesario incluirla
#include "ZonaReparto.h"

using namespace std;

Gestor::Gestor()
{
    //ctor
}

Gestor::~Gestor()
{
    //dtor
}

void Gestor::crea_vehiculos(int nv)         //Apartado 1 y 2
{
    //Vehiculo vehiculos_cola;

    for (int i=0; i<nv; i++)
    {
        Cola_fabrica.encolar(Vehiculo());
    }
    Cola_fabrica.VerCima();
    cout<<"Se han creado: "<<nv<<" vehiculos \n";
}
void Gestor::muestra_almacen_fabrica()      //Apartado 3
{
    Cola_fabrica.mostrarCola();
    /* Cola colaAux;
     Vehiculo vAux;

    if (Cola_fabrica.es_vacia())
    {
     cout<<"Cola Vac�a "<<endl;
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

void Gestor::limpia_almacen()               //Apartado4
{
    if (Cola_fabrica.es_vacia())
    {
        cout<<"Cola de fabrica vac�a. \n";
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
        cout<<"Cola Vac�a "<<endl;
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
void Gestor::cambioAlmacenRand(int ns, int np)          //Apartado 5

{
    int almacenRandom;
    Pila Camion1N;
    Pila Camion2N;
    Pila Camion1E;
    Pila Camion2E;
    Pila Camion1S;
    Pila Camion2S;
    Pila Camion1O;
    Pila Camion2O;

    for (int i=1; i<=5; i++)                                //Crea los digitos aleatorios para el almacen aleatorio
    {
        almacenRandom = 1 + rand() % (4); //GENERA ALEATORIOS ENTRE 0 Y 4
        //cout << num<< "";

    }

    if (Cola_fabrica.es_vacia())
    {
        cout<<"Cola de fabrica esta vac�a. \n";
    }
    else
    {

        {
            for(int i=0; i<ns; i++)
            {
                vehi = Cola_fabrica.inicio();
                Cola_fabrica.desencolar();
                if (almacenRandom==1)           //Zona Norte
                {/**/
                    Camion1N=ZonaN.Camion1;
                    //Camion1N.fondo();
                    /*if (Camion1N.contar()==np)
                        {
                            cout <<"Camion lleno, se pasa al siguiente";
                        }*/
                    Camion1N.apilar(vehi);
                    cout << Camion1N.contar()<<endl;
                    Cola_zonaN.encolar(vehi);
                    cout<<"Llevados a almacen n�mero: "<< almacenRandom <<"\n"<<"\n";
                }
                else if (almacenRandom==2)      //Zona Sur
                {
                    Cola_zonaS.encolar(vehi);
                    cout<<"Llevados a almacen n�mero: "<< almacenRandom <<"\n"<<"\n";
                }
                else if (almacenRandom==3)      //Zona Este
                {
                    Cola_zonaE.encolar(vehi);
                    cout<<"Llevados a almacen n�mero: "<< almacenRandom <<"\n"<<"\n";
                }
                else if (almacenRandom==4)      //Zona Oeste
                {
                    Cola_zonaO.encolar(vehi);
                    cout<<"Llevados a almacen n�mero: "<< almacenRandom <<"\n"<<"\n";
                }
                /*else
                {
                    cout<<error<<"\n";
                }*/
            }
            cout<<"Se han eliminado "<< ns << " vehiculos \n";

        }

    }
}
void Gestor::cambioAlmacen(int ns, int nAlmacen, int np)        //Apartado 6
{
    Pila Camion1N;
    Pila Camion2N;
    Pila Camion1E;
    Pila Camion2E;
    Pila Camion1S;
    Pila Camion2S;
    Pila Camion1O;
    Pila Camion2O;

    if (Cola_fabrica.es_vacia())
    {
        cout<<"Cola de fabrica esta vac�a. \n";
    }
    else
    {

        {
            for(int i=0; i<ns; i++)
            {
                vehi = Cola_fabrica.inicio();
                Cola_fabrica.desencolar();
                if (nAlmacen==1)
                {/**/
                    Camion1N=ZonaN.Camion1;
                    //Camion1N.fondo();
                    /*if (Camion1N.contar()==np)
                        {
                            cout <<"Camion lleno, se pasa al siguiente";
                        }*/
                    Camion1N.apilar(vehi);
                    cout << Camion1N.contar()<<endl;
                    cout<< "Se mete un Vehiculo"<<endl;
                    Cola_zonaN.encolar(vehi);
                    cout<<"Llevado a almacen n�mero: "<< nAlmacen <<"\n"<<"\n";
                }
                else if (nAlmacen==2)
                {
                    Cola_zonaS.encolar(vehi);
                    cout<<"Llevados a almacen n�mero: "<< nAlmacen <<"\n"<<"\n";
                }
                else if (nAlmacen==3)
                {
                    Cola_zonaE.encolar(vehi);
                    cout<<"Llevados a almacen n�mero: "<< nAlmacen <<"\n"<<"\n";
                }
                else if (nAlmacen==4)
                {
                    Cola_zonaO.encolar(vehi);
                    cout<<"Llevados a almacen n�mero: "<< nAlmacen <<"\n"<<"\n";
                }
                /*else
                {
                    cout<<error<<"\n";
                }*/
            }
            cout<<"Se han movido "<< ns << " vehiculos \n";

        }

    }
}
