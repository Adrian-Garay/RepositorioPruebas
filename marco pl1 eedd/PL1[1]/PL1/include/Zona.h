#ifndef ZONA_H
#define ZONA_H
#include "Pila.h"
#include "Cola.h"
#include "Automovil.h"


class Zona
{
private:
    Pila pila_camion1;
    Pila pila_camion2;
    Cola cola_zona;
    int pila_actual;
public:
    Zona();
    ~Zona();
    void meter_en_camion_correspondiente(Automovil a);
};

#endif // ZONA_H
