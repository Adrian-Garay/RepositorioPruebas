#include "vehiculo.h"
#include <stdlib.h>
#include <time.h> // es necesario incluirla
#include<iostream>
#include "string.h"
using namespace std;

//Constructor para inicualizar los atributos

vehiculo::vehiculo(char nBastidor, char modelo, char color, int concesionario)
{
    nBastidor= nBastidor;
    modelo= Modelo;
    color = Color ;
    concesionario = Concesionario;
    //ctor
}
void vehiculo :: crearNBastidor ()
{
    int main()
    {
        int num, c;
        srand(time(NULL));
        for(c = 1; c <= 5; c++)
        {
            num = 1 + rand() % (999); //GENERA ALEATORIOS ENTRE 0 Y 9, SUMO 1 (1 A 10)
            cout << num<< " ";
        }



        cout <<"Coche:" << nBastidor<<endl;
    }
