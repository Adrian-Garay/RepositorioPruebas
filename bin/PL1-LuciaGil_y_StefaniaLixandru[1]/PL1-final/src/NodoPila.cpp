#include "NodoPila.h"
#include "Cliente.h"

NodoPila::NodoPila()
{
    cliente = Cliente();
    siguiente = NULL;
    //ctor
}

NodoPila::NodoPila(Cliente c, NodoPila *sig)
{
    cliente = c;
    siguiente = sig;
}

NodoPila::~NodoPila()
{
    //dtor
}
