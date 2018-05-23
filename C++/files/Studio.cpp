#include "Studio.h"

Studio::Studio():Imovel(){}
void Studio::getDescricao()
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

	cout << "Area: " << area << endl;
	cout << "Valor do condominio: " << valor << endl;
	cout << "Ar-condicionado disponivel: " << arcond << endl;
	cout << "Internet e TV a cabo disponiveis: " << internet_tv << endl;
	cout << "Lavanderia disponivel: " << lavanderia << endl;
	cout << "Arrumacao/limpeza disponivel: " << limpeza << endl;
	cout << "Recepcao 24h disponivel: " << recep_24h << endl;
	cout << "Piscina disponivel: " << piscina << endl;
	cout << "Sauna disponivel: " << sauna << endl;
	cout << "Ginastica disponivel: " << ginastica << endl;
}
