#ifndef STUDIO_H
#define STUDIO_H

#include "Imovel.h"

class Studio: public Imovel
{
    public:
        double area;
        double valor;
        char arcond;
        char internet_tv;
        char lavanderia;
        char limpeza;
        char recep_24h;
        char piscina;
        char sauna;
        char ginastica;

        Studio(double, double, char, char, char, char, char, char, char, char);
};

#endif
