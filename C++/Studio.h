#ifndef STUDIO_H
#define STUDIO_H

#include "Imovel.h"

class Studio: public Imovel
{
    public:
        Studio();

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

		void getDescricao();
        
};

#endif
