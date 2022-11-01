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
    cout<<"El vehiculo tiene numero de bastidor: "+ nBastidor+"\n";
    cout<<"El vehiculo tiene modelo: "+ modelo+"\n";
    cout<<"El vehiculo tiene color: "+ color+"\n";
    cout<<"El vehiculo tiene concesionario: "+ std::to_string(concesionario)+"\n";
    return("El vehiculo tiene numero de bastidor: "+ nBastidor + ", modelo: "+ modelo + ", color: "+ color + ", concesionario: " + std::to_string(concesionario)+" ");
}
