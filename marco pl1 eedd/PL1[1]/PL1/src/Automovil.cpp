<<<<<<< HEAD
#include "Automovil.h"
#include "Pila.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

Automovil::Automovil() //constructor de automovil
{
    srand (time (NULL)); //se utiliza para generar un numero aleatorio
    int numero_aleatorio;


    //Para conseguir el numero de bastidor
    Pila abecedario;
    abecedario.apilar('A'); abecedario.apilar('B'); abecedario.apilar('C'); abecedario.apilar('D'); abecedario.apilar('E'); abecedario.apilar('F'); abecedario.apilar('G'); abecedario.apilar('H'); abecedario.apilar('I'); abecedario.apilar('J'); abecedario.apilar('K'); abecedario.apilar('L'); abecedario.apilar('M'); abecedario.apilar('N'); abecedario.apilar('O'); abecedario.apilar('P'); abecedario.apilar('Q'); abecedario.apilar('R'); abecedario.apilar('S'); abecedario.apilar('T'); abecedario.apilar('U'); abecedario.apilar('V'); abecedario.apilar('W'); abecedario.apilar('X'); abecedario.apilar('Y'); abecedario.apilar('Z');
    for (int i=0; i<5; i++){
        numero_aleatorio = (rand() % 10);
        string s = to_string(numero_aleatorio);
        numero_bastidor=numero_bastidor+s;
    };

    for (int i=0; i<3; i++){
        numero_aleatorio = ((rand() % 26)+1);
        char c=abecedario.mostrar_valor_char(numero_aleatorio);
        numero_bastidor=numero_bastidor+c;
    };
    //cout << numero_bastidor << endl;



    //Para conseguir el modelo
    Pila modelos;
    modelos.apilar("Clio"); modelos.apilar("Megane"); modelos.apilar("Laguna"); modelos.apilar("Scenic"); modelos.apilar("Captur"); modelos.apilar("Twingo");
    numero_aleatorio = (rand()%6);
    modelo=modelos.mostrar_valor_string(numero_aleatorio);
    //cout << modelo << endl;



    //Para conseguir el color
    Pila colores;
    colores.apilar("Rojo"); colores.apilar("Azul"); colores.apilar("Amarillo"); colores.apilar("Blanco"); colores.apilar("Negro"); colores.apilar("Verde");
    numero_aleatorio = (rand()%6);
    color=colores.mostrar_valor_string(numero_aleatorio);
    //cout << color << endl;



    concesionario_asignado=1;
    //ctor
}

Automovil::~Automovil()
{
    //dtor
}

string Automovil::getNumeroBastidor()
{
    return numero_bastidor;
}

string Automovil::getModelo()
{
    return modelo;
}

string Automovil::getColor()
{
    return color;
}

int Automovil::getConcesionarioAsignado()
{
    return concesionario_asignado;
}
=======
#include "Automovil.h"
#include "Pila.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

Automovil::Automovil() //constructor de automovil
{
    srand (time (NULL)); //se utiliza para generar un numero aleatorio
    int numero_aleatorio;


    //Para conseguir el numero de bastidor
    Pila abecedario;
    abecedario.apilar('A'); abecedario.apilar('B'); abecedario.apilar('C'); abecedario.apilar('D'); abecedario.apilar('E'); abecedario.apilar('F'); abecedario.apilar('G'); abecedario.apilar('H'); abecedario.apilar('I'); abecedario.apilar('J'); abecedario.apilar('K'); abecedario.apilar('L'); abecedario.apilar('M'); abecedario.apilar('N'); abecedario.apilar('O'); abecedario.apilar('P'); abecedario.apilar('Q'); abecedario.apilar('R'); abecedario.apilar('S'); abecedario.apilar('T'); abecedario.apilar('U'); abecedario.apilar('V'); abecedario.apilar('W'); abecedario.apilar('X'); abecedario.apilar('Y'); abecedario.apilar('Z');
    for (int i=0; i<5; i++){
        numero_aleatorio = (rand() % 10);
        string s = to_string(numero_aleatorio);
        numero_bastidor=numero_bastidor+s;
    };

    for (int i=0; i<3; i++){
        numero_aleatorio = ((rand() % 26)+1);
        char c=abecedario.mostrar_valor_char(numero_aleatorio);
        numero_bastidor=numero_bastidor+c;
    };
    //cout << numero_bastidor << endl;



    //Para conseguir el modelo
    Pila modelos;
    modelos.apilar("Clio"); modelos.apilar("Megane"); modelos.apilar("Laguna"); modelos.apilar("Scenic"); modelos.apilar("Captur"); modelos.apilar("Twingo");
    numero_aleatorio = (rand()%6);
    modelo=modelos.mostrar_valor_string(numero_aleatorio);
    //cout << modelo << endl;



    //Para conseguir el color
    Pila colores;
    colores.apilar("Rojo"); colores.apilar("Azul"); colores.apilar("Amarillo"); colores.apilar("Blanco"); colores.apilar("Negro"); colores.apilar("Verde");
    numero_aleatorio = (rand()%6);
    color=colores.mostrar_valor_string(numero_aleatorio);
    //cout << color << endl;



    concesionario_asignado=1;
    //ctor
}

Automovil::~Automovil()
{
    //dtor
}

string Automovil::getNumeroBastidor()
{
    return numero_bastidor;
}

string Automovil::getModelo()
{
    return modelo;
}

string Automovil::getColor()
{
    return color;
}

int Automovil::getConcesionarioAsignado()
{
    return concesionario_asignado;
}
>>>>>>> 45763a63ee3ea7272fc3669cbcaef4d0af23efdf
