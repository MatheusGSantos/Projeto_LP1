#include <iostream>
#include <string>
#include "sistemaimobiliaria.h"

using namespace std;

int main()
{

	int op;

	Menu:
		system("cls");
	        cout <<"\t\t\t\tImobiliaria NewZa\n\n";


	        cout << "1- Cadastrar;\n2- Consultar;\n3- Apagar Processo\n0- Fechar o programa;\n\nEscolha: ";
	        cin >> op;

if(op == 1){
            system("cls");
            cout<<"\t\t\t\tCadastrar\n\n";
            Cadastro:
                if(Cadastro() ){
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
                    "3-Disponiveis para venda por tipo\n4-Disponiveis para aluguel por tipo"
                    "\n5-Disponiveis para venda por bairro\n6-Disponiveis para aluguel por bairro\n"
                    "7-Descricao de todos disponiveis por cidade\n0-Voltar\n\nR: ";

                int op = 0;
                cin >> op;
                getchar();
                switch(op){
                    case 1:
                        system("cls");
                        //show_all();
                        break;
                    case 2:
                        system("cls");
                        //show_descricao();
                        break;
                    case 3:
                        system("cls");
                        cout <<"Informe o tipo a ser consultado:";
                        // consultaVendaTipo();
                        break;
                    case 4:
                        system("cls");
                        cout << "Informe o tipo a ser consultado:";
                        //consultaAlugaTipo();
                        break;
                    case 5:
                        system("cls");
                        cout <<"Informe o bairro a ser consultado:";
                        VendaBairro();
                        break;
                    case 6:
                        system("cls");
                        cout <<"Informe o bairro a ser consultado:";
                        AluguelBairro();
                        break;
                    case 7:
                        system("cls");
                        cout <<"Informe a cidade a ser consultada:";
                        DispCidade();
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
        }else if(op == 3){
            Apagar:
                cout <<"Informe o ID a do processo(0 para cancelar): ";
                cin >> ID;
                if(ID == 0){
                    goto Menu;
                }else
                    Apaga_Cadastro(ID);
                    save_data_struct(file);

                cout <<"\n\n1-Apagar outro cadastro\t2-Menu Principal\nR: ";
                cin >> op;

                if(op == 1){
                    goto Apagar;
                }else{
                    goto Menu;
                }

        //Fechar arquivo...

    return 0;
}

