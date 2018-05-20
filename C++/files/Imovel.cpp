#include "Imovel.h"

Imovel::Imovel(){
    valor = 0.0;
    endereco = "";
    tipoOferta = 0; //0 = Aluga // 1 = Vende
}
double Imovel::getValor(){
    return valor;
}
int Imovel::getTipoOferta(){
    return tipoOferta;
}

Endereco Imovel::getEndereco(){
    return endereco;
}
std::string Imovel::getDescricao(){
    return descricao;
}


Imovel::~Imovel()
{
    //dtor
}
