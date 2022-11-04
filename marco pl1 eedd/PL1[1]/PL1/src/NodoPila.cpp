<<<<<<< HEAD
#include "NodoPila.h"
#include <string>
#include "Automovil.h"

NodoPila::NodoPila()
{
    valor_int=0;
    siguiente=NULL;
    //ctor
}

NodoPila::NodoPila(int v, NodoPila *sig)
{
    valor_int=v;
    siguiente=sig;
    //ctor con un numero entero
}

NodoPila::NodoPila(char c, NodoPila *sig)
{
    valor_char=c;
    siguiente=sig;
    //ctor con un caracter
}

NodoPila::NodoPila(string s, NodoPila *sig)
{
    valor_string=s;
    siguiente=sig;
    //ctor con un string
}
/*
NodoPila::NodoPila(Automovil a, NodoPila *sig)      //error
{
    valor_automovil=a;
    siguiente=sig;
}
*/
NodoPila::~NodoPila()
{
    //dtor
}
=======
#include "NodoPila.h"
#include <string>
#include "Automovil.h"

NodoPila::NodoPila()
{
    valor_int=0;
    siguiente=NULL;
    //ctor
}

NodoPila::NodoPila(int v, NodoPila *sig)
{
    valor_int=v;
    siguiente=sig;
    //ctor con un numero entero
}

NodoPila::NodoPila(char c, NodoPila *sig)
{
    valor_char=c;
    siguiente=sig;
    //ctor con un caracter
}

NodoPila::NodoPila(string s, NodoPila *sig)
{
    valor_string=s;
    siguiente=sig;
    //ctor con un string
}
/*
NodoPila::NodoPila(Automovil a, NodoPila *sig)      //error
{
    valor_automovil=a;
    siguiente=sig;
}
*/
NodoPila::~NodoPila()
{
    //dtor
}
>>>>>>> 45763a63ee3ea7272fc3669cbcaef4d0af23efdf
