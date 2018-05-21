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
		void getImoveis();
		void getDescricaoImoveis();
		void getImoveisPorTipo();
		void getImoveisParaAlugarPorBairro();
		void getImoveisParaVenderPorBairro();
		void getImoveisPorCidade();
		int Verifica_ID(int ID, std::list <Imovel> imoveis);
};


#endif /*SISTEMAIMOBILIARIA_H_*/
