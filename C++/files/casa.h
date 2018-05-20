#ifndef CASA_H_
#define CASA_H_

class casa: public imovel{

	public:
		casa(int, int, double, double);

		int numPavim;
		int numQuartos;
		double areaTerreno;
		double areaConstruida;
}

#endif /*CASA_H_*/