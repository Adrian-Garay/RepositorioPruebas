#ifndef VEHICULO_H
#define VEHICULO_H
#include<string>


class Vehiculo
{
    public:
        //metodos
        Vehiculo();
        ~Vehiculo();
        //Vehiculo(std::string nBast,std::string mod, std::string col, int conce);
        //Vehiculo_aleatorio();
        void cargarVehiculo(std::string nBast,std::string mod, std::string col, int conce);
        std::string devolverColor();
        std::string devolverModelo();
        std::string devolverNBastidor();
        int devolverConcesionario();
        std::string verVehiculo();
        void asignaConcesionario(int nc);


        /**<void crear ();
        vehiculo(char nBastidor, char modelo, char color, int concesionario);
        void crearNBastidor ();  */

    protected:

    private:
         std::string nBastidor;//cadena formada por 5 letras y 3 d�gitos.
        std::string modelo; //se fabrican al menos 6 modelos diferentes.
        std::string color;//: se fabrican al menos 6 colores diferentes.
        int concesionario; //n�mero entero entre 1 y m�ximo de concesionarios NC


        //atributos



};

#endif // VEHICULO_H
