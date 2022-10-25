#ifndef PILA_H_INCLUDED
#define PILA_H_INCLUDED
#include "NodoPila.h"

class Pila
{
private:
	pnodo cima;
public:
	Pila();
	~Pila();
	bool esVacia();
	void apilar(int v);
	void desapilar();
	int mostrar();
	int contar();
	int fondo();
	void montar(Pila p1, Pila p2);
	void quitar(int n);
	void inversa();
};


#endif // PILA_H_INCLUDED
