#ifndef ENTRADA_H
#define ENTRADA_H
#include <string>

class Entrada
{
    public:
        enum class tipoEntrada {Basica, Premiun, VIP, sin_entrada};     //tipo enumerados con las distintas entradas y la entrada por defecto
        enum class tipoConcierto{c0,MusicaClasica,Rock,Pop,Jazz};       //distintos conciertos/c0->por defecto

        Entrada();                                                      //constructor por defecto
        virtual ~Entrada();
        void cargarDatosEntrada(tipoEntrada t, tipoConcierto id_c);
        std::string verEntrada();
        std::string devolverTipoEntradaStr();
        std::string devolverIdConciertoStr();

    protected:

    private:
        tipoEntrada tipo;
        tipoConcierto id_concierto;
};

#endif // ENTRADA_H
