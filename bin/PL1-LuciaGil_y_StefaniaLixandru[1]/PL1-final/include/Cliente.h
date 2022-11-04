#ifndef CLIENTE_H
#define CLIENTE_H
#include <string>
#include "Entrada.h"

class Cliente
{
    public:
        Cliente();                                   //constructor por defecto
        Cliente(std::string id, bool t, int m);      //constructor por parametria
        cargarMinuto(int m);
        cargarMiEntrada(Entrada e);
        bool devolverTipo();
        std::string devolverId();
        int devolverMinuto();
        Entrada devolverMiEntrada();
        virtual ~Cliente();
        std::string verCliente();
        std::string devolverTipoStr();
        void cargarCliente(std::string id, bool t, int m);
    protected:

    private:
        std::string identificador;
        bool tipo;
        int minuto;                                   //miniuto de llegada
        Entrada miEntrada;

};

#endif // CLIENTE_H


