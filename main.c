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


    printf("1- Cadastrar;\n2- Consultar;\n0- Fechar o programa;\n\nEscolha: ");
    scanf("%d", &op);

    if(op == 1){
        system("cls");
        printf("\t\t\t\tCadastrar\n\n");
        Cadastro:
            //rodar função de cadastro
            printf("Deseja cadastrar outro?  1-Sim   2-Nao\nR: ");
            scanf("%d", &op);

            if(op == 1){
               goto Cadastro;
            }else{
                goto Menu;
            }
    }else if(op == 2){
        system("cls");

        char imov;

        Consulta:
            system("cls");
            printf("\n\nR: ");

            //Function Consultation

            printf("\n\n1-Consultar Outro   2-Menu Principal\nR: ");
            scanf("%d", &op);

            if(op == 1){
                goto Consulta;
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
