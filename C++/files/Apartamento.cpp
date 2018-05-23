#include "Apartamento.h"
#include <string>

Apartamento::Apartamento() : Imovel(){}

void Apartamento::getDescricao()
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
	cout << "Area do apartamento: " << area << endl;
	cout << "Numero de quartos: " << numQuartos << endl;
	cout << "Posicao: " << posicao << endl;
	cout << "Valor do condominio: " << valorCondominio << endl;
	cout << "Numero de vagas na garagem: " << vagasGaragem << endl;
}