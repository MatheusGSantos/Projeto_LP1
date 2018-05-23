#include "sistemaimobiliaria.h"
#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

sistemaImobiliaria::sistemaImobiliaria()
{
	for (int i = 0; i < MAX_CAPACITY; i++) {
		imoveis[i] = new Imovel();
	}
	count = 0;
}

void sistemaImobiliaria::cadastraImovel(Imovel *im){
	delete imoveis[count];
	imoveis[count] = im;
	count++;
}

void sistemaImobiliaria::getImoveis()
{
    bool c = false;
    for (int i = 0; i < MAX_CAPACITY; i++) {
        if (imoveis [i]->id != 0) {
            cout << imoveis[i]->id << " - " << imoveis[i]->tipoImovel << endl;
            c = true;
        }
    }
    if (!c)
        cout<<"0 itens encontrados.\n";
}

void sistemaImobiliaria::getDescricaoImoveis()
{
	bool flag = true;
	for (int i = 0; i < MAX_CAPACITY; i++) {
		if (imoveis[i]->id != 0) {
			imoveis[i]->getDescricao();
			flag = false;
			cout << endl;
		}
    }
	if(flag)
		cout << "0 itens encontrados.\n";
}

void sistemaImobiliaria::getImoveisPorTipo()
{
	int num, i;
	bool flag = 1;

	cout << "Escolha um tipo de imovel para consultar: " << endl;
	cout << "1-Casa   2-Apartamento   3-Flat   4-Studio   5-Terreno\n";
	cout << "Resposta - ";
	mark:
	cin >> num;
	cin.ignore();

	string str;

	switch (num) {
	case 1:
		str = "casa";
		break;
	case 2:
		str = "apartamento";
		break;
	case 3:
		str = "flat";
		break;
	case 4:
		str = "studio";
		break;
	case 5:
		str = "terreno";
		break;
	default:
		cout << "Numero indisponivel! Digite outro: \n";
		goto mark;
	}

	for (i = 0; i < MAX_CAPACITY; i++)
	{
		if (imoveis[i]->tipoImovel == str)
		{
			cout << "ID-" << imoveis[i]->id << endl;
			flag = 0;
		}
	}
	if(flag)
        cout << "0 itens encontrados." << endl;
}



void sistemaImobiliaria::getImoveisParaAlugarPorBairro()
{
	string bairro;
	bool flag = 1;

	int i;

	getline(cin, bairro);

	for (i = 0; i < MAX_CAPACITY; i++)
	{
		if (imoveis[i]->tipoOferta == "aluguel" && imoveis[i]->endereco->bairro == bairro)
		{
			cout << "ID-" << imoveis[i]->id << endl;
			flag = 0;
		}
	}
	if (flag)
		cout << "0 itens encontrados." << endl;
}

void sistemaImobiliaria::getImoveisParaVenderPorBairro()
{
	string bairro;
	bool flag = 1;

	int i;

	getline(cin, bairro);

	for (i = 0; i < MAX_CAPACITY; i++)
	{
		if (imoveis[i]->tipoOferta == "venda" && imoveis[i]->endereco->bairro == bairro)
		{
			cout << "ID-" << imoveis[i]->id << endl;
			flag = 0;
		}
	}
	if (flag)
		cout << "0 itens encontrados." << endl;
}

void sistemaImobiliaria::getImoveisPorCidade()
{
	string cidade;
	bool flag = 1;

	int i;

	getline(cin, cidade);

	for (i = 0; i < MAX_CAPACITY; i++)
	{
		if (imoveis[i]->endereco->cidade == cidade)
		{
			cout << "ID-" << imoveis[i]->id << ": " << imoveis[i]->tipoOferta << endl;
			flag = 0;
		}
	}
	if (flag)
		cout << "0 itens encontrados." << endl;
}

