#include "Cliente.h"
#include <string>
#include "Entrada.h"

Cliente::Cliente()
{
    identificador="";                                       //si pongo NULL da error
    tipo=true;
    minuto = 0;
}

Cliente::Cliente(std::string id, bool t, int m)
{
    identificador=id;
    tipo=t;
    minuto = m;
}

void Cliente::cargarCliente(std::string id, bool t, int m)
{
    identificador=id;
    tipo=t;
    minuto = m;
}


Cliente::cargarMinuto(int m){minuto=m;}

Cliente::cargarMiEntrada(Entrada e){miEntrada=e;}

bool Cliente::devolverTipo(){return tipo;}

std::string Cliente::devolverTipoStr(){
    if (tipo) { return " registrado";}
    else { return " no registrado";}}

std::string Cliente::devolverId(){return identificador;}

int Cliente::devolverMinuto(){return minuto;}

Entrada Cliente::devolverMiEntrada(){return miEntrada;}

std::string Cliente::verCliente(){
    return("El cliente tiene id: " + identificador + ", tipo: " + devolverTipoStr() + ", entro a compra en el minuto: " + std::to_string(minuto) + ", adquirio la entrada: " + miEntrada.verEntrada()+"\n");
}
Cliente::~Cliente()
{
    //dtor
}
