#ifndef FLAT_H
#define FLAT_H

#include "Imovel.h"

class Flat: public Imovel{
    public:
        Flat();
        double area;
        double valor;
        char arcond;
        char internet_tv;
        char lavanderia;
        char limpeza;
        char recep_24h;

        /*void setArea(double);
        void setValor(double);
        void setArcond(char);
        void setInternet_tv(char);
        void setLavanderia(char);
        void setLimpeza(char);
        void setRecep_24h(char);
        */
};

#endif
