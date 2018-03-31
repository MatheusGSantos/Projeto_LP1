#include <stdio.h>
#include <string.h>

setlocale(LC_ALL,"Portuguese")

typedef struct
{
  int N_pav;
  int N_quartos;
  double area_terreno;
  double area_construida;
}tCasa;


typedef struct
{
  double area;
  int N_quartos;
  char posicao[16];
  int N_andar;
  double valor_cond;
  int vagas_garag;
}tApartamento;


typedef struct
{
  double area;
}tTerreno;


typedef struct
{
  double area;
  double condominio;
  char arCond[4];
  char int_tv[4];
  char lavanderia[4];
  char limpeza[4];
  char atend24[4];
}tFlat;


typedef struct
{
  double area;
  double condominio;
  char arCond[4];
  char int_tv[4];
  char lavanderia[4];
  char limpeza[4];
  char atend24[4];
  char pscina[4];
  char sauna[4];
  char ginastica[4];
}tStudio;


typedef struct
{
  int ID;
  char rua[50];
  int numero;
  char bairro[30];
  char CEP[11];
  char cidade[20];
  double valor;
  char disp[10];
  char tipo[12];
  tCasa casa;
  tApartamento apartamento;
  tTerreno terreno;
  tFlat flat;
  tStudio studio;
}tCadastro;


