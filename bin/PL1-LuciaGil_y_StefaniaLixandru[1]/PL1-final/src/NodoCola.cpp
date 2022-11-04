#include "NodoCola.h"
#include <string>
#include "Cliente.h"

NodoCola::NodoCola()
{
    c = Cliente();
    siguiente=NULL;
    //constructor por defecto
}

NodoCola::NodoCola(Cliente c, NodoCola *sig)
{
    c = Cliente();
    siguiente=sig;
    //constructor 2
}

NodoCola::~NodoCola()
{
    //dtor
}
