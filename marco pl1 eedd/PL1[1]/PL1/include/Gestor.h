<<<<<<< HEAD
#ifndef GESTOR_H
#define GESTOR_H
#include "Zona.h"
#include "Cola.h"


class Gestor
{
private:
    Zona N;
    Zona S;
    Zona E;
    Zona O;
    Cola cola_fabrica;

public:
    Gestor();
    ~Gestor();
    void borrar_cola_fabrica();
    void generar_automoviles(int NV);
    void mostrar_cola_fabrica();
    void soltar_automoviles(int NS);
};

#endif // GESTOR_H
=======
#ifndef GESTOR_H
#define GESTOR_H
#include "Zona.h"
#include "Cola.h"


class Gestor
{
private:
    Zona N;
    Zona S;
    Zona E;
    Zona O;
    Cola cola_fabrica;

public:
    Gestor();
    ~Gestor();
    void borrar_cola_fabrica();
    void generar_automoviles(int NV);
    void mostrar_cola_fabrica();
    void soltar_automoviles(int NS);
};

#endif // GESTOR_H
>>>>>>> 45763a63ee3ea7272fc3669cbcaef4d0af23efdf
