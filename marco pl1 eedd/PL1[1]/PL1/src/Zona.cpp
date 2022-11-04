<<<<<<< HEAD
#include "Zona.h"
#include "Automovil.h"

Zona::Zona()
{
    pila_actual=1;
    pila_camion1=Pila();
    pila_camion2=Pila();
    //ctor
}

Zona::~Zona()
{
    //dtor
}

void Zona::meter_en_camion_correspondiente(Automovil a)
{
    if(pila_actual==1)
    {
        //pila_camion1.apilar(a);               //aqui empieza el error
    }
    else
    {
        //pila_camion2.apilar(a);               //aqui empieza el error
    }
}
=======
#include "Zona.h"
#include "Automovil.h"

Zona::Zona()
{
    pila_actual=1;
    pila_camion1=Pila();
    pila_camion2=Pila();
    //ctor
}

Zona::~Zona()
{
    //dtor
}

void Zona::meter_en_camion_correspondiente(Automovil a)
{
    if(pila_actual==1)
    {
        //pila_camion1.apilar(a);               //aqui empieza el error
    }
    else
    {
        //pila_camion2.apilar(a);               //aqui empieza el error
    }
}
>>>>>>> 45763a63ee3ea7272fc3669cbcaef4d0af23efdf
