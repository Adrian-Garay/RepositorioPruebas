#ifndef COLA_H
#define COLA_H
#include "NodoCola.h"
#include "vehiculo.h"

class Cola
{
private:
    NodoCola* primero;
    NodoCola* ultimo;
    int longitud;
public:
    Cola();
    ~Cola();
    void encolar(Vehiculo v);
    Vehiculo inicio();
    Vehiculo fin();
    int get_longitud();
    Vehiculo desencolar();
    bool es_vacia();
    //void mostrarCola (); //No es correcto, se implementa para ver que est� creada correctamente
};

#endif // COLA_H
