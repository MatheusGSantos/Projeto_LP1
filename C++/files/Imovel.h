#ifndef IMOVEL_H
#define IMOVEL_H

#include "Endereco.h"

using namespace std;

class Imovel
{
    private:
        double valor;
        Endereco *endereco;
        int tipoOferta;
        string descricao;

    public:
        Imovel();
        virtual ~Imovel();

        double getValor();
        int getTipoOferta();
        Endereco getEndereco();
        string getDescricao();
};
#endif
