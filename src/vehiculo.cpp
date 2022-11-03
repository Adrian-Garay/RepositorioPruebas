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
    int num;
    srand(time(NULL)); //SOLO UNA VEZ EN TODO EL CÓDIGO, INICIALIZA RAND

    string listaModelos[]= {"Ford Fiesta", "Toyota Yaris", "Renault Clio", "Opel Corsa", "Seat León"};
    string listaColores[]= {"Azul","Rojo","Verde","Blanco","Gris","Negro","Amarillo","Naranja"};

    for (int i=1; i<=5; i++)                                //Crea los digitos aleatorios
    {
        num = 1 + rand() % (9); //GENERA ALEATORIOS ENTRE 0 Y 9
        cout << num<< "";
        nBastidor=nBastidor + std::to_string(num); //convierte int a string
    }
    for (int i=0; i<=2; i++)                                //Crea las  letras aleatorias
    {
        char letras[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        num = 1 + rand() % (27 - 1);
        cout << letras[num-1]<< "";
        nBastidor=nBastidor+letras[num-1];   //Convierte str a string
    }
    modelo=listaModelos[rand() % (5)];
    cout << endl<<"Modelo: "<<modelo<< " ";
    color=listaColores[rand() % (8)];
    cout << endl<<"Color: "<<color<< " ";
    concesionario=0;
    cout << endl<<"Concesionario: "<<concesionario<< "\n";
}

Vehiculo::~Vehiculo()
{
    //dtor
}



/*Vehiculo::Vehiculo(std::string nBast, std::string mod, std::string col, int conce)
{
    nBastidor= nBast;
    modelo= mod;
    color = col ;
    concesionario = conce;
    //ctor
}*/

void Vehiculo::cargarVehiculo(std::string nBast,std::string mod, std::string col, int conce)
{
    std::string nBastidor = nBast;
    std::string modelo = mod;
    std::string color = col;
    int concesionario = conce;
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
