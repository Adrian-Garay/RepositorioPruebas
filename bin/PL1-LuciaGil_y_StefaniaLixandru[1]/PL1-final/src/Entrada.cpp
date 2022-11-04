#include "Entrada.h"
#include <string>

Entrada::Entrada()
{
    id_concierto=tipoConcierto::c0;
    tipo=tipoEntrada::sin_entrada;
}

void Entrada::cargarDatosEntrada(tipoEntrada t, tipoConcierto id_c){
    id_concierto=id_c;
    tipo=t;
}

std::string Entrada::devolverTipoEntradaStr(){                //pasar el tipo de entrada a str para poder utilizarlo
    if (tipo==tipoEntrada::Basica){return "Basica";}
    else if (tipo==tipoEntrada::Premiun){return "Premiun";}
    else if (tipo==tipoEntrada::VIP){return "VIP";}
    else {return "Sin entrada";}
}

std::string Entrada::devolverIdConciertoStr(){                                //pasar el id concierto a str para poder utilizarlo
    if (id_concierto==tipoConcierto::MusicaClasica){return "Musica Clasica";}
    else if (id_concierto==tipoConcierto::Rock){return "Rock";}
    else if (id_concierto==tipoConcierto::Pop){return "Pop";}
    else if (id_concierto==tipoConcierto::Jazz){return "Jazz";}
    else {return "Sin concierto";}
}

std::string Entrada::verEntrada(){
    return " id entrada : " + devolverIdConciertoStr() + " , tipo entrada : " + devolverTipoEntradaStr() + " ";
}

Entrada::~Entrada()
{
    //dtor
}
