#ifndef FLAT_H
#define FLAT_H

#include "Imovel.h"

class Flat: public Imovel{
    public:
        double area;
        double valor;
        char arcond;
        char internet_tv;
        char lavanderia;
        char limpeza;
        char recep_24h;

        Flat(double, double, char, char, char, char, char);
};

#endif
