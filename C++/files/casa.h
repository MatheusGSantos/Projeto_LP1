#ifndef CASA_H_
#define CASA_H_

class casa: public Imovel{

	public:
		casa(int, int, double, double);

		void setNumPavim(int);
		void setNumQuartos(int);
		void setAreaTerreno(double);
		void setAreaContruida(double);

		int getNumPavim();
		int getNumQuartos();
		double getAreaTerreno();
		double getAreaConstruida();
		
private:
		int numPavim;
		int numQuartos;
		double areaTerreno;
		double areaConstruida;
}

#endif /*CASA_H_*/
