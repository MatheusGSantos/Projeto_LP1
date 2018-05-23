#include <iostream>
#include <string>
#include "sistemaimobiliaria.h"
#include <windows.h>

using namespace std;

void cadastro_generico(Imovel *im, int ID, string ti);

int main()
{

	int op;
	sistemaImobiliaria si;

	Menu:
		system("cls");
	    cout <<"\t\t\t\tImobiliaria NewZa\n\n";


	    cout << "1- Cadastrar;\n2- Consultar;\n0- Fechar o programa;\n\nEscolha: ";
	    cin >> op;

		if(op == 1){
            system("cls");
            cout<<"\t\t\t\tCadastrar\n\n";
            
			Cadastro:
				int id;
				string tipo;
				
				//Informar ID
				cout << "Informe o ID da transacao: ";
				cin >> id;
				cin.ignore();
				
				//Informar tipo
				cout << "Informe o tipo do imovel: ";
				getline(cin, tipo);

				//Cadastro por tipo
				if (tipo == "casa") {
					Casa *pont = new Casa();

					cout << "Informe o numero de pavimentos: ";
					cin >> pont->numPavim;
					cin.ignore();

					cout << "Informe o numero de quartos: ";
					cin >> pont->numQuartos;
					cin.ignore();

					cout << "Informe a area do terreno: ";
					cin >> pont->areaTerreno;
					cin.ignore();

					cout << "Informe a area construida: ";
					cin >> pont->areaConstruida;
					cin.ignore();

					//finalizar cadastro
					cadastro_generico(pont, id, tipo);
					si.cadastraImovel(pont);
				}
				else if (tipo == "apartamento") {
					Apartamento *pont = new Apartamento();

					cout << "Informe a area do apartamento: ";
					cin >> pont->area;
					cin.ignore();

					cout << "Informe o numero de quartos: ";
					cin >> pont->numQuartos;
					cin.ignore();

					cout << "Informe a posicao: ";
					getline(cin, pont->posicao);

					cout << "Informe o valor do condominio: ";
					cin >> pont->valorCondominio;
					cin.ignore();

					cout << "Informe o numero de vagas na garagem: ";
					cin >> pont->vagasGaragem;
					cin.ignore();

					//finalizar cadastro
					cadastro_generico(pont, id, tipo);
					si.cadastraImovel(pont);
				}
				else if (tipo == "terreno") {
					Terreno *pont = new Terreno();

					cout << "Informe a area do terreno: ";
					cin >> pont->area;
					cin.ignore();

					//finalizar cadastro
					cadastro_generico(pont, id, tipo);
					si.cadastraImovel(pont);
				}
				else if (tipo == "flat") {
					Flat *pont = new Flat();

					cout << "Informe a area: ";
					cin >> pont->area;
					cin.ignore();

					cout << "Informe o valor do condominio: ";
					cin >> pont->valor;
					cin.ignore();

					cout << "Dispoe de ar-condicionado? (s - sim, n - nao) ";
					cin >> pont->arcond;
					cin.ignore();

					cout << "Dispoe de internet e TV a cabo? (s - sim, n - nao) ";
					cin >> pont->internet_tv;
					cin.ignore();

					cout << "Dispoe de lavanderia? (s - sim, n - nao) ";
					cin >> pont->lavanderia;
					cin.ignore();

					cout << "Dispoe de arrumacao/limpeza? (s - sim, n - nao) ";
					cin >> pont->limpeza;
					cin.ignore();

					cout << "Dispoe de recepcao 24h? (s - sim, n - nao) ";
					cin >> pont->recep_24h;
					cin.ignore();

					//finalizar cadastro
					cadastro_generico(pont, id, tipo);
					si.cadastraImovel(pont);
				}
				else if (tipo == "studio") {
					Studio *pont = new Studio();

					cout << "Informe a area: ";
					cin >> pont->area;
					cin.ignore();

					cout << "Informe o valor do condominio: ";
					cin >> pont->valor;
					cin.ignore();

					cout << "Dispoe de ar-condicionado? (s - sim, n - nao) ";
					cin >> pont->arcond;
					cin.ignore();

					cout << "Dispoe de internet e TV a cabo? (s - sim, n - nao) ";
					cin >> pont->internet_tv;
					cin.ignore();

					cout << "Dispoe de lavanderia? (s - sim, n - nao) ";
					cin >> pont->lavanderia;
					cin.ignore();

					cout << "Dispoe de arrumacao/limpeza? (s - sim, n - nao) ";
					cin >> pont->limpeza;
					cin.ignore();

					cout << "Dispoe de recepcao 24h? (s - sim, n - nao) ";
					cin >> pont->recep_24h;
					cin.ignore();

					cout << "Dispoe de piscina? (s - sim, n - nao) ";
					cin >> pont->piscina;
					cin.ignore();

					cout << "Dispoe de sauna? (s - sim, n - nao) ";
					cin >> pont->sauna;
					cin.ignore();

					cout << "Dispoe de ginastica? (s - sim, n - nao) ";
					cin >> pont->ginastica;
					cin.ignore();
					
					//finalizar cadastro
					cadastro_generico(pont, id, tipo);
					si.cadastraImovel(pont);
				}
				else {
					cout << "Tipo invalido. Tente novamente\n";
					Sleep(2000);
					goto Cadastro;
				}

                //save_data_struct(file);
                cout << "Deseja cadastrar outro?\n1-Sim\t2-Nao\nR: ";
                cin >> op;

                if(op == 1){
					system("cls");
					goto Cadastro;
                }else{
                    goto Menu;
                }
        }else if(op == 2){
            Consulta:
                system("cls");
                cout << "1-Todos os imoveis\n2-Descricao todos os imoveis\n"
                    "3-Disponiveis por tipo\n4-Disponiveis para venda por bairro\n5-Disponiveis para aluguel por bairro\n"
                    "6-Descricao de todos disponiveis por cidade\n0-Voltar\n\nR: ";

                int op = 0;
                cin >> op;
                cin.ignore();

                switch(op){
                    case 1:
                        system("cls");
                        si.getImoveis();
                        break;
                    case 2:
                        system("cls");
                        si.getDescricaoImoveis();
                        break;
                    case 3:
                        system("cls");
                        cout <<"Informe o tipo a ser consultado:";
                        si.getImoveisPorTipo();
                        break;
                    case 4:
                        system("cls");
                        cout <<"Informe o bairro a ser consultado:";
                        si.getImoveisParaVenderPorBairro();
                        break;
                    case 5:
                        system("cls");
                        cout <<"Informe o bairro a ser consultado:";
                        si.getImoveisParaAlugarPorBairro();
                        break;
                    case 6:
                        system("cls");
                        cout <<"Informe a cidade a ser consultada:";
                        si.getImoveisPorCidade();
                        break;
                    default:
                        goto Menu;
                }

                cout <<"\n\n1-Consultar Novamente\t2-Menu Principal\nR: ";
                cin >> op;

                if(op == 1){
                    goto Consulta;
                }else{
                    goto Menu;
                }
        }

        //Fechar arquivo...

    return 0;
}



void cadastro_generico(Imovel *im, int ID, string ti)
{
	cout << "Informe o nome da cidade: ";
	getline(cin, im->endereco->cidade);

	cout << "Informe o nome do bairro: ";
	getline(cin, im->endereco->bairro);

	cout << "Informe o Logradouro: ";
	getline(cin, im->endereco->logradouro);

	cout << "Informe o CEP: ";
	getline(cin, im->endereco->cep);

	cout << "Informe o numero do imovel: ";
	cin >> im->endereco->numero;
	cin.ignore();

	cout << "Informe se ele esta disponivel para aluguel ou venda: ";
	getline(cin, im->tipoOferta);

	cout << "Informe o valor do imovel: ";
	cin >> im->valor;
	cin.ignore();

	im->id = ID;
	im->tipoImovel = ti;
}

