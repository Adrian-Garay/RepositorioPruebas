<<<<<<< HEAD
#include <iostream>
#include "Pila.h"
#include "Cola.h"
#include "Automovil.h"
#include <cstdlib>
#include <ctime>
#include "Gestor.h"



using namespace std;

void menu(Gestor gestor, int NC, int NV, int NS, int NP)
{
    while(1==1)
    {

    int eleccion=0;
    cout<<"1. Generar aleatoriamente la cola de automoviles disponibles en la fabrica con NV automoviles."<<endl;
    cout<<"2. Generar aleatoriamente la cola de automoviles disponibles en la fabrica solicitando NV por pantalla."<<endl;
    cout<<"3. Mostrar en pantalla los datos de la cola de automoviles disponibles en la fábrica."<<endl;
    cout<<"4. Borrar la cola de automoviles disponibles en la fabrica. "<<endl;
    cout<<"5. Avanzar un paso en la simulacion: salen NS automoviles de la cola_fabrica (almacen de la fabrica) y llegan a un almacen de zona (elegida aleatoriamente). "<<endl;
    cout<<"6. Avanzar un paso en la simulacion, solicitando NS por pantalla: salen NS automoviles de la cola_fabrica (almacén de la fabrica) y llegan a un almacen de zona."<<endl;
    cout<<"7. Mostrar en pantalla los datos de los almacenes de zona (camiones o pilas) y registro o cola_zona)."<<endl;
    cout<<"8. Realizar la simulacion hasta finalizar los automoviles disponibles (en cada paso salen NS automoviles). En cada uno de los pasos se mostraran en pantalla los datos de la cola de fabrica y de cada una de las zonas de reparto (pilas y cola)"<<endl;
    cout<<"0. Salir"<<endl;
    cin>>eleccion;
    cout<<eleccion<<endl;
    switch(eleccion)
    {
    case 1:
        gestor.generar_automoviles(NV);
        break;
    case 2:
        cout<<"Inserte un numero para NV, entre 10 y 30: "<<endl;
        cin>>NV;
        while((10>NV)||(NV>>30))
        {
            cout<<"El numero introducido no se encuentra entre 10 y 30, pruebe de nuevo: "<<endl;
            cin>>NV;
        };
        gestor.generar_automoviles(NV);
        break;
    case 3:
        gestor.mostrar_cola_fabrica();
        break;
    case 4:
        gestor.borrar_cola_fabrica();
        break;
    case 5:
        gestor.soltar_automoviles(NS);
        break;
    case 6:
        cout<<"Inserte un numero para NS, entre 3 y 8: "<<endl;
        cin>>NS;
        while((3>NS)||(NS<8))
        {
            cout<<"El numero introducido no se encuentra entre 3 y 8, pruebe de nuevo: "<<endl;
            cin>>NS;
        };
        gestor.soltar_automoviles(NS);
        break;
    case 7:
        break;
    case 8:
        break;
    case 0:
        exit(EXIT_SUCCESS);
        break;
    default:
        cout<<"La opcion elegida no es valida, pruebe de nuevo: "<<endl;
        break;
    }
    }
}

int main()
{
    Gestor gestor=Gestor();
    int NC = 6;
    int NV = 10;
    int NS = 7;
    int NP = 10;
    //Gestor(NC, NV, NS, NP);
    menu(gestor, NC, NV, NS, NP);
    return 0;
}
=======
#include <iostream>
#include "Pila.h"
#include "Cola.h"
#include "Automovil.h"
#include <cstdlib>
#include <ctime>
#include "Gestor.h"



using namespace std;

void menu(Gestor gestor, int NC, int NV, int NS, int NP)
{
    while(1==1)
    {

    int eleccion=0;
    cout<<"1. Generar aleatoriamente la cola de automoviles disponibles en la fabrica con NV automoviles."<<endl;
    cout<<"2. Generar aleatoriamente la cola de automoviles disponibles en la fabrica solicitando NV por pantalla."<<endl;
    cout<<"3. Mostrar en pantalla los datos de la cola de automoviles disponibles en la fábrica."<<endl;
    cout<<"4. Borrar la cola de automoviles disponibles en la fabrica. "<<endl;
    cout<<"5. Avanzar un paso en la simulacion: salen NS automoviles de la cola_fabrica (almacen de la fabrica) y llegan a un almacen de zona (elegida aleatoriamente). "<<endl;
    cout<<"6. Avanzar un paso en la simulacion, solicitando NS por pantalla: salen NS automoviles de la cola_fabrica (almacén de la fabrica) y llegan a un almacen de zona."<<endl;
    cout<<"7. Mostrar en pantalla los datos de los almacenes de zona (camiones o pilas) y registro o cola_zona)."<<endl;
    cout<<"8. Realizar la simulacion hasta finalizar los automoviles disponibles (en cada paso salen NS automoviles). En cada uno de los pasos se mostraran en pantalla los datos de la cola de fabrica y de cada una de las zonas de reparto (pilas y cola)"<<endl;
    cout<<"0. Salir"<<endl;
    cin>>eleccion;
    cout<<eleccion<<endl;
    switch(eleccion)
    {
    case 1:
        gestor.generar_automoviles(NV);
        break;
    case 2:
        cout<<"Inserte un numero para NV, entre 10 y 30: "<<endl;
        cin>>NV;
        while((10>NV)||(NV>>30))
        {
            cout<<"El numero introducido no se encuentra entre 10 y 30, pruebe de nuevo: "<<endl;
            cin>>NV;
        };
        gestor.generar_automoviles(NV);
        break;
    case 3:
        gestor.mostrar_cola_fabrica();
        break;
    case 4:
        gestor.borrar_cola_fabrica();
        break;
    case 5:
        gestor.soltar_automoviles(NS);
        break;
    case 6:
        cout<<"Inserte un numero para NS, entre 3 y 8: "<<endl;
        cin>>NS;
        while((3>NS)||(NS<8))
        {
            cout<<"El numero introducido no se encuentra entre 3 y 8, pruebe de nuevo: "<<endl;
            cin>>NS;
        };
        gestor.soltar_automoviles(NS);
        break;
    case 7:
        break;
    case 8:
        break;
    case 0:
        exit(EXIT_SUCCESS);
        break;
    default:
        cout<<"La opcion elegida no es valida, pruebe de nuevo: "<<endl;
        break;
    }
    }
}

int main()
{
    Gestor gestor=Gestor();
    int NC = 6;
    int NV = 10;
    int NS = 7;
    int NP = 10;
    //Gestor(NC, NV, NS, NP);
    menu(gestor, NC, NV, NS, NP);
    return 0;
}
>>>>>>> 45763a63ee3ea7272fc3669cbcaef4d0af23efdf
