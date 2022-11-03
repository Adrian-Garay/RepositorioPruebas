#ifndef NODOCOLA_H
#define NODOCOLA_H
#include <iostream>
#include <Automovil.h>
using namespace std;

class NodoCola
{
    public:
        NodoCola();
        NodoCola(char e, NodoCola *sig = NULL);
        NodoCola(Automovil a, NodoCola *sig = NULL);
        ~NodoCola();
    private:
        NodoCola *siguiente;
        char elemento_char;
        Automovil elemento_automovil;
        friend class Cola;
};

#endif // NODOCOLA_H
