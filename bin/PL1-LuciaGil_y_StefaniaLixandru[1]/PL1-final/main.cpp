#include <iostream>
#include <ctime>
#include "Pila.h"
#include "Cola.h"
#include "Cliente.h"
#include "Gestor.h"
using namespace std;

int main()
{
    //VARIABLES
    int opcion;
    int op;
    int n;
    int t_cliente;
    int tiene_reserva;
    int reg;
    bool bucle=true;
    string error = "Opcion no valida";

    Gestor g;

    //MENU
    while (bucle){
        cout<<"¿Que quiere hacer?\n1-Generar clientes aleatorios\n2-Añadir cliente\n3-Mostrar clientes\n4-Borrar clientes\n5-Salir\n";
        cin>>opcion;

        //APARTADOS B y C - GENERAR CLIENTES ALEATORIOS
        if (opcion==1){
            cout<<"¿Los clientes tienen reserva?\n1-Si\n2-No\n";
            cin>>op;
            cout<<"¿Cuantos clientes quiere generar?\n";
            cin>>n;                                         //n clientes a generar
            if ((n<0)||((op!=1)&&(op!=2))){cout<<error<<"\n";}
            else if(op==1){g.c_reserva_aleatorio(n);}
            else if(op==2){
                cout<<"¿Los clientes estan registrados?\n1-Si\n2-No\n";
                cin>>reg;
                if (reg==1){g.cReg_aleatorio(n);}
                else if (reg==2){g.cNoReg_aleatorio(n);}
                else{cout<<error<<"\n";}
                }
            cout<<"Clientes añadidos.\n";
        }

        //APARTADOS D y E - INCLUIR CLIENTES DE FORMA MANUAL
        else if (opcion==2){
            cout<<"¿Los clientes tienen reserva?\n1-Si\n2-No\n";
            cin>>tiene_reserva;
            cout<<"¿Quiere añadir un cliente '1'-REGISTRADO o '2'-NO REGISTRADO?\n";
            cin>>t_cliente;
            if ((t_cliente!=1)||(t_cliente!=2)||(tiene_reserva!=1)||(tiene_reserva!=2)){cout<<error<<"\n";}
            else{g.cManual(tiene_reserva, t_cliente);}
        }

        //APARTADOS F, H e I - MOSTRAR CLIENTES
        else if (opcion==3){
            cout<<"¿Que clientes quiere mostrar?\n1-Con reserva\n2-Sin reserva registrados\n3-Sin reserva no registrados\n";
            cin>>op;
            if (op==1){g.mostrarCliConReserva();}           //mostrar pila
            else if (op==2){g.mostrarCliSinReservaReg();}   //mostrar lista c con reserva
            else if (op==3){g.mostrarCliSinReservaNoReg();} //mostrar lista c sin reserva
            else{cout<<error;}
        }

        //APARTADOS G y J - BORRAR CLIENTES
        else if (opcion==4){
            cout<<"¿Que clientes quiere borrar?\n1-Con reserva\n2-Sin reserva\n3-Sin reserva registrados\n4-Sin reserva no registrados\n";
            cin>>op;
            if (op==1){g.borrarCliConReserva();}            //borrar pila
            else if (op==2){g.borrarCLiSinReserva();}       //borrar ambas listas
            else if (op==3){g.borrarCliSinReservaReg();}    //borrar lista c con reserva
            else if (op==4){g.borrarCliSinReservaNoReg();}  //borrar lista c sin reserva
            else{cout<<error<<"\n";}
        }
        else if (opcion==5){bucle=false;}                   //salir del menu
        else{cout<<error<<"\n";}
    }


}
