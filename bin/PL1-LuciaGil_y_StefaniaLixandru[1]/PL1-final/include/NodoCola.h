#ifndef NODOCOLA_H
#define NODOCOLA_H
#include "Cliente.h"
#include <cstddef> //para poder utilizar NULL, si no sale "error: 'NULL' was not declared in this scope"

class NodoCola
{
    friend class Cola;
    private:
        NodoCola *siguiente;
        Cliente c;
    public:
        NodoCola();
        NodoCola(Cliente c, NodoCola*sig = NULL);
        ~NodoCola();

};

#endif // NODOCOLA_H
