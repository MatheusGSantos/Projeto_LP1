#include "Imovel.h"

Imovel::Imovel(){
    valor = 0.0;
    descricao = "";
    tipoOferta = 0; //0 = Aluga // 1 = Vende
	endereco = new Endereco("", 0, "", "", "");
}
double Imovel::getValor(){
    return valor;
}
int Imovel::getTipoOferta(){
    return tipoOferta;
}

Endereco Imovel::getEndereco(){
    return *endereco;
}
std::string Imovel::getDescricao(){
    return descricao;
}


Imovel::~Imovel()
{
    //dtor
}
