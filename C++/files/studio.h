#ifndef STUDIO_H_INCLUDED
#define STUDIO_H_INCLUDED


class studio: public imovel
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

        studio(double, double, char, char, char, char, char, char, char, char);


};

#endif // STUDIO_H
