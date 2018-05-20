#ifndef APARTAMENTO_H_
#define APARTAMENTO_H_

#include <string>
#include "imovel.h"

class Apartamento : public Imovel{
	public:
		Apartamento(std::string, int, double, int, double);

		std::string posicao;
		int numQuartos;
		double valorCondominio;
		int vagasGaragem;
		double area;
		
};

#endif /*APARTAMENTO_H_*/
