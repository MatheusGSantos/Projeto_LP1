#ifndef TERRENO_H
#define TERRENO_H

#include "Imovel.h"

class Terreno : public Imovel
{
	public:
		Terreno();
		double area;

		void getDescricao();
};

#endif
