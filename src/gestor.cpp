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
    Vehiculo v;
    int num;
    srand(time(NULL)); //SOLO UNA VEZ EN TODO EL CÓDIGO, INICIALIZA RAND
    std::string numero_bastidor= "";
    std::string modelo ="";
    std::string color ="";
    string listaModelos[]={"Ford Fiesta", "Toyota Yaris", "Renault Clio", "Opel Corsa", "Seat León"};
    string listaColores[]={"Azul","Rojo","Verde","Blanco","Gris","Negro","Amarillo","Naranja"};

    for (int i=0; i<nv; i++){                                      //Crea el numero de bastidor
        cout<<"Vehiculo aleatorio número ";
        for (int i=1; i<=5; i++){                               //Crea los digitos aleatorios
            num = 1 + rand() % (9); //GENERA ALEATORIOS ENTRE 0 Y 9
            cout << num<< "";
            numero_bastidor=numero_bastidor + std::to_string(num); //convierte int a string
        }
        for (int i=0; i<=2; i++){                               //Crea las  letras aleatorias
            char letras[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
            num = 1 + rand() % (27 - 1);
            cout << letras[num-1]<< "";
            numero_bastidor=numero_bastidor+letras[num-1];   //Convierte str a string
            }
        modelo=listaModelos[rand() % (5)];                          //Crea el modelo del vehiculo
        cout << endl<<"Modelo: "<<modelo<< " ";
        color=listaColores[rand() % (8)];                          //Crea el color del vehiculo
        cout << endl<<"Color: "<<color<< " ";
        cout<<"\n";
        }
}
