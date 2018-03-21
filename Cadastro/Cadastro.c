#include <stdio.h>
#include <string.h>

typedef struct Cadastro
{
  int ID;
  char rua[50];
  int numero;
  char bairro[30];
  char CEP[11];
  char cidade[20];
  double valor;
  char disp[10];
  char tipo[13];
  double area;
  double areaC;
  int quartos;
  int pavimentos;
  double aluguel;
  char posicao[50];
  int garagem;

}tCadastro;

int main()
{
  tCadastro aCadastro[100];

  printf("Digite um numero de ID para seu imovel: ");
  scanf("%d", &aCadastro->ID);
  getchar();

  printf("Digite o nome da cidade: ");
  fgets(aCadastro->cidade,20,stdin);
  aCadastro->cidade[strlen(aCadastro->cidade) - 1] = '\0';

  printf("Digite o nome do bairro: ");
  fgets(aCadastro->bairro,30,stdin);
  aCadastro->bairro[strlen(aCadastro->bairro) - 1] = '\0';

  printf("Digite o nome da rua: ");
  fgets(aCadastro->rua,50,stdin);
  aCadastro->rua[strlen(aCadastro->rua) - 1] = '\0';

  printf("Digite o CEP: ");
  fgets(aCadastro->CEP,11,stdin);
  aCadastro->CEP[strlen(aCadastro->CEP) - 1] = '\0';

  printf("Digite o numero do imovel: ");
  scanf("%d", &aCadastro->numero);
  getchar();

  printf("Digite o tipo do imovel: ");
  fgets(aCadastro->tipo,13,stdin);
  aCadastro->tipo[strlen(aCadastro->tipo) - 1] = '\0';
  strupr(aCadastro->tipo);

  printf("Digite se ele esta disponivel para aluguel ou venda: ");
  fgets(aCadastro->disp,10,stdin);
  aCadastro->disp[strlen(aCadastro->disp) - 1] = '\0';

  printf("Digite o valor do imovel: ");
  scanf("%lf", &aCadastro->valor);


  if(strcmp(aCadastro->tipo,"CASA") == 0){
    printf("Digite o numero de pavimentos: ");
    scanf("%d", &aCadastro->pavimentos);

    printf("Digite o numero de quartos: ");
    scanf("%d", &aCadastro->quartos);

    printf("Digite a area do terreno: ");
    scanf("%lf", &aCadastro->area);

    printf("Digite a area da casa: ");
    scanf("%lf", &aCadastro->areaC);
  }
  else if(strcmp(aCadastro->tipo,"APARTAMENTO") == 0){
    printf("Digite a area do apartamento: ");
    scanf("%lf", &aCadastro->area);

    printf("Digite o numero de quartos: ");
    scanf("%d", &aCadastro->quartos);

    printf("Digite a posicao: ");
    fgets(aCadastro->posicao,50,stdin);
    aCadastro->posicao[strlen(aCadastro->posicao) - 1] = '\0';

    printf("Digite o valor do condominio: ");
    scanf("%lf", &aCadastro->valor);

    printf("Digite o numero de vagas na garagem: ");
    scanf("%d", &aCadastro->garagem);

  }else if(strcmp(aCadastro->tipo,"TERRENO") == 0){
    printf("Digite a area do terreno: ");
    scanf("%lf", &aCadastro->area);

  }else
    printf("Tipo invalido\n");

  return 0;
}
