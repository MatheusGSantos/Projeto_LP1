#ifndef IMOVEL_H
#define IMOVEL_H

#include "Endereco.h"

class Imovel
{
    private:
        string descricao;
        double valor;
        Endereco endereco; //Fazer Classe Endereco
        int tipoOferta;

    public:
        Imovel();
        virtual ~Imovel();

        double getValor();
        int getTipoOferta();
        Endereco getEndereco();
        std::string getDescricao();
}
