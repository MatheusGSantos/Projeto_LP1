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

		void getDescricao();
};

#endif
