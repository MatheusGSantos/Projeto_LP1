#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <Cadastro.h>
#include <Consulta.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
	system("color F0");
    
    tCadastro aCadastro[100] = {0};
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
        while(1){
            //rodar função de cadastro
            printf("Deseja cadastrar outro?  1-Sim   2-Nao\nR: ");
            scanf("%d", &op);

            if(op == 1){
               continue;
            }else{
                printf("\n1-Fechar  2-Menu Principal\nR: ");
                scanf("%d", &op);
                if(op == 1)
                    break;
                else
                    goto Menu;
            }
        }
    }else if(op == 2){
        system("cls");

        char imov;

        while(1){
            system("cls");
            printf("\t\t\t\tConsultar\n\nQual tipo de imovel deseja consultar?  R: ");
            scanf("%s", &imov);

            //Function Consultation

            printf("\n\n1-Consultar Outro   2-Menu Principal\nR: ");
            scanf("%d", &op);

            if(op == 1){
                continue;
            }else{
                goto Menu;
            }
         }

    }else{
        
        fclose(file);
        printf("Fechando programa...\n\n");
        delay(3000);
        return 0;
    }
    return 0;
