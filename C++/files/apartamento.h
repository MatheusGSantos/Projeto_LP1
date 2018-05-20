#ifndef APARTAMENTO_H
#define APARTAMENTO_H
#include <string>

#include "Imovel.h"

class Apartamento : public Imovel{
	public:
		Apartamento(std::string, int, double, int, double);

		std::string posicao;
		int numQuartos;
		double valorCondominio;
		int vagasGaragem;
		double area;
		
};

#endif
