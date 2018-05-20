#include "Apartamento.h"
#include <string>

Apartamento::Apartamento(std::string posicao, int numQuartos, double valorCondominio, int vagasGaragem, double area) : Imovel(){
	this->posicao = posicao;
	this->numQuartos = numQuartos;
	this->valorCondominio = valorCondominio;
	this->vagasGaragem = vagasGaragem;
	this->area = area;
}

