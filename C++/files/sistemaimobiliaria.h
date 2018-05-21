#ifndef SISTEMAIMOBILIARIA_H_
#define SISTEMAIMOBILIARIA_H_
#include <list>
#include "Imovel.h"
#include "Casa.h"
#include "Apartamento.h"
#include "Flat.h"
#include "Studio.h"
#include "Terreno.h"

class sistemaImobiliaria{
	public:
		std::list<Imovel> imoveis;

		int cadastraImovel();
		std::list<Imovel> getImoveis();
		std::list<std::string> getDescricaoImoveis();
		std::list<Imovel> getImoveisPorTipo();
		std::list<Imovel> getImoveisParaAlugarPorBairro();
		std::list<Imovel> getImoveisParaVenderPorBairro();
		std::list<Imovel> getImoveisPorCidade();
		int Verifica_ID(int ID, std::list <Imovel> imoveis);
};


#endif /*SISTEMAIMOBILIARIA_H_*/
