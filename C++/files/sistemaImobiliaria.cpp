#include "sistemaimobiliaria.h"
#include <list>
#include <iostream>
#include <string>
#include <iterator>
#include <windows.h>

using namespace std;

int sistemaImobiliaria::Verifica_ID(int ID, list <Imovel> imoveis)
{
    int count = 0;
    list <Imovel> :: iterator it;
    for(it = imoveis.begin(); it != imoveis.end(); it++){
        if((*it).id == ID){
            count++;
            if(count == 1){
                    cout<<"ID ja cadastrado. Tente novamente\n";
                    Sleep(2000);
                    return 1;
            }
        }
    }
    return 0;
}

int sistemaImobiliaria::cadastraImovel(){

    int id;

	cout <<"Informe o ID da transacao: ";
	cin >> id;
	cin.ignore();

	if(Verifica_ID(id, imoveis))
    {
		return 1;
	}

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
		cin >> pont->valorCondominio;

		cout <<"Informe o numero de vagas na garagem: ";
		cin >> pont->vagasGaragem;
		cin.ignore();

	}else if(tipo == "terreno"){
		Terreno *pont = new Terreno();

		cout <<"Informe a area do terreno: ";
		cin >> pont->area;
		cin.ignore();

	}else if(tipo == "flat"){
		Flat *pont = new Flat();

		cout <<"Informe a area: ";
		cin >> pont->area;

		cout <<"Informe o valor do condominio: ";
		cin >> pont->valor;
		cin.ignore();

		cout <<"Dispoe de ar-condicionado? (s - sim, n - nao)";
		cin >> pont->arcond;

		cout <<"Dispoe de internet e TV a cabo? (s - sim, n - nao)";
		cin >> pont->internet_tv;

		cout <<"Dispoe de lavanderia? (s - sim, n - nao)";
		cin >> pont->lavanderia;

		cout <<"Dispoe de arrumacao/limpeza? (s - sim, n - nao)";
		cin >> pont->limpeza;

		cout <<"Dispoe de recepcao 24h? (s - sim, n - nao)";
		cin >> pont->recep_24h;

	}else if(tipo == "studio"){
		Studio *pont = new Studio();

		cout <<"Informe a area: ";
		cin >> pont->area;
		cin.ignore();

		cout <<"Informe o valor do condominio: ";
		cin >> pont->valor;
		cin.ignore();

		cout <<"Dispoe de ar-condicionado? (s - sim, n - nao)";
		cin >> pont->arcond;

		cout <<"Dispoe de internet e TV a cabo? (s - sim, n - nao)";
		cin >> pont->internet_tv;

		cout <<"Dispoe de lavanderia? (s - sim, n - nao)";
		cin >> pont->lavanderia;

		cout <<"Dispoe de arrumacao/limpeza? (s - sim, n - nao)";
		cin >> pont->limpeza;

		cout <<"Dispoe de recepcao 24h? (s - sim, n - nao)";
		cin >> pont->recep_24h;

		cout <<"Dispoe de piscina? (s - sim, n - nao)";
		cin >> pont->piscina;

		cout <<"Dispoe de sauna? (s - sim, n - nao)";
		cin >> pont->sauna;

		cout <<"Dispoe de ginastica? (s - sim, n - nao)";
		cin >> pont->ginastica;
	}else{
		cout <<"Tipo invalido. Tente novamente\n";
		Sleep(2000);
		return 1;
	}
	cout <<"Informe o nome da cidade: ";
	getline(cin, pont->endereco->cidade);

	cout <<"Informe o nome do bairro: ";
	getline(cin, pont->endereco->bairro);

	cout << "Informe o Logradouro: ";
	getline(cin, pont->endereco->logradouro);

	cout <<"Informe o CEP: ";
	getline(cin, pont->endereco->cep);

	cout <<"Informe o numero do imovel: ";
	cin >> pont->endereco->numero;
	cin.ignore();

	cout <<"Informe se ele esta disponivel para aluguel ou venda: ";
	getline(cin, pont->tipoOferta);


	cout <<"Informe o valor do imovel: ";
	cin >> pont->valor;

	pont->id = id;

	pont->tipo = tipo;

	imoveis.push_back(*pont);

	return 0;
}

void sistemaImobiliaria::getImoveis()
{
    list <int> :: iterator it =  imoveis.begin();

    if(imoveis.size() == 0)
        cout << "0 itens encontrados.\n";

    while(it != imoveis.end()){
        cout << *it->id << " - " << *it->tipo << endl;
        it++;
    }
}

