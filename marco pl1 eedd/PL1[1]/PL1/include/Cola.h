#ifndef COLA_H
#define COLA_H
#include "NodoCola.h"
#include "Automovil.h"


class Cola
{
public:
    Cola();
    ~Cola();
    void encolar_char(char);
    void encolar_automovil(Automovil);
    char inicio_char();
    Automovil inicio_automovil();
    char fin_char();
    Automovil fin_automovil();
    int longitud();
    char desencolar_char();
    Automovil desencolar_automovil();
    bool esVacia();
    void mostrarCola_char();
    void mostrar_cola_automovil();

private:
    int lon;
    NodoCola* primero;
    NodoCola* ultimo;

};


#endif // COLA_H
