#include <stdio.h>
#include <stdlib.h>

void displayMenu()
{
    system("color F0");
    int op;

    system("cls");
    printf("\t\t\t\tImobiliaria Nilza\n\n");


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
                    displayMenu();
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
                displayMenu();
            }
         }

    }else{
        printf("Fechando programa...\n\n");
        getchar();
        return 0;
    }


    return 0;
}

int main()
{
    displayMenu();
    return 0;
}