int Cadastro(tCadastro *aCadastro)    //retorna 0 se o tipo de cadastro for válido, 1 se for inválido
{
  //função de acréscimo no index

  printf("Informe o ID da transação: ");
  scanf("%d", &aCadastro->ID);
  getchar();

  printf("Informe o nome da cidade: ");
  fgets(aCadastro->cidade,20,stdin);
  aCadastro->cidade[strlen(aCadastro->cidade) - 1] = '\0';

  printf("Informe o nome do bairro: ");
  fgets(aCadastro->bairro,30,stdin);
  aCadastro->bairro[strlen(aCadastro->bairro) - 1] = '\0';

  printf("Informe o nome da rua: ");
  fgets(aCadastro->rua,50,stdin);
  aCadastro->rua[strlen(aCadastro->rua) - 1] = '\0';

  printf("Informe o CEP: ");
  fgets(aCadastro->CEP,11,stdin);
  aCadastro->CEP[strlen(aCadastro->CEP) - 1] = '\0';

  printf("Informe o número do imóvel: ");
  scanf("%d", &aCadastro->numero);
  getchar();

  printf("Informe o tipo do imóvel: ");
  fgets(aCadastro->tipo,13,stdin);
  aCadastro->tipo[strlen(aCadastro->tipo) - 1] = '\0';
  strupr(aCadastro->tipo);

  printf("Informe se ele está disponível para aluguel ou venda: ");
  fgets(aCadastro->disp,10,stdin);
  aCadastro->disp[strlen(aCadastro->disp) - 1] = '\0';

  printf("Informe o valor do imóvel: ");
  scanf("%lf", &aCadastro->valor);


  if(strcmp(aCadastro->tipo,"CASA") == 0){
    printf("Informe o número de pavimentos: ");
    scanf("%d", &aCadastro->casa->N_pav);

    printf("Informe o número de quartos: ");
    scanf("%d", &aCadastro->casa->N_quartos);

    printf("Informe a área do terreno: ");
    scanf("%lf", &aCadastro->casa->area_terreno);

    printf("Informe a área construída: ");
    scanf("%lf", &aCadastro->casa->area_construida);
  }


  else if(strcmp(aCadastro->tipo,"APARTAMENTO") == 0){
    printf("Informe a área do apartamento: ");
    scanf("%lf", &aCadastro->apartamento->area);

    printf("Informe o número de quartos: ");
    scanf("%d", &aCadastro->apartamento->N_quartos);

    printf("Informe a posição: ");
    fgets(aCadastro->apartamento->posicao,50,stdin);
    aCadastro->apartamento->posicao[strlen(aCadastro->apartamento->posicao) - 1] = '\0';

    printf("Informe o andar no prédio: ");
    scanf("%d", &aCadastro->apartamento->N_andar);

    printf("Informe o valor do condomínio: ");
    scanf("%lf", &aCadastro->apartamento->valor_cond);

    printf("Informe o número de vagas na garagem: ");
    scanf("%d", &aCadastro->apartamento->vagas_garag);


  }else if(strcmp(aCadastro->tipo,"TERRENO") == 0){
    printf("Informe a área do terreno: ");
    scanf("%lf", &aCadastro->terreno->area);

  }else if(strcmp(aCadastro->tipo,"FLAT") == 0){
    printf("Informe a área do terreno: ");
    scanf("%lf", &aCadastro->flat->area);

    printf("Informe o valor do condomínio: ");
    scanf("%lf", &aCadastro->flat->condominio);
    getchar();

    printf("Dispõe de ar-condicionado?: ");
    fgets(aCadastro->flat->arCond,4,stdin);
    aCadastro->flat->arCond[strlen(aCadastro->flat->arCond) - 1] = '\0';
    strlwr(aCadastro->flat->arCond);

    printf("Dispõe de internet e TV a cabo?: ");
    fgets(aCadastro->flat->int_tv,4,stdin);
    aCadastro->flat->int_tv[strlen(aCadastro->flat->int_tv) - 1] = '\0';
    strlwr(aCadastro->flat->int_tv);

    printf("Dispõe de lavanderia?: ");
    fgets(aCadastro->flat->lavanderia,4,stdin);
    aCadastro->flat->lavanderia[strlen(aCadastro->flat->lavanderia) - 1] = '\0';
    strlwr(aCadastro->flat->lavanderia);

    printf("Dispõe de arrumação/limpeza?: ");
    fgets(aCadastro->flat->limpeza,4,stdin);
    aCadastro->flat->limpeza[strlen(aCadastro->flat->limpeza) - 1] = '\0';
    strlwr(aCadastro->flat->limpeza);

    printf("Dispõe de recepção 24h?: ");
    fgets(aCadastro->flat->atend24,4,stdin);
    aCadastro->flat->atend24[strlen(aCadastro->flat->atend24) - 1] = '\0';
    strlwr(aCadastro->flat->atend24);

  }else if(strcmp(aCadastro->tipo,"STUDIO") == 0){
    printf("Informe a área do terreno: ");
    scanf("%lf", &aCadastro->Studio->area);

    printf("Informe o valor do condomínio: ");
    scanf("%lf", &aCadastro->Studio->condominio);
    getchar();

    printf("Dispõe de ar-condicionado?: ");
    fgets(aCadastro->Studio->arCond,4,stdin);
    aCadastro->Studio->arCond[strlen(aCadastro->Studio->arCond) - 1] = '\0';
    strlwr(aCadastro->Studio->arCond);

    printf("Dispõe de internet e TV a cabo?: ");
    fgets(aCadastro->Studio->int_tv,4,stdin);
    aCadastro->Studio->int_tv[strlen(aCadastro->Studio->int_tv) - 1] = '\0';
    strlwr(aCadastro->Studio->int_tv);

    printf("Dispõe de lavanderia?: ");
    fgets(aCadastro->Studio->lavanderia,4,stdin);
    aCadastro->Studio->lavanderia[strlen(aCadastro->Studio->lavanderia) - 1] = '\0';
    strlwr(aCadastro->Studio->lavanderia);

    printf("Dispõe de arrumação/limpeza?: ");
    fgets(aCadastro->Studio->limpeza,4,stdin);
    aCadastro->Studio->limpeza[strlen(aCadastro->Studio->limpeza) - 1] = '\0';
    strlwr(aCadastro->Studio->limpeza);

    printf("Dispõe de recepção 24h?: ");
    fgets(aCadastro->Studio->atend24,4,stdin);
    aCadastro->Studio->atend24[strlen(aCadastro->Studio->atend24) - 1] = '\0';
    strlwr(aCadastro->Studio->atend24);
    
    printf("Dispões de piscina? ");
    fgets(aCadastro->Studio->piscina,4,stdin);
    aCadastro->Studio->piscina[strlen(aCadastro->Studio->piscina) - 1] = '\0';
    strlwr(aCadastro->Studio->piscina);
    
    printf("Dispões de sauna? ");
    fgets(aCadastro->Studio->sauna,4,stdin);
    aCadastro->Studio->sauna[strlen(aCadastro->Studio->sauna) - 1] = '\0';
    strlwr(aCadastro->Studio->sauna);
    
    printf("Dispões de ginástica? ");
    fgets(aCadastro->Studio->ginastica,4,stdin);
    aCadastro->Studio->ginastica[strlen(aCadastro->Studio->ginastica) - 1] = '\0';
    strlwr(aCadastro->Studio->ginastica);

  }else{
    printf("Tipo invalido\n");
    return 1;
  }

  return 0;
}
