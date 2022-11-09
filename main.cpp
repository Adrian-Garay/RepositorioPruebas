#include <iostream>
#include "include\Pila.h"
#include "include/Cola.h"
#include "vehiculo.h"
#include "gestor.h"
#include <stdlib.h>
#include <string>
#include <time.h>
#include "string.h"
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Spanish");

    //Variables
    int menu_entrada;
    bool bucle=true;
    string error = "Operaci�n erronea. Vuelva a intentarlo.\n";
    int nv = 20;    //Numero de coches creados
    int ns = 7;     //Numero de Coches movidos
    int nc = 5;     //Numero posible concesionarios
    int np = 10;     //Capacidad maxima de los camiones
    int nAlmacen;

    Gestor g;

    //Opciones del men�
    while(bucle)
    {
        cout<<"Indique la operaci�n que desea realizar:\n";
        cout<<"1 -> Generar aleatoriamente la cola de autom�viles disponibles en la f�brica con NV autom�viles.\n";
        cout<<"2 -> Generar aleatoriamente la cola de autom�viles disponibles en la f�brica solicitando NV por pantalla.\n";
        cout<<"3 -> Mostrar en pantalla los datos de la cola de autom�viles disponibles en la f�brica.\n";
        cout<<"4 -> Borrar la cola de autom�viles disponibles en la f�brica.\n";
        cout<<"5 -> Sacar NS autom�viles del almac�n de la f�brica y llevarlos a un almac�n de zona aleatorio.\n";
        cout<<"6 -> Sacar NS autom�viles del almac�n de la f�brica y llevarlos a un almac�n de zona.\n";
        cout<<"7 -> Mostrar en pantalla los datos de los almacenes de zona y registro.\n";
        cout<<"8 -> Realizar la simulaci�n hasta finalizar los autom�viles disponibles.\n";
        cout<<"0 -> Salir.\n";
        cin>>menu_entrada;

        //Primera opci�n
        if (menu_entrada == 1)
        {
            g.crea_vehiculos(nv);                   //genera una serie de veh�culos y los mete en el almacen de la fabrica
            cout<<"\n";
        }


        //Segunda opci�n
        else if (menu_entrada == 2)                 //genera nv veh�culos y los mete en el almacen de la fabrica
        {
            cout<<"Indique cuantos veh�culos quiere generar: \n";
            cin>>nv;
            while((nv<10)||(nv>30))
            {
                cout << "Error: Debe pedir minimo 10 automoviles y como m�ximo 30.\n";
                cin>>nv;
            }
            g.crea_vehiculos(nv);
        }



        //Tercera opci�n
        else if (menu_entrada == 3)
        {

            g.muestra_almacen_fabrica();            //Muestra los automoviles almacenados en el almacen de la fabrica
            cout<<"\n";
        }


        //Cuarta opci�n
        else if (menu_entrada == 4)
        {
            g.limpia_almacen();                     //Borra los automoviles almacenados en el almacen de la fabrica
            cout<<"\n";
        }




        //Quinta opci�n
        else if (menu_entrada == 5)
        {
            //cout<<"Indique cuantos veh�culos quiere eliminar: \n";
            //cin>>ns;
            if((ns<3)||(ns>8))
            {
                cout << "Error: Debe pedir minimo 3 automoviles y como m�ximo 8.\n";
                cin>>ns;
            }
            g.cambioAlmacenRand(ns,np,nc);

        }

        //Sexta opci�n
        else if (menu_entrada == 6)
        {
            cout<<"Indique cuantos veh�culos quiere eliminar: \n";
            cin>>ns;
            while((ns<3)||(ns>8))
            {
                cout << "Error: Debe pedir minimo 3 automoviles y como m�ximo 8.\n";
                cin>>ns;
            }
            cout<<"Indique el almacen de destino: \n";
            cin>>nAlmacen;
            while((nAlmacen<1)||(nAlmacen>4))
            {
                cout << "Error: Tiene que ser entre 1 y 4.\n";
                cin>>nAlmacen;
            }

            g.cambioAlmacen(ns,nAlmacen,np, nc);

        }

        //Septima opci�n
        else if (menu_entrada == 7)
        {
            cout<<"Ha elegido la s�ptima opci�n\n";
        }

        //Octava opci�n
        else if (menu_entrada == 8)
        {
            cout<<"Ha elegido la octava opci�n\n";
        }

        //Salir del programa
        else if (menu_entrada == 0)
        {
            bucle=false;
        }

        //Texto error
        else
        {
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

