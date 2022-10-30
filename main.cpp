#include <iostream>
#include "include\Pila.h"
#include "include/Cola.h"
using namespace std;

int main()
{
    int menu_entrada;
    bool bucle=true;
    string error = "Operaci�n erronea.\n";

    //Opciones del men�
    while(bucle){
        cout<<"Indique la operaci�n que desea realizar:\n";
        cout<<"1 -> Generar aleatoriamente la cola de autom�viles disponibles en la f�brica con NV autom�viles.\n";
        cout<<"2 -> Generar aleatoriamente la cola de autom�viles disponibles en la f�brica solicitando NV por pantalla.\n";
        cout<<"3 -> Mostrar en pantalla los datos de la cola de autom�viles disponibles en la f�brica.\n";
        cout<<"4 -> Borrar la cola de autom�viles disponibles en la f�brica.\n";
        cout<<"5 -> Sacar NS autom�viles del almac�n de la f�brica y llevarlos a un almac�n de zona aleatorio.\n";
        cout<<"6 -> Sacar NS autom�viles del almac�n de la f�brica y llevarlos a un almac�n de zona.\n";
        cout<<"7 -> Mostrar en pantalla los datos de los almacenes de zona y registro\n";
        cout<<"8 -> Realizar la simulaci�n hasta finalizar los autom�viles disponibles\n";
        cout<<"0 -> Salir\n";
        cin>>menu_entrada;

        //Primera opci�n
        if (menu_entrada == 1){
            cout<<"Ha elegido la primera opci�n\n";
        }

        //Segunda opci�n
        else if (menu_entrada == 2){
            cout<<"Ha elegido la segunda opcion\n";
        }

        //Tercera opci�n
        else if (menu_entrada == 3){
            cout<<"Ha elegido la tercera opci�n\n";
        }

        //Cuarta opci�n
        else if (menu_entrada == 4){
            cout<<"Ha elegido la cuarta opci�n\n";
        }

        //Quinta opci�n
        else if (menu_entrada == 5){
            cout<<"Ha elegido la quinta opci�n\n";
        }

        //Sexta opci�n
        else if (menu_entrada == 6){
            cout<<"Ha elegido la sexta opci�n\n";
        }

        //Septima opci�n
        else if (menu_entrada == 7){
            cout<<"Ha elegido la s�ptima opci�n\n";
        }

        //Octava opci�n
        else if (menu_entrada == 8){
            cout<<"Ha elegido la octava opci�n\n";
        }

        //Salir del programa
        else if (menu_entrada == 0){
            bucle=false;
        }

        //Texto error
        else{
                cout<<error<<"\n";
        }
    }



    //Ejercicio 1 Pilas
	/*cout << " " << endl;
    cout << "Ejercicio 1 " << endl;
	cout << "Creamos la pila Vac�a" << endl;
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
    cout << "Creamos la pila 2 Vac�a" << endl;
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

    cout << "Creamos la pila Vac�a" << endl;
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
	//	p1.~Pila(); //es innecesario, se va a llamar al destructor al salir de la ejecuci�n

    /*
    cout << "Creamos la cola Vac�a" << endl;
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
    c.~Cola();*/

	return 0;
}
