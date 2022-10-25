#include "vehiculo.h"
//Constructor para inicualizar los atributos

vehiculo::vehiculo(char nBastidor , char modelo, char color, int concesionario)
{
    nBastidor= nBastidor;
    modelo= Modelo;
    color = Color ;
    concesionario = Concesionario;
    //ctor
}
void vehiculo :: crear (){
    nBastidor =
            char letras[]="ABCDEFGHIJ";
         cout<<endl<<"10 carscteres aleatorios: "<<endl;
         for(c = 1; c <= 10; c++)
         {
         num = 1 + rand() % (11 - 1);
         cout << letras[num-1]<< " ";
         }
         cout<<endl<<"10 carscteres aleatorios: "<<endl;
         char car


    cout <<"Coche:" << nBastidor<<","<<modelo <<color<<concesionario<<endl;
}
