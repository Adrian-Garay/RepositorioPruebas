#ifndef COLA_H
#define COLA_H
#include "NodoCola.h"
#include <string>
#include "Cliente.h"

class Cola
{
    public:
        NodoCola * primero;
        NodoCola * ultimo;
        int longitud;
    public:
        Cola();
        ~Cola();
        void encolar(Cliente c);
        Cliente inicio();
        Cliente fin();
        int get_longitud();
        Cliente desencolar();
        bool es_vacia();
        void mostrarCola(); //No es correcto, se implementa para ver que está creada correctamente
};

#endif // COLAS_H
