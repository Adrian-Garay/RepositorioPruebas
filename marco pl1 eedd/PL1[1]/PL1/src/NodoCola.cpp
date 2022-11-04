<<<<<<< HEAD
#include "NodoCola.h"

NodoCola::NodoCola()
{
    elemento_char='0';
    siguiente=NULL;
    //ctor
}

NodoCola::NodoCola(char e, NodoCola*sig)
{
    elemento_char=e;
    siguiente=sig;
    //constructor con un caracter
}

NodoCola::NodoCola(Automovil e, NodoCola*sig)
{
    elemento_automovil=e;
    siguiente=sig;
    //constructor con un automovil
}

NodoCola::~NodoCola()
{
    //dtor
}
=======
#include "NodoCola.h"

NodoCola::NodoCola()
{
    elemento_char='0';
    siguiente=NULL;
    //ctor
}

NodoCola::NodoCola(char e, NodoCola*sig)
{
    elemento_char=e;
    siguiente=sig;
    //constructor con un caracter
}

NodoCola::NodoCola(Automovil e, NodoCola*sig)
{
    elemento_automovil=e;
    siguiente=sig;
    //constructor con un automovil
}

NodoCola::~NodoCola()
{
    //dtor
}
>>>>>>> 45763a63ee3ea7272fc3669cbcaef4d0af23efdf
