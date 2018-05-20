#include "casa.h"
#include <iostream>

casa::casa(int numPavim, int numQuartos, double areaTerreno, double areaConstruida):Imovel(numPavim, numQuartos, areaTerreno, areaConstruida){
	this->numPavim = numPavim;
	this->numQuartos = numQuartos;
	this->areaTerreno = areaTerreno;
	this->areaConstruida = areaConstruida;
}
