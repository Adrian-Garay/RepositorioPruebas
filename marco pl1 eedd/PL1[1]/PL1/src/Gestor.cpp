<<<<<<< HEAD
#include "Gestor.h"
#include <Cola.h>
#include "Automovil.h"
#include <cstdlib>
#include <ctime>

void delay(int secs) {
  for(int i = (time(NULL) + secs); time(NULL) != i; time(NULL));
}


Gestor::Gestor()
{
    N=Zona();
    S=Zona();
    E=Zona();
    O=Zona();
    cola_fabrica=Cola();
    //ctor
}

Gestor::~Gestor()
{
    //dtor
}

void Gestor::generar_automoviles(int NV)
{
    for(int e=0; e<NV; e++)
    {
        cout<<"Creamos el coche "<< e << endl;
        cola_fabrica.encolar_automovil(Automovil());
        delay(1);
    }
    //cola_fabrica.mostrar_cola_automovil();
}

void Gestor::borrar_cola_fabrica()
{
    cola_fabrica.~Cola();
}

void Gestor::mostrar_cola_fabrica()
{
    cola_fabrica.mostrar_cola_automovil();
}

void Gestor::soltar_automoviles(int NS)
{
    srand (time (NULL)); //se utiliza para generar un numero aleatorio
    int numero_aleatorio;

    for(int e=0; e<NS; e++)
    {
        if(!cola_fabrica.esVacia())
        {
            Pila zonas;
            zonas.apilar('N'); zonas.apilar('S'); zonas.apilar('E'); zonas.apilar('O');
            Automovil a=cola_fabrica.desencolar_automovil();
            numero_aleatorio=(rand()%4);
            char c=zonas.mostrar_valor_char(numero_aleatorio);
            switch(c)                   //NO ESTA CREADA LA FUNCION PARA METER A CADA AUTOMOVIL A SU SITIO EN LAS ZONAS
            {
            case 'N':
                N.meter_en_camion_correspondiente(a);
            case 'S':
                S.meter_en_camion_correspondiente(a);
            case 'E':
                E.meter_en_camion_correspondiente(a);
            case 'O':
                O.meter_en_camion_correspondiente(a);
            };

        }
    }
}
=======
#include "Gestor.h"
#include <Cola.h>
#include "Automovil.h"
#include <cstdlib>
#include <ctime>

void delay(int secs) {
  for(int i = (time(NULL) + secs); time(NULL) != i; time(NULL));
}


Gestor::Gestor()
{
    N=Zona();
    S=Zona();
    E=Zona();
    O=Zona();
    cola_fabrica=Cola();
    //ctor
}

Gestor::~Gestor()
{
    //dtor
}

void Gestor::generar_automoviles(int NV)
{
    for(int e=0; e<NV; e++)
    {
        cout<<"Creamos el coche "<< e << endl;
        cola_fabrica.encolar_automovil(Automovil());
        delay(1);
    }
    //cola_fabrica.mostrar_cola_automovil();
}

void Gestor::borrar_cola_fabrica()
{
    cola_fabrica.~Cola();
}

void Gestor::mostrar_cola_fabrica()
{
    cola_fabrica.mostrar_cola_automovil();
}

void Gestor::soltar_automoviles(int NS)
{
    srand (time (NULL)); //se utiliza para generar un numero aleatorio
    int numero_aleatorio;

    for(int e=0; e<NS; e++)
    {
        if(!cola_fabrica.esVacia())
        {
            Pila zonas;
            zonas.apilar('N'); zonas.apilar('S'); zonas.apilar('E'); zonas.apilar('O');
            Automovil a=cola_fabrica.desencolar_automovil();
            numero_aleatorio=(rand()%4);
            char c=zonas.mostrar_valor_char(numero_aleatorio);
            switch(c)                   //NO ESTA CREADA LA FUNCION PARA METER A CADA AUTOMOVIL A SU SITIO EN LAS ZONAS
            {
            case 'N':
                N.meter_en_camion_correspondiente(a);
            case 'S':
                S.meter_en_camion_correspondiente(a);
            case 'E':
                E.meter_en_camion_correspondiente(a);
            case 'O':
                O.meter_en_camion_correspondiente(a);
            };

        }
    }
}
>>>>>>> 45763a63ee3ea7272fc3669cbcaef4d0af23efdf
