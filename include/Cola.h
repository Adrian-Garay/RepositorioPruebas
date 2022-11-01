#ifndef COLA_H
#define COLA_H
#include "NodoCola.h"

class Cola
{
private:
    NodoCola* primero;
        NodoCola* ultimo;
        int longitud;
public:
    Cola();
    ~Cola();
    void encolar(char);
    char inicio();
    char fin();
    int get_longitud();
    char desencolar();
    bool es_vacia();
    void mostrarCola (); //No es correcto, se implementa para ver que está creada correctamente
};

#endif // COLA_H
