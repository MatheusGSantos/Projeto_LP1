#include "sistemaimobiliaria.h"
#include <list>
#include <iostream>
#include "Imovel.h"
#include "Casa.h"
#include "Apartamento.h"
#include "Flat.h"
#include "Studio.h"
#include "Terreno.h"
#include <string>

using namespace std;
sistemaimobiliaria::sistemaimobiliaria(){}

void sistemaimobiliaria::cadastraImovel(Imovel i){
	cout <<"Informe o ID da transacao: ";
	cin >> aCadastro[i].ID;
	cin.ignore();

	/*if(Verifica_ID(aCadastro[i].ID)){
		aCadastro[i].ID = 0;
		return 1;
	}*/

	string tipo;

	cout <<"Informe o tipo do imovel: ";
	getline(cin, tipo);

	if(tipo =="casa"){
		Casa *pont = new Casa();

		cout <<"Informe o numero de pavimentos: ";
		cin >> pont->numPavim;

		cout <<"Informe o numero de quartos: ";
		cin >> pont->numQuartos;

		cout <<"Informe a area do terreno: ";
		cin >> pont->areaTerreno;

		cout <<"Informe a area construida: ";
		cin >> pont->areaConstruida;
		cin.ignore();

	}else if(tipo == "apartamento"){
		Apartamento *pont = new Apartamento();

		cout <<"Informe a area do apartamento: ";
		cin >> pont->area;

		cout <<"Informe o numero de quartos: ";
		cin >> pont->numQuartos;

		cout <<"Informe a posicao: ";
		cin.ignore();
		getline(cin, pont->posicao);

		cout <<"Informe o valor do condominio: ";
		cin >> pont->valorConsominio;

		cout <<"Informe o numero de vagas na garagem: ";
		cin >> pont->vagasGaragem;
		cin.ignore();

	}else if(tipo == "TERRENO"){
		Terreno *pont = new Terreno();

		cout <<"Informe a area do terreno: ";
		cin >> pont->area;
		cin.ignore();

	}else if(tipo == "FLAT"){
		Flat *pont = new Flat();

		cout <<"Informe a area do terreno: ";
		cin >> pont->area;

		cout <<"Informe o valor do condominio: ";
		cin >> pont->valor;
		cin.ignore();

		cout <<"Dispoe de ar-condicionado? ";
		getline(cin, pont->arcond)

		cout <<"Dispoe de internet e TV a cabo? ";
		getline(cin, pont->internet_tv)

		cout <<"Dispoe de lavanderia? ";
		getline(cin, pont->lavanderia)

		cout <<"Dispoe de arrumacao/limpeza? ";
		getline(cin, pont->limpeza);

		cout <<"Dispoe de recepcao 24h? ";
		getline(cin, pont->recep_24h);

	}else if(strcmp(tipo == "STUDIO"){
		Studio *pont = new Studio();

		cout <<"Informe a area do terreno: ";
		cin >> pont->area;
		cin.ignore();

		cout <<"Informe o valor do condominio: ";
		cin >> pont->valor;
		cin.ignore();

		cout <<"Dispoe de ar-condicionado? ";
		getline(cin, pont->arcond);

		cout <<"Dispoe de internet e TV a cabo? ";
		getline(cin, pont->internet_tv);

		cout <<"Dispoe de lavanderia? ";
		getline(cin, pont->lavanderia);

		cout <<"Dispoe de arrumacao/limpeza? ";
		getline(cin, pont->limpeza);

		cout <<"Dispoe de recepcao 24h? ";
		getline(cin, pont->recep_24h);

		cout <<"Dispoe de piscina? ";
		getline(cin, pont->piscina);

		cout <<"Dispoe de sauna? ";
		getline(cin, pont->sauna);

		cout <<"Dispoe de ginastica? ";
		getline(cin, pont->ginastica);
	}
	cout <<"Informe o nome da cidade: ";
	getline(cin, i.endereco->cidade);

	cout <<"Informe o nome do bairro: ";
	getline(cin, i.endereco->bairro);

	cout << "Informe o Logradouro: ";
	getline(cin, i.endereco->logradouro);

	cout <<"Informe o CEP: ";
	getline(cin, i.endereco->cep);

	cout <<"Informe o numero do imovel: ";
	cin >> i.endereco->numero;
	cin.ignore();

	string oferta;

	cout <<"Informe se ele esta disponivel para aluguel ou venda: ";
	getline(cin, oferta);


	cout <<"Informe o valor do imovel: ";
	cin >> i.valor;


	
	else{
		cout <<"Tipo invalido. Tente novamente\n";
		Sleep(2000);
		return 1;
	}
	return 0;

}