#include "casa.h"
#include <iostream>

apartamento::apartamento(std::string posicao, int numQuartos, double valorCondominio, int vagasGaragem, double area):imovel(posicao, numQuartos, valorCondominio, vagasGaragem, area){
	this->posicao = posicao;
	this->numQuartos = numQuartos;
	this->valorCondominio = valorCondominio;
	this->vagasGaragem = vagasGaragem;
	this->area = area;
}

