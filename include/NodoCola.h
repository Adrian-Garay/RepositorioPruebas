#ifndef NODOCOLA_H_INCLUDED
#define NODOCOLA_H_INCLUDED
#include <iostream>

class NodoCola
{
    friend class Cola;

private:
    NodoCola*siguiente;
    char elemento;
public:
    NodoCola();
    NodoCola(char e, NodoCola*sig = NULL);
    ~NodoCola();
};

#endif // NODOCOLA_H_INCLUDED
