#include <string>
#include <iostream>
#include <ctime>
#include "Gestor.h"
#include "Pila.h"
#include "Cola.h"
#include "Cliente.h"
using namespace std;

Pila p;

Gestor::Gestor()
{
    //ctor
}

//APARTADO B - GENERAR CLIENTES CON RESERVA ALEATORIOS
void Gestor::c_reserva_aleatorio(int n){
    Cliente c;
    for (int i=0; i<n; i++){
        cout<<"c_reserva_aleatorio numero " + to_string(i);
        t_cliente=rand()%(2-1+1)+1;
        if (t_cliente=1){
            t=true;
            id="CODREG";
            for (int i=0;i<3;i++){
                id=id+std::to_string(rand()%(9-0+1)+0); //convertimos el int a string para poder concatenar
            }
        } else{
            t=false;
            id="";
            char letra=rand()%(90-65+1)+65;             //letra aleatroria con ASCII
            for (int i=0;i<8;i++){
                id=id+std::to_string(rand()%(9-0+1)+0);
            }id=id+std::to_string(letra);
        }
        c.cargarCliente(id, t, 0);
        cargarPila(c);
    }
}

//APARTADO C - GENERAR CLIENTES SIN RESERVA Y REGISTRADOS ALEATORIOS
void Gestor::cReg_aleatorio(int n){
    Cliente c_reg;
    for (int i=0; i<n; i++){
        t=true;
        id="CODREG";
        for (int i=0;i<3;i++){
            id=id+std::to_string(rand()%(9-0+1)+0);     //convertimos el int a string para poder concatenar
        }
        c_reg.cargarCliente(id, t, 0);
        CliReg.encolar(c_reg);
    }
}

//APARTADO C - GENERAR CLIENTES SIN RESERVA Y NO REGISTRADOS ALEATORIOS
void Gestor::cNoReg_aleatorio(int n){
    Cliente c_no_reg;
    for (int i=0; i<n; i++){
        id="";
        char letra=rand()%(90-65+1)+65;                 //letra aleatroria con ASCII
        for (int i=0;i<=8;i++){
            id=id+std::to_string(rand()%(9-0+1)+0);
        }
        id=id+std::to_string(letra);
        c_no_reg.cargarCliente(id, t, 0);
        CliNoReg.encolar(c_no_reg);
    }
}

//APARTADO D y E - INCLUIR CLIENTES DE FORMA MANUAL
void Gestor::cManual(int tiene_reserva, int t_cliente){
    Cliente c;
    if (t_cliente==1){                                                  //esta registrado
        id="CODREG";
        for (int i=0;i<3;i++){
        id=id+std::to_string(rand()%(9-0+1)+0);                        //convertimos el int a string para poder concatenar
        }
        c.cargarCliente(id, true, 0);
        if (tiene_reserva==1){                                         //cliente registrado
            cargarPila(c);
        }
        else{                                                          //cliente no registrado
            CliReg.encolar(c);
        }
    }
    else {                                                            //no registrado
        cout<<"Introduzca su DNI (la letra debe ser mayuscula):\n";
        cin>>id;
        if (comprobacionDNI(id)){
            c.cargarCliente(id, false, 0);
            if (t_cliente==1){                                        //cliente sin reserva
                cargarPila(c);
            }
            else{                                                    //cliente no registrado
                CliNoReg.encolar(c);
            }
        } else {cout<<"DNI invalido. No se ha registrado el cliente.\n";}
    }
}

//CARGA DE DATOS - carga el cliente en la pila de forma ordenada
void Gestor::cargarPila(Cliente c){
    Pila pAux;                                                      //pila y cliente auxiliar para no perder los datos
    Cliente cAux;
    bool bucle=true;

    if (pCliConReserva.esVacia()){
            pCliConReserva.apilar(c);}
    else{
       if (c.devolverTipo()==true){
            pCliConReserva.apilar(c);
       } else{
            while (bucle==true){
                if (pCliConReserva.esVacia()){
                    bucle=false;
                }else{
                    cAux = pCliConReserva.desapilar();
                    if (cAux.devolverTipo()){
                        pAux.apilar(cAux);
                    } else{
                        pCliConReserva.apilar(cAux);
                        pCliConReserva.apilar(c);
                        while (pAux.esVacia()==false){
                            pCliConReserva.apilar(pAux.desapilar());
                        }bucle=false;
                    }
                }
            }
       }
    }
}

