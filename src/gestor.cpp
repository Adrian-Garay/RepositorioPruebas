#include <string>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "string.h"
#include "gestor.h"
#include "vehiculo.h"
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
    Vehiculo vehiculos_cola;
    int num;
    srand(time(NULL)); //SOLO UNA VEZ EN TODO EL CÓDIGO, INICIALIZA RAND
    std::string numero_bastidor= "";
    std::string modelo ="";
    std::string color ="";
    int concesionario = 0;
    string listaModelos[]= {"Ford Fiesta", "Toyota Yaris", "Renault Clio", "Opel Corsa", "Seat León"};
    string listaColores[]= {"Azul","Rojo","Verde","Blanco","Gris","Negro","Amarillo","Naranja"};

    for (int i=0; i<nv; i++)                                       //Crea el numero de bastidor
    {
        cout<<"Vehiculo aleatorio número ";
        for (int i=1; i<=5; i++)                                //Crea los digitos aleatorios
        {
            num = 1 + rand() % (9); //GENERA ALEATORIOS ENTRE 0 Y 9
            cout << num<< "";
            numero_bastidor=numero_bastidor + std::to_string(num); //convierte int a string
        }
        for (int i=0; i<=2; i++)                                //Crea las  letras aleatorias
        {
            char letras[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
            num = 1 + rand() % (27 - 1);
            cout << letras[num-1]<< "";
            numero_bastidor=numero_bastidor+letras[num-1];   //Convierte str a string
        }
        modelo=listaModelos[rand() % (5)];                          //Crea el modelo del vehiculo
        cout << endl<<"Modelo: "<<modelo<< " ";
        color=listaColores[rand() % (8)];                          //Crea el color del vehicul
        cout << endl<<"Color: "<<color<< " ";
        vehiculos_cola.cargarVehiculo(numero_bastidor,modelo,color,concesionario);
        Cola_fabrica.encolar(vehiculos_cola);
        cout<<"\n";

    }
}
void Gestor::muestra_almacen_fabrica()

{
    Cola_fabrica.mostrarCola();}
    /*Cola colaAux;
    Vehiculo vAux;

    while((!Cola_fabrica.es_vacia()) && (Cola_fabrica.get_longitud()) > 0)
    {
        vAux = Cola_fabrica.desencolar();
        cout<<vAux.verVehiculo();
        colaAux.encolar(vAux);
        cout<<"\n";
    }
    while ((!colaAux.es_vacia()) && (colaAux.get_longitud() > 0 ))
    {
        vAux=colaAux.desencolar();
        Cola_fabrica.encolar(vAux);
    }
}*/
/*
(!CliNoReg.es_vacia()) && (CliNoReg.get_longitud() > 0

Cola colaAux;
Vehiculo vAux;
while(Cola_fabrica.es_vacia()!= NULL)
{vAux = Cola_fabrica.desencolar();
   cout<<vAux.verVehiculo());
   colaAux.encolar(vAux);
}
*/
/*Cola colaAux;
Vehiculo vAux;

while((!Cola_fabrica.es_vacia()) && (Cola_fabrica.get_longitud()) > 0)
{vAux = Cola_fabrica.desencolar();
    cout<<vAux.verVehiculo();
    colaAux.encolar(vAux);
    cout<<"\n";
}
while ((!colaAux.es_vacia()) && (colaAux.get_longitud() > 0 )){
    vAux=colaAux.desencolar();
    Cola_fabrica.encolar(vAux);
}
}

*/
/*
Cola colaAux;
Vehiculo vAux;
cout<<"Cola_fabrica longitud  = "+to_string(Cola_fabrica.get_longitud()) + "\n";
while ((!Cola_fabrica.es_vacia()) && (Cola_fabrica.get_longitud() > 0))
{
    cout<<"Cola_fabrica longitud  = "+to_string(Cola_fabrica.get_longitud()) + "\n";
    vAux=Cola_fabrica.desencolar();
    cout<<"ES:" + vAux.verVehiculo();
    colaAux.encolar(vAux);
}
while ((!colaAux.es_vacia()) && (colaAux.get_longitud() > 0 ))
{
    cout<<"longitud  = "+to_string(colaAux.get_longitud()) + "\n";
    vAux=colaAux.desencolar();
    Cola_fabrica.encolar(vAux);
}
}
*/
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

