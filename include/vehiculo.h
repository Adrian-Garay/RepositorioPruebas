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
        char NBastidor;//cadena formada por 5 letras y 3 d�gitos.
        char Modelo; //se fabrican al menos 6 modelos diferentes.
        char Color;//: se fabrican al menos 6 colores diferentes.
        int Concesionario; //n�mero entero entre 1 y m�ximo de concesionarios NC


};

#endif // VEHICULO_H
