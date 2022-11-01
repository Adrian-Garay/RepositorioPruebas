#include "vehiculo.h"
#include <stdlib.h>
#include <time.h> // es necesario incluirla
#include<iostream>
#include<string>
#include "string.h"
using namespace std;

//Constructor para inicualizar los atributos
Vehiculo::Vehiculo()
{
    nBastidor= "";
    modelo= "";
    color = "";
    concesionario = 0;
}

Vehiculo::Vehiculo(std::string nBast, std::string mod, std::string col, int conce)
{
    nBastidor= nBast;
    modelo= mod;
    color = col ;
    concesionario = conce;
    //ctor
}

void Vehiculo::cargarVehiculo(std::string nBast,std::string mod, std::string col, int conce)
{
    nBastidor = nBast;
    modelo = mod;
    color = col;
    concesionario = conce;
}

std::string Vehiculo::verVehiculo()
{
    std::string numero = Vehiculo.nBastidor();
    cout<<"El vehiculo tiene numero de bastidor: "+ nBastidor+"\n";
    return("El vehiculo tiene numero de bastidor: "+ std::string (nBastidor) + ", modelo: "+ std::string (modelo) + ", color: "+ std::string (color) + ", concesionario: " + std::to_string(concesionario));
}

/*void vehiculo :: crearNBastidor ()
{
    int num, c;
    srand(time(NULL));
    for(c = 1; c <= 5; c++)



        num = 1 + rand() % (999); //GENERA ALEATORIOS ENTRE 0 Y 9, SUMO 1 (1 A 10)
        cout << num<< " ";
        cout <<"Coche:" << nBastidor<<endl;
}*/
