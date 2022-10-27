#include <iostream>
#include "Cola.h"
#include <string>
#include "NodoCola.h"
using namespace std;

Cola::Cola()
{
    primero = NULL; ultimo = NULL;
    longitud=0;
}

void Cola::encolar(Cliente c)
{ NodoCola *nuevo_nodo = new
    NodoCola(c, nuevo_nodo);
        if(es_vacia())
            { primero = nuevo_nodo;
            ultimo = nuevo_nodo;
            }
        else
            { ultimo->siguiente = nuevo_nodo;
            ultimo = nuevo_nodo;
            }
            longitud++;
}

Cliente Cola::desencolar()
    { if(!es_vacia())
        {Cliente c = primero->c;
        NodoCola *aux = primero;
        if((primero == ultimo) && (primero->siguiente == NULL))
            { primero = NULL;
            ultimo = NULL;
            aux->siguiente = NULL;
            delete(aux);
            }
        else
            { primero = primero->siguiente;
            aux->siguiente = NULL;
            delete(aux);
            }
        longitud--;
        return c;
    }
}

Cliente Cola::inicio()
    { if(!es_vacia())
        { return primero->c;
        }
    }

Cliente Cola::fin()
    { if(!es_vacia())
        { return ultimo->c;
        }
    }

int Cola::get_longitud()
    { return longitud;
    }


bool Cola::es_vacia()
    { return ((primero == NULL) && (ultimo == NULL));
    }

/*
void Cola::mostrarCola()
//No es correcto, la cola solo puede verse mostrando
//el primero y desencolando, se implementa para comprobar
//código facilmente.
    {   NodoCola *aux = primero;
    if (es_vacia()) {
            cout<<"Cola Vacía: "<<endl;
    } else {
        cout<<"Datos de la Cola: "<<endl;
        while (aux){
            cout << aux->c<<endl;
            aux = aux->siguiente;
            }
        }
    }
*/

Cola::~Cola()
{
    //dtor
}
