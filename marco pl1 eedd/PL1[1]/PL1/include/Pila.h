#ifndef PILA_H
#define PILA_H
#include "NodoPila.h"
#include <string>
#include "Automovil.h"


class Pila
{
    public:
        Pila();
        ~Pila();
        bool esVacia();
        void apilar(int v);
        void apilar(char c);
        void apilar(string s);
        //void apilar(Automovil a);     //error
        void desapilar();
        int mostrar_int();
        char mostrar_char();
        string mostrar_string();
        int mostrar_valor_int(int v);
        char mostrar_valor_char(int v);
        string mostrar_valor_string(int v);

    private:
        pnodo cima;
};

#endif // PILA_H
