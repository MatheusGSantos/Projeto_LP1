#include "casa.h"
#include <iostream>

casa::casa(int numPavim, int numQuartos, double areaTerreno, double areaConstruida):Imovel(numPavim, numQuartos, areaTerreno, areaConstruida){
	this->numPavim = numPavim;
	this->numQuartos = numQuartos;
	this->areaTerreno = areaTerreno;
	this->areaConstruida = areaConstruida;
}

void casa::setNumPavim(int numPavim){
	this->numPavim = numPavim;
}
void casa::setNumQuartos(int numQuartos){
	this->numQuartos = numQuartos;
}
void casa::setAreaTerreno(double areaTerreno){
	this->areaTerreno = areaTerreno;
}
void casa::setAreaConstruida(double areaConstruida){
	this->areaConstruida = areaConstruida;
}

int casa::getNumPavim(){
	return numPavim;
}
int casa::getNumQuartos(){
	return numQuartos;
}
double casa::getAreaTerreno(){
	return areaTerreno;
}
double casa::getAreaConstruida(){
	return areaConstruida;
}
