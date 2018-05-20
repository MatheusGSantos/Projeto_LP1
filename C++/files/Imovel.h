#ifndef IMOVEL_H
#define IMOVEL_H

#include "Endereco.h"

using namespace std;

class Imovel
{
    public:
        double valor;
        Endereco *endereco;
        string tipoOferta;
        string descricao;

        Imovel();
        virtual ~Imovel();

        double getValor();
        int getTipoOferta();
        Endereco getEndereco();
        string getDescricao();
};
#endif
