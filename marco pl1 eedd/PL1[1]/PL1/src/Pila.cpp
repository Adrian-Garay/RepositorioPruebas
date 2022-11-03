#include "Pila.h"
#include "Automovil.h"

Pila::Pila()
{
    cima=NULL;
    //constructor de una pila
}

Pila::~Pila()
{
    while(cima) //mientras siga habiendo una cima, es decir, al menos un elemento, que desapile
    {
        desapilar();
    }
    //destructor de una pila
}

bool Pila::esVacia() //combrueba si esta vacia o no
{
    return cima==NULL; //mira si la cima es nula, y en ese caso retorna True, si no False
}

void Pila::apilar(int v) //metodo para apilar un número entero
{
    pnodo nuevo=new NodoPila(v, cima);
    cima=nuevo;
}

void Pila::apilar(char c) //metodo para apilar un caracter
{
    pnodo nuevo=new NodoPila(c, cima);
    cima=nuevo;
}

void Pila::apilar(string s) //metodo para apilar un string
{
    pnodo nuevo=new NodoPila(s, cima);
    cima=nuevo;
}
/*
void Pila::apilar(Automovil a) //metodo para apilar un automovil //aqui esta el error
{
    pnodo nuevo=new NodoPila(a, cima);
    cima=nuevo;
}
*/
void Pila::desapilar() //metodo para desapilar una pila
{
    pnodo nodo;
    if(cima) //si tiene una cima, es decir, si no está vacía
    {
        nodo=cima;
        cima=nodo->siguiente;
        delete nodo;
    }
}

int Pila::mostrar_int() //metodo para mostrar el elemento en la cima que sea un numero entero
{
    if(esVacia()) //si esta vacia retorna nulo
    {
        return NULL;
    }
    else
    {
        return cima->valor_int;
    }
}

char Pila::mostrar_char() //metodo para mostrar el elemento en la cima que sea un caracter
{
    if(esVacia())
    {
        return NULL;
    }
    else
    {
        return cima->valor_char;
    }
}
string Pila::mostrar_string() //metodo para mostrar el elemento en la cima que sea un string
{
    if(esVacia())
    {
        return "vacio";
    }
    else
    {
        return cima->valor_string;
    }
}

int Pila::mostrar_valor_int(int v) //metodo para mostrar el valor de un numero entero en una posicion señalizada
{
    int objetivo;
    Pila auxiliar;
    int valor;
    while (!esVacia())
    {
        valor=mostrar_char();
        desapilar();
        auxiliar.apilar(valor);
    };
    int posicion=1;
    while(!auxiliar.esVacia())
    {
        valor=auxiliar.mostrar_char();
        auxiliar.desapilar();
        apilar(valor);
        if (posicion==v)
        {
            objetivo=valor;
        }
        posicion++;
    };
    return objetivo;
}

char Pila::mostrar_valor_char(int v) //metodo para mostrar el valor de un caracter entero en una posicion señalizada
{
    char objetivo;
    Pila auxiliar;
    char valor;
    while (!esVacia())
    {
        valor=mostrar_char();
        desapilar();
        auxiliar.apilar(valor);
    };
    int posicion=1;
    while(!auxiliar.esVacia())
    {
        valor=auxiliar.mostrar_char();
        auxiliar.desapilar();
        apilar(valor);
        if (posicion==v)
        {
            objetivo=valor;
        }
        posicion++;
    };
    return objetivo;
}

string Pila::mostrar_valor_string(int v) //metodo para mostrar el valor de un string en una posicion señalizada
{
    string objetivo;
    Pila auxiliar;
    string valor;
    while (!esVacia())
    {
        valor=mostrar_string();
        desapilar();
        auxiliar.apilar(valor);
    };
    int posicion=0;
    while(!auxiliar.esVacia())
    {
        valor=auxiliar.mostrar_string();
        auxiliar.desapilar();
        apilar(valor);
        if (posicion==v)
        {
            objetivo=valor;
        }
        posicion++;
    };
    return objetivo;
}
