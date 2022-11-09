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
        void cambioAlmacenRand(int ns, int np);
        void cambioAlmacen(int ns,int nAlmacen, int np);

        //Pilas y colas
        Cola Cola_fabrica; //Cola de la fabrica que contendra los automoviles
        Cola Cola_zonaN;
        Cola Cola_zonaS;
        Cola Cola_zonaE;
        Cola Cola_zonaO;
        ZonaReparto ZonaN;
        ZonaReparto ZonaE;
        ZonaReparto ZonaS;
        ZonaReparto ZonaO;
        Pila Camion1N=ZonaN.Camion1;
        Pila Camion2N=ZonaN.Camion2;
        Pila Camion1E=ZonaE.Camion1;
        Pila Camion2E=ZonaE.Camion2;
        Pila Camion1S=ZonaS.Camion1;
        Pila Camion2S=ZonaS.Camion2;
        Pila Camion1O=ZonaO.Camion1;
        Pila Camion2O=ZonaO.Camion2;





    protected:

    private:
};

#endif // GESTOR_H
