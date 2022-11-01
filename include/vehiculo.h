#ifndef VEHICULO_H
#define VEHICULO_H
#include<string>


class Vehiculo
{
    public:
        //metodos
        Vehiculo();
        Vehiculo(std::string NBastidor,std::string Modelo, std::string Color, int Concesionario);




        /**<void crear ();
        vehiculo(char nBastidor, char modelo, char color, int concesionario);
        void crearNBastidor ();  */

    protected:

    private:
        //atributos
        std::string nBastidor;//cadena formada por 5 letras y 3 d�gitos.
        std::string modelo; //se fabrican al menos 6 modelos diferentes.
        std::string color;//: se fabrican al menos 6 colores diferentes.
        int concesionario; //n�mero entero entre 1 y m�ximo de concesionarios NC


};

#endif // VEHICULO_H
