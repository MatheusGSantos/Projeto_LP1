#ifndef IMOVEL_H
#define IMOVEL_H

#include "Endereco.h"

using namespace std;

class Imovel
{
    private:
        double valor;
        Endereco endereco; //Fazer Classe Endereco
        int tipoOferta;
        string descricao;

    public:
        Imovel();
        virtual ~Imovel();

        void setValor(double);
        void setTipoOferta(int);

        double getValor();
        int getTipoOferta();
        Endereco getEndereco();
        string getDescricao();
}