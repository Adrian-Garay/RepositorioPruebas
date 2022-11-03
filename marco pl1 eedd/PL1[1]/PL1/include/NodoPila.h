#ifndef NODOPILA_H
#define NODOPILA_H
#include <iostream>
#include <string>
#include "Automovil.h"
using namespace std;

class NodoPila
{
    public:
        NodoPila();
        NodoPila(int v, NodoPila *sig = NULL);
        NodoPila(char c, NodoPila *sig =NULL);
        NodoPila(string s, NodoPila *sig=NULL);
        //NodoPila(Automovil a, NodoPila *sig=NULL);        //error
        ~NodoPila();

    private:
        int valor_int;
        char valor_char;
        string valor_string;
        //Automovil valor_automovil;                        //error
        NodoPila *siguiente;
        friend class Pila;
};
typedef NodoPila *pnodo;

#endif // NODOPILA_H
