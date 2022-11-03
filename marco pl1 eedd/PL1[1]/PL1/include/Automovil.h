#ifndef AUTOMOVIL_H
#define AUTOMOVIL_H
#include <string>
using namespace std;



class Automovil
{
private:
    string numero_bastidor;
    string modelo;
    string color;
    int concesionario_asignado;

public:
    Automovil();
    ~Automovil();
    string getNumeroBastidor();
    string getModelo();
    string getColor();
    int getConcesionarioAsignado();
};

#endif // AUTOMOVIL_H
