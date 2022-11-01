#ifndef GESTOR_H
#define GESTOR_H
#include "Pila.h"
#include "Cola.h"
using namespace std;


class gestor
{
    public:
        gestor();
        ~gestor();
        //variables
        std::string NBastidor;
        std::string Modelo;
        std::string Color;
        int Concesionario;


        //funciones
        void crea_vehiculo(int n);

    protected:

    private:
};

#endif // GESTOR_H
