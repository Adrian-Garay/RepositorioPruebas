#include<iostream>
#ifndef GESTOR_H
#define GESTOR_H
#include "Pila.h"
#include "Cola.h"
#include "ZonaReparto.h"
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
        Vehiculo vehi;


        //funciones
        void crea_vehiculos(int nv);
        void muestra_almacen_fabrica();
        void limpia_almacen();
        void cambioAlmacenRand(int ns);
        void cambioAlmacen(int ns,int nAlmacen);

        //Pilas y colas
        Cola Cola_fabrica; //Cola de la fabrica que contendra los automoviles
        Cola Cola_zonaN;
        Cola Cola_zonaS;
        Cola Cola_zonaE;
        Cola Cola_zonaO;




    protected:

    private:
};

#endif // GESTOR_H