//APARTADOS F, H, I - MOSTRAR CLIENTES
void Gestor::mostrarCliConReserva(){
    Pila pAux;
    Cliente cAux;
    while (!pCliConReserva.esVacia()){
        cAux = pCliConReserva.desapilar();
        cout<<cAux.verCliente();
        pAux.apilar(cAux);
    }
    while (pAux.esVacia()==false){
        cAux = pAux.desapilar();
        pCliConReserva.apilar(cAux);
    }
}

void Gestor::mostrarCliSinReservaReg(){
    Cola colaAux;
    Cliente cAux;
    while ((!CliReg.es_vacia()) && (CliReg.get_longitud() > 0)) {
        cout<<"CliReg longitud  = "+to_string(CliReg.get_longitud()) + "\n";
        cAux=CliReg.desencolar();
        cout<<cAux.verCliente();
        colaAux.encolar(cAux);
    }
    while ((!colaAux.es_vacia()) && (colaAux.get_longitud() > 0 )){
        cout<<"longitud  = "+to_string(colaAux.get_longitud()) + "\n";
        cAux=colaAux.desencolar();
        CliReg.encolar(cAux);
    }
}

void Gestor::mostrarCliSinReservaNoReg(){
    Cola colaAux;
    Cliente cAux;
    while ((!CliNoReg.es_vacia()) && (CliNoReg.get_longitud() > 0)){
        cAux=CliNoReg.desencolar();
        cout<<cAux.verCliente();
        colaAux.encolar(cAux);
    }
    while ((!colaAux.es_vacia()) && (colaAux.get_longitud() > 0 )){
        cAux=colaAux.desencolar();
        CliNoReg.encolar(cAux);
    }
}

//APARTADOS G, J - BORRAR CLIENTES
void Gestor::borrarCliConReserva(){
    while (!pCliConReserva.esVacia()){
        pCliConReserva.desapilar();
    }
}

void Gestor::borrarCliSinReservaReg(){
    while(CliReg.get_longitud() > 0) {
        CliReg.desencolar();
    }
}

void Gestor::borrarCliSinReservaNoReg(){
    while(CliNoReg.get_longitud() > 0){
        CliNoReg.desencolar();
    }
}

void Gestor::borrarCLiSinReserva(){
    borrarCliSinReservaReg();
    borrarCliSinReservaNoReg();
}

bool Gestor::comprobacionDNI(string DNI){
    string numeros = "0123456789";
    string letras = "ABCDEFGHIJKLMNOPQ";
    bool letra = true;
    int contador = 0;
    if (DNI.length()==9){
        for (int i=0;i<9;i++){
            if (i<8){
                for (int j=0;j<10;j++){
                    if(DNI[i]==numeros[j]){
                        contador++;
                    }
                }
            }else{
                for (int j=0;j<17;j++){
                    if (DNI[i]==letras[j]){letra=false;}
                }
            }
        }
        if ((contador==8)&&(letra=true)){return true;}
    }
    else{ return false;}
}

/*TIEMPO
int Gestor::minuto_entrada(){
    //hay que cambiarlo cuando se entre a la compra
    time_t curr_time;
    //curr_tie = time(NULL);
    tm *tm_local = localtime(&curr_time);
    if (((tm_local->tm_hour)>=11) || ((tm_local->tm_hour)<10)){
        cout<<'No hay procesos de compra en este momento';
        return -1;
    }else{return tm_local->tm_min;}
}
*/

Gestor::~Gestor()
{
    //dtor
}
