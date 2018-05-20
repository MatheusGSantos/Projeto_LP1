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

        /*void setArea(double);
        void setValor(double);
        void setArcond(char);
        void setInternet_tv(char);
        void setLavanderia(char);
        void setLimpeza(char);
        void setRecep_24h(char);
        void setPiscina(char);
        void setSauna(char);
        void setGinastica(char);
        */
        
};

#endif
