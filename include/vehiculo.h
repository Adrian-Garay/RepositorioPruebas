#ifndef VEHICULO_H
#define VEHICULO_H


class vehiculo
{
    public:
        //metodos
        void crear ();

    protected:

    private:
        //atributos
        char NBastidor;//cadena formada por 5 letras y 3 dígitos.
        char Modelo; //se fabrican al menos 6 modelos diferentes.
        char Color;//: se fabrican al menos 6 colores diferentes.
        int Concesionario; //número entero entre 1 y máximo de concesionarios NC


};

#endif // VEHICULO_H
