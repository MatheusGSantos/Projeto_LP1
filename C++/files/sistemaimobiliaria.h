#ifndef SISTEMAIMOBILIARIA_H_
#define SISTEMAIMOBILIARIA_H_
#include <list>
#include "Imovel.h"
#include "Casa.h"
#include "Apartamento.h"
#include "Flat.h"
#include "Studio.h"
#include "Terreno.h"

#define MAX_CAPACITY 100

class sistemaImobiliaria{
	public:
		Imovel *imoveis[MAX_CAPACITY];
		int count;

		sistemaImobiliaria();
		void cadastraImovel(Imovel *imoveis);
		void getImoveis();
		void getDescricaoImoveis();
		void getImoveisPorTipo();
		void getImoveisParaAlugarPorBairro();
		void getImoveisParaVenderPorBairro();
		void getImoveisPorCidade();
};


#endif /*SISTEMAIMOBILIARIA_H_*/
