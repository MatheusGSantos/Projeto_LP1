#include "Endereco.h"

using namespace std;

Endereco::Endereco(string logradouro, int numero, string bairro, string cidade, string cep)
{
	this->logradouro = logradouro;
	this->numero = numero;
	this->bairro = bairro;
	this->cidade = cidade;
	this->cep = cep;
}

Endereco::~Endereco()
{
}
