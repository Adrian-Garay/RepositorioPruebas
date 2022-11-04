#include <iostream>
#ifndef GESTOR_H
#define GESTOR_H
#include "Pila.h"
#include "Cola.h"
using namespace std;

class Gestor
{
    public:
        Gestor();
        virtual ~Gestor();
        //variables
        int n;
        int t_cliente;
        bool t;
        string id;
        int m;
        int minuto=0;
        int curr_tie;
        int time;
        string concierto;
        string id_concierto;
        int tiene_reserva;

        //funciones
        void c_reserva_aleatorio(int n);    //void por que dentro de la funcion llamo a las otras
        void cReg_aleatorio(int n);         //por lo que no devuelve nada
        void cNoReg_aleatorio(int n);
        void cManual(int tiene_reserva, int t_cliente);
        int minuto_entrada();
        bool comprobacionDNI(string DNI);
        string idConcierto();
        void cargarPila(Cliente c);
        void mostrarCliConReserva();
        void mostrarCliSinReservaReg();
        void mostrarCliSinReservaNoReg();
        void borrarCliConReserva();
        void borrarCliSinReservaReg();
        void borrarCliSinReservaNoReg();
        void borrarCLiSinReserva();


        //APARTADO A
        Pila pCliConReserva;         //creamos pila de clientes con reserva de entrada
        Cola CliReg;                 // creamos las cola de clientes registrados
        Cola CliNoReg;              // creamos las cola de clientes no registrados

    protected:

    private:
        void ordenarPila(Pila p);
};

#endif // GESTOR_H
