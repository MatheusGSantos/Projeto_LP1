#include "Terreno.h"

Terreno::Terreno() : Imovel(){}

void Terreno::getDescricao()
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

	cout << "Area do terreno: " << area << endl;
}
