#ifndef FLAT_H_
#define FLAT_H_

class flat: public Imovel{
    public:
        double area;
        double valor;
        char arcond;
        char internet_tv;
        char lavanderia;
        char limpeza;
        char recep_24h;

        flat(double, double, char, char, char, char, char);
};

#endif // FLAT_H_INCLUDED
