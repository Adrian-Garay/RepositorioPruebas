#include <iostream>
#include "include\Pila.h"
#include "include/Cola.h"
using namespace std;

int main()
{
    //Ejercicio 1 Pilas
	/*cout << " " << endl;
    cout << "Ejercicio 1 " << endl;
	cout << "Creamos la pila Vacía" << endl;
	Pila p1; p1.mostrar();
	cout << "Apilo 0" << endl;
	p1.apilar(0); p1.mostrar();
	cout << "Apilo 1" << endl;
	p1.apilar(1); p1.mostrar();
	cout << "Apilo 2" << endl;
	p1.apilar(2); p1.mostrar();
	cout << "Cuento la pila" << endl;
	cout << p1.contar() << endl;*/

	//Ejercicio 2 Pilas
	/*cout << "Muestro el fondo" << endl;
	cout << p1.fondo() << endl;*/

	//Ejercicio 3 Pilas
	/*cout << " " << endl;
    cout << "Ejercicio 3 " << endl;
    cout << "Creamos la pila 2 Vacía" << endl;
	Pila p2; p2.mostrar();
	cout << "Apilo 0" << endl;
	p2.apilar(8); p2.mostrar();
	cout << "Apilo 1" << endl;
	p2.apilar(74); p2.mostrar();
	cout << p1.contar() << endl;
    cout << p2.contar() << endl;
    cout << "Montamos las dos pilas" << endl;
    p2.montar(p1, p2);
    cout << "Cuento la pila 1 " << endl;
	cout << p1.contar() << endl;
    cout << p2.contar() << endl;*/

    //Ejercicio4 Pilas
    /*cout << " " << endl;
    cout << "Ejercicio 4 " << endl;
    p1.quitar(1);
    cout << p1.mostrar() << endl;*/

    //Ejercicio5 Pilas
    /*cout << " " << endl;
    cout << "Ejercicio 5 " << endl;

    cout << "Creamos la pila Vacía" << endl;
	Pila p3; p3.mostrar();
	cout << "Apilo 0" << endl;
	p3.apilar(0); p3.mostrar();
	cout << "Apilo 1" << endl;
	p3.apilar(1); p3.mostrar();
	cout << "Apilo 2" << endl;
	p3.apilar(2); p3.mostrar();
    //p3.inversa(); No funciona, nesetiraria una cola para volverla a sacar
    p3.mostrar();*/

	//cout << "Desapilo " << endl;
	//p1.desapilar();	p1.mostrar();
	//	p1.~Pila(); //es innecesario, se va a llamar al destructor al salir de la ejecución

    cout << "Creamos la cola Vacía" << endl;
    Cola c; c.mostrarCola();
    cout<< "Encolo 0" << endl;
    c.encolar('0'); c.mostrarCola();;
    cout<< "Encolo 1" << endl;
    c.encolar('1'); c.mostrarCola();;
    cout<< "Encolo 2" << endl;
    c.encolar('2'); c.mostrarCola();;
    cout<< "Primero" << c.inicio()<<endl;
    cout<< "Ultimo" << c.fin()<<endl;
    cout<< "Longitud Cola: " << c.get_longitud()<<endl;
    cout<< "Desencolo" << endl;
    c.desencolar(); c.mostrarCola();
    cout<< "Longitud Cola: " << c.get_longitud()<<endl;
    c.~Cola();

	return 0;
}
