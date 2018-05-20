#include "Casa.h"
#include <iostream>

Casa::Casa(int numPavim, int numQuartos, double areaTerreno, double areaConstruida):Imovel(){
	this->numPavim = numPavim;
	this->numQuartos = numQuartos;
	this->areaTerreno = areaTerreno;
	this->areaConstruida = areaConstruida;
}
