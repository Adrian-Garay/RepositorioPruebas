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
/*
std::string Vehiculo::DevColor(){
    switch(Color)
    {
    case "Azul" :
        return Azul break;
    case "Rojo" :
        return Rojo break;
    case "Verde" :
        return Verde break;
    case "Blanco" :
        return Blanco break;
    case "Gris" :
        return Negro break;
    case "Amarillo" :
        return Amarillo break;
    case "Naranja" :
        return Naranja break;
    }
}

*/
std::string Vehiculo::devolverNBastidor(){return nBastidor;}
std::string Vehiculo::devolverColor(){return color;}
std::string Vehiculo::devolverModelo(){return modelo;}
int Vehiculo::devolverConcesionario(){return concesionario;}
std::string Vehiculo::verVehiculo()
{
    /* cout<<"El vehiculo tiene numero de bastidor: "+ nBastidor+"\n";
     cout<<"El vehiculo tiene modelo: "+ modelo+"\n";
     cout<<"El vehiculo tiene color: "+ color+"\n";
     cout<<"El vehiculo tiene concesionario: "+ std::to_string(concesionario)+"\n";
     */
return( "El vehiculo tiene número de bastidor: " + devolverNBastidor() + ", modelo: " + devolverModelo() + ", color: "+ devolverColor() + ", concesionario: " +  std::to_string(devolverConcesionario())+" " + "\n" );
}
