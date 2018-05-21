#include <iostream>
#include <string>
#include "sistemaimobiliaria.h"
#include <windows.h>

using namespace std;

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
                if(si.cadastraImovel()){
                    goto Cadastro;
                }
                //save_data_struct(file);
                cout << "Deseja cadastrar outro?\n1-Sim\t2-Nao\nR: ";
                cin >> op;

                if(op == 1){
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

