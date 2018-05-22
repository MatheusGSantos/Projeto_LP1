#ifndef IMOVEL_H
#define IMOVEL_H

#include "Endereco.h"

using namespace std;

class Imovel
{
    public:
        int id;
        double valor;
        Endereco *endereco;
        string tipoOferta;
        string tipoImovel;

        Imovel();
        virtual ~Imovel();
};
#endif
