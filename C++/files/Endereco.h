#ifndef ENDERECO_H
#define ENDERECO_H

#include <iostream>

using namespace std;

class Endereco
{
	public:
		Endereco(string logradouro, int numero, string bairro, string cidade, string cep);
		virtual ~Endereco();
		
		string logradouro;
		int numero;
		string bairro;
		string cidade;
		string cep;
};

#endif
