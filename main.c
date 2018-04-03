#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <Windows.h>
#include <Struct.h>
#include <Cadastro.h>
#include <Consulta.h>


tCadastro aCadastro[100] = {0};

int main()
{
    setlocale(LC_ALL,"Portuguese");
	system("color F0");
    
    FILE *file = fopen("dados.dat","rb+");
    read_data_struct(aCadastro, file);
    
    Menu:          //menu
        int op;
        system("cls");
        printf("\t\t\t\tImobiliaria X\n\n");


        printf("1- Cadastrar;\n2- Consultar;\n3- Apagar Processo\n0- Fechar o programa;\n\nEscolha: ");
        scanf("%d", &op);

        if(op == 1){
            system("cls");
            printf("\t\t\t\tCadastrar\n\n");
            Cadastro:
                if(Cadastro() ){
                    goto Cadastro;
                }
                save_data_struct(file);
                printf("Deseja cadastrar outro?\n1-Sim\t2-Nao\nR: ");
                scanf("%d", &op);

                if(op == 1){
                    goto Cadastro;
                }else{
                    goto Menu;
                }
        }else if(op == 2){
            Consulta:
                system("cls");
                printf("1-Todos os imóveis\n2-Descrição todos os imóveis\n"
                    "3-Disponíveis para venda por tipo\n4-Disponíveis para aluguel por tipo\n"
                    "\n5-Disponíveis para venda por bairro\n6-Disponíveis para aluguel por tipo\n"
                    "\n7-Descrição de todos disponíveis por cidade\n0-Voltar\n\nR: ");

                int op = 0;
                scanf("%d", &op);
                switch(op){
                    case 1:
                        system("cls");
                        show_all();
                        break;
                    case 2:
                        system("cls");
                        show_descricao();
                        break;
                    case 3:
                        system("cls");
                        printf("Informe o tipo a ser consultado:");
                        consultaVendaTipo();
                        break;
                    case 4:
                        system("cls");
                        printf("Informe o tipo a ser consultado:");
                        consultaAlugaTipo();
                        break;
                    case 5:
                        system("cls");
                        printf("Informe o bairro a ser consultado:");
                        VendaBairro();
                        break;
                    case 6:
                        system("cls");
                        printf("Informe o bairro a ser consultado:");
                        AluguelBairro()
                        break;
                    case 7:
                        system("cls");
                        printf("Informe a cidade a ser consultada:");
                        DispCidade();
                        break;
                    default:
                        goto Menu;
                }

                printf("\n\n1-Consultar Novamente\t2-Menu Principal\nR: ");
                scanf("%d", &op);

                if(op == 1){
                    goto Consulta;
                }else{
                    goto Menu;
                }
        }else if(op == 3){
            Apagar:
                int ID = 0;
                printf("Informe o ID a do processo(0 para cancelar): ");
                scanf("%d", &ID);
                if(ID == 0){
                    goto Menu;
                }else
                    Apaga_Cadastro(ID);

                printf("\n\n1-Apagar outro cadastro\t2-Menu Principal\nR: ");
                scanf("%d", &op);

                if(op == 1){
                    goto Apagar;
                }else{
                    goto Menu;
                }

        }else{   
            fclose(file);
            printf("Fechando programa...\n\n");
            Sleep(3000);
            return 0;
        }
        return 0;
}