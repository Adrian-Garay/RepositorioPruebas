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

Vehiculo::Vehiculo(std::string nBastidor, std::string modelo, std::string color, int concesionario)
{
    nBastidor= nBastidor;
    modelo= modelo;
    color = color ;
    concesionario = concesionario;
    //ctor
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
