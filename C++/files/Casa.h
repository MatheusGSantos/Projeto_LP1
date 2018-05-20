#ifndef CASA_H
#define CASA_H

#include "Imovel.h"

class Casa : public Imovel
{
	public:
		Casa();

		int numPavim;
		int numQuartos;
		double areaTerreno;
		double areaConstruida;

		/*void setNumPavim(int);
		void setNumQuartos(int);
		void setAreaTerreno(double);
		void setAreaConstruida(double);
		*/
};

#endif
