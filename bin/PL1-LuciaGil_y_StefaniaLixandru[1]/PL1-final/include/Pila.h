#ifndef PILA_H
#define PILA_H
#include "NodoPila.h"
#include "Cliente.h"


class Pila
{
    private:
        pnodo cima;
    public:
        Pila();
        virtual~Pila();
        bool esVacia();
        void apilar(Cliente c);
        Cliente desapilar();

    protected:

};

#endif // PILA_H
