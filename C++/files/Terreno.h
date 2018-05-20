#ifndef TERRENO_H
#define TERRENO_H

#include "Imovel.h"

class Terreno : public Imovel
{
	public:
		double area;
		Terreno(double area);
		~Terreno();
};

#endif
