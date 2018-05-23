#include "Casa.h"
#include <iostream>

Casa::Casa():Imovel(){}

void Casa::getDescricao()
{
	cout << "ID - " << id << endl;
	cout << tipoImovel << endl;

	cout << "Cidade: " << endereco->cidade << endl;
	cout << "Bairro: " << endereco->bairro << endl;
	cout << "Logradouro: " << endereco->logradouro << endl;
	cout << "CEP: " << endereco->cep << endl;
	cout << "Numero: " << endereco->numero << endl;

	cout << "Disponibilidade: " << tipoOferta << endl;
	cout << "Valor: R$" << valor << ",00" << endl;

	cout << "Numero de pavimentos: " << numPavim << endl;
	cout << "Numero de quartos: " << numQuartos << endl;
	cout << "Area do terreno: " << areaTerreno << endl;
	cout << "Informe a area construida: " << areaConstruida << endl;
}