void sistemaImobiliaria::getDescricaoImoveis()
{
     list <int> :: iterator it =  imoveis.begin();

    if(imoveis.size() == 0)
        cout << "0 itens encontrados.\n";

    while(it != imoveis.end()){
        cout << "ID - " << *it->id << endl;
        cout << *it->tipo << endl;

        cout << "Cidade: " << *it.endereco->cidade << endl;
        cout << "Bairro: " << *it.endereco->bairro << endl;
        cout << "Logradouro: " << *it.endereco->logradouro << endl;
        cout << "CEP: " << *it.endereco->cep << endl;
        cout << "Numero: " << *it.endereco->numero << endl;

        cout << "Disponibilidade: " << *it -> tipoOferta << endl;
        cout << "Valor: R$" << *it -> valor << ",00" << endl;

        if(*it->tipo == "casa"){
            cout <<"Numero de pavimentos: " << *it->numPavim << endl;
            cout <<"Numero de quartos: "  << *it->numQuartos << endl;
            cout <<"Area do terreno: " << *it->areaTerreno << endl;
            cout <<"Informe a area construida: " << *it->areaConstruida << endl;

        } else if(*it->tipo == "apartamento"){
                cout <<"Area do apartamento: " << *it->area << endl;
                cout <<"Numero de quartos: "<< *it->numQuartos << endl;
                cout <<"Posicao: "<< *it->posicao << endl;
                cout <<"Valor do condominio: "<< *it->valorCondominio << endl;
                cout <<"Numero de vagas na garagem: "<< *it->vagasGaragem << endl;

        }else if(*it->tipo == "terreno"){
                cout <<"Area do terreno: "<< *it->area << endl;

        }else if(*it->tipo == "flat"){
                cout <<"Area: "<< *it->area << endl;
                cout <<"Valor do condominio: "<< *it->valor << endl;
                cout <<"Ar-condicionado disponivel: "<< *it->arcond << endl;
                cout <<"Internet e TV a cabo disponiveis: "<< *it->internet_tv << endl;
                cout <<"Lavanderia disponivel: "<< *it->lavanderia << endl;
                cout <<"Arrumacao/limpeza disponivel: "<< *it->limpeza << endl;
                cout <<"Recepcao 24h disponivel: "<< *it->recep_24h << endl;

        }else if(*it->tipo == "studio"){
                cout <<"Area: "<< *it->area << endl;
                cout <<"Valor do condominio: "<< *it->valor << endl;
                cout <<"Ar-condicionado disponivel: "<< *it->arcond << endl;
                cout <<"Internet e TV a cabo disponiveis: "<< *it->internet_tv << endl;
                cout <<"Lavanderia disponivel: "<< *it->lavanderia << endl;
                cout <<"Arrumacao/limpeza disponivel: "<< *it->limpeza << endl;
                cout <<"Recepcao 24h disponivel: "<< *it->recep_24h << endl;
                cout <<"Piscina disponivel: " << *it->piscina<< endl;
                cout <<"Sauna disponivel: " << *it->sauna << endl;
                cout <<"Ginastica disponivel: " << *it->ginastica << endl;
        }
        it++;
    }
}

void sistemaImobiliaria::getImoveisPorTipo()
{
    string tipo;

    getline(cin, tipo);

     list <int> :: iterator it =  imoveis.begin();

    if(imoveis.size() == 0)
        cout << "0 itens encontrados.\n";

    while(it != imoveis.end()){
        if(*it->tipo == tipo)
            cout << *it->id<< " - " << *it->tipoOferta << endl;
        it++;
    }
}

void sistemaImobiliaria::getImoveisParaAlugarPorBairro()
{
    string bairro;

    getline(cin, bairro);

    list <int> :: iterator it =  imoveis.begin();

    if(imoveis.size() == 0)
        cout << "0 itens encontrados.\n";

    while(it != imoveis.end()){
        if(*it->bairro == bairro && *it->tipoOferta == "aluguel"){
                cout << *it->id << " - " << *it->tipo << endl;
        }
        it++;
    }
}

void sistemaImobiliaria::getImoveisParaVenderPorBairro()
{
    string bairro;

    getline(cin, bairro);

    list <int> :: iterator it =  imoveis.begin();

    if(imoveis.size() == 0)
        cout << "0 itens encontrados.\n";

    while(it != imoveis.end()){
        if(*it->bairro == bairro && *it->tipoOferta == "venda"){
                cout << *it->id << " - " << *it->tipo << endl;
        }
        it++;
    }
}

void sistemaImobiliaria::getImoveisPorCidade()
{
    string cidade;

    getline(cin, cidade);

    list <int> :: iterator it =  imoveis.begin();

    if(imoveis.size() == 0)
        cout << "0 itens encontrados.\n";

    while(it != imoveis.end()){
        if(*it->cidade == cidade){
                cout << *it->id << " - " << *it->tipo << endl;
        }
        it++;
    }
}

