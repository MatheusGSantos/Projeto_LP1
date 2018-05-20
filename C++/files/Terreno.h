#ifndef TERRENO_H
#define TERRENO_H

#include <imovel.h>

class Terreno : public Imovel
{
	public:
		Terreno(double area);
		~Terreno();
};

#endif
