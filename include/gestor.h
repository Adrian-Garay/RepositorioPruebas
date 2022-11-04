#include<iostream>
#ifndef GESTOR_H
#define GESTOR_H
#include "Pila.h"
#include "Cola.h"
using namespace std;


class Gestor
{
    public:
        Gestor();
        ~Gestor();
        //variables
        std::string NBastidor;
        std::string Modelo;
        std::string Color;
        int Concesionario;


        //funciones
        void crea_vehiculos(int nv);
        void muestra_almacen_fabrica();
        void limpia_almacen();

        //Pilas y colas
        Cola Cola_fabrica;               //Cola de la fabrica que contendra los automoviles

    protected:

    private:
};

#endif // GESTOR_H
