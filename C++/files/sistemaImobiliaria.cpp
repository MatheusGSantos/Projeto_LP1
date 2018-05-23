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
	count = 0;
	for (Imovel *i : imoveis) {
		if (i->id != 0) {
			cout << i->id << " - " << i->tipoImovel << endl;
			count++;
		}
	}
	if (!count)
		cout<<"0 itens encontrados.\n";
}

void sistemaImobiliaria::getDescricaoImoveis()
{
     /*list <int> :: iterator it =  imoveis.begin();

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
    }*/
}

void sistemaImobiliaria::getImoveisPorTipo()
{
    /*string tipo;

    getline(cin, tipo);

     list <int> :: iterator it =  imoveis.begin();

    if(imoveis.size() == 0)
        cout << "0 itens encontrados.\n";

    while(it != imoveis.end()){
        if(*it->tipo == tipo)
            cout << *it->id<< " - " << *it->tipoOferta << endl;
        it++;
    }*/
}

void sistemaImobiliaria::getImoveisParaAlugarPorBairro()
{
    /*string bairro;

    getline(cin, bairro);

    list <int> :: iterator it =  imoveis.begin();

    if(imoveis.size() == 0)
        cout << "0 itens encontrados.\n";

    while(it != imoveis.end()){
        if(*it->bairro == bairro && *it->tipoOferta == "aluguel"){
                cout << *it->id << " - " << *it->tipo << endl;
        }
        it++;
    }*/
}

void sistemaImobiliaria::getImoveisParaVenderPorBairro()
{
    /*string bairro;

    getline(cin, bairro);

    list <int> :: iterator it =  imoveis.begin();

    if(imoveis.size() == 0)
        cout << "0 itens encontrados.\n";

    while(it != imoveis.end()){
        if(*it->bairro == bairro && *it->tipoOferta == "venda"){
                cout << *it->id << " - " << *it->tipo << endl;
        }
        it++;
    }*/
}

void sistemaImobiliaria::getImoveisPorCidade()
{
    /*string cidade;

    getline(cin, cidade);

    list <int> :: iterator it =  imoveis.begin();

    if(imoveis.size() == 0)
        cout << "0 itens encontrados.\n";

    while(it != imoveis.end()){
        if(*it->cidade == cidade){
                cout << *it->id << " - " << *it->tipo << endl;
        }
        it++;
    }*/
}