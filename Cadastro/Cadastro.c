#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

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
  char arCond[5];
  char int_tv[5];
  char lavanderia[5];
  char limpeza[5];
  char atend24[5];
}tFlat;


typedef struct
{
  double area;
  double condominio;
  char arCond[5];
  char int_tv[5];
  char lavanderia[5];
  char limpeza[5];
  char atend24[5];
  char piscina[5];
  char sauna[5];
  char ginastica[5];
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

int change_index(tCadastro *array){
  int counter = 0;
  while(1){
    if(array->ID == 0){
      return counter;
    }else{
      counter++;
      array++;
    }
  }
}


int Cadastro(tCadastro *aCadastro)    //retorna 0 se o tipo de cadastro for válido, 1 se for inválido
{

 aCadastro += change_index(aCadastro);

  printf("Informe o ID da transação: ");
  scanf("%d", &aCadastro->ID);
  getchar();

  printf("Informe o nome da cidade: ");
  fgets(aCadastro->cidade,20,stdin);
  aCadastro->cidade[strlen(aCadastro->cidade) - 1] = '\0';
  strupr(aCadastro->cidade);

  printf("Informe o nome do bairro: ");
  fgets(aCadastro->bairro,30,stdin);
  aCadastro->bairro[strlen(aCadastro->bairro) - 1] = '\0';
  strupr(aCadastro->bairro);

  printf("Informe o nome da rua: ");
  fgets(aCadastro->rua,50,stdin);
  aCadastro->rua[strlen(aCadastro->rua) - 1] = '\0';
  strupr(aCadastro->rua);

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
  strupr(aCadastro->disp);


  printf("Informe o valor do imóvel: ");
  scanf("%lf", &aCadastro->valor);


  if(strcmp(aCadastro->tipo,"CASA") == 0){
    printf("Informe o número de pavimentos: ");
    scanf("%d", &aCadastro->casa.N_pav);

    printf("Informe o número de quartos: ");
    scanf("%d", &aCadastro->casa.N_quartos);

    printf("Informe a área do terreno: ");
    scanf("%lf", &aCadastro->casa.area_terreno);

    printf("Informe a área construída: ");
    scanf("%lf", &aCadastro->casa.area_construida);
    getchar();
  }


  else if(strcmp(aCadastro->tipo,"APARTAMENTO") == 0){
    printf("Informe a área do apartamento: ");
    scanf("%lf", &aCadastro->apartamento.area);

    printf("Informe o número de quartos: ");
    scanf("%d", &aCadastro->apartamento.N_quartos);

    printf("Informe a posição: ");
    fgets(aCadastro->apartamento.posicao,50,stdin);
    aCadastro->apartamento.posicao[strlen(aCadastro->apartamento.posicao) - 1] = '\0';

    printf("Informe o andar no prédio: ");
    scanf("%d", &aCadastro->apartamento.N_andar);

    printf("Informe o valor do condomínio: ");
    scanf("%lf", &aCadastro->apartamento.valor_cond);

    printf("Informe o número de vagas na garagem: ");
    scanf("%d", &aCadastro->apartamento.vagas_garag);
    getchar();


  }else if(strcmp(aCadastro->tipo,"TERRENO") == 0){
    printf("Informe a área do terreno: ");
    scanf("%lf", &aCadastro->terreno.area);
    getchar();

  }else if(strcmp(aCadastro->tipo,"FLAT") == 0){
    printf("Informe a área do terreno: ");
    scanf("%lf", &aCadastro->flat.area);

    printf("Informe o valor do condomínio: ");
    scanf("%lf", &aCadastro->flat.condominio);
    getchar();

    printf("Dispõe de ar-condicionado? ");
    fgets(aCadastro->flat.arCond,5,stdin);
    aCadastro->flat.arCond[strlen(aCadastro->flat.arCond) - 1] = '\0';
    strlwr(aCadastro->flat.arCond);

    printf("Dispõe de internet e TV a cabo? ");
    fgets(aCadastro->flat.int_tv,5,stdin);
    aCadastro->flat.int_tv[strlen(aCadastro->flat.int_tv) - 1] = '\0';
    strlwr(aCadastro->flat.int_tv);

    printf("Dispõe de lavanderia? ");
    fgets(aCadastro->flat.lavanderia,5,stdin);
    aCadastro->flat.lavanderia[strlen(aCadastro->flat.lavanderia) - 1] = '\0';
    strlwr(aCadastro->flat.lavanderia);

    printf("Dispõe de arrumação/limpeza? ");
    fgets(aCadastro->flat.limpeza,5,stdin);
    aCadastro->flat.limpeza[strlen(aCadastro->flat.limpeza) - 1] = '\0';
    strlwr(aCadastro->flat.limpeza);

    printf("Dispõe de recepção 24h? ");
    fgets(aCadastro->flat.atend24,5,stdin);
    aCadastro->flat.atend24[strlen(aCadastro->flat.atend24) - 1] = '\0';
    strlwr(aCadastro->flat.atend24);

  }else if(strcmp(aCadastro->tipo,"STUDIO") == 0){
    printf("Informe a área do terreno: ");
    scanf("%lf", &aCadastro->studio.area);

    printf("Informe o valor do condomínio: ");
    scanf("%lf", &aCadastro->studio.condominio);
    getchar();

    printf("Dispõe de ar-condicionado? ");
    fgets(aCadastro->studio.arCond,5,stdin);
    aCadastro->studio.arCond[strlen(aCadastro->studio.arCond) - 1] = '\0';
    strlwr(aCadastro->studio.arCond);

    printf("Dispõe de internet e TV a cabo? ");
    fgets(aCadastro->studio.int_tv,5,stdin);
    aCadastro->studio.int_tv[strlen(aCadastro->studio.int_tv) - 1] = '\0';
    strlwr(aCadastro->studio.int_tv);

    printf("Dispõe de lavanderia? ");
    fgets(aCadastro->studio.lavanderia,5,stdin);
    aCadastro->studio.lavanderia[strlen(aCadastro->studio.lavanderia) - 1] = '\0';
    strlwr(aCadastro->studio.lavanderia);

    printf("Dispõe de arrumação/limpeza? ");
    fgets(aCadastro->studio.limpeza,5,stdin);
    strlwr(aCadastro->studio.limpeza);
    aCadastro->studio.limpeza[strlen(aCadastro->studio.limpeza) - 1] = '\0';

    printf("Dispõe de recepção 24h? ");
    fgets(aCadastro->studio.atend24,5,stdin);
    aCadastro->studio.atend24[strlen(aCadastro->studio.atend24) - 1] = '\0';
    strlwr(aCadastro->studio.atend24);

    printf("Dispões de piscina? ");
    fgets(aCadastro->studio.piscina,5,stdin);
    aCadastro->studio.piscina[strlen(aCadastro->studio.piscina) - 1] = '\0';
    strlwr(aCadastro->studio.piscina);

    printf("Dispões de sauna? ");
    fgets(aCadastro->studio.sauna,5,stdin);
    aCadastro->studio.sauna[strlen(aCadastro->studio.sauna) - 1] = '\0';
    strlwr(aCadastro->studio.sauna);

    printf("Dispões de ginástica? ");
    fgets(aCadastro->studio.ginastica,5,stdin);
    aCadastro->studio.ginastica[strlen(aCadastro->studio.ginastica) - 1] = '\0';
    strlwr(aCadastro->studio.ginastica);

  }else{
    printf("Tipo invalido\n");
    return 1;
  }

  return 0;
}

void consultaVendaTipo(tCadastro *aCadastro) //Consulta se o imóvel está disponível para venda por tipo
{
    int i, flag = 0;
    char tipo[15];

    fgets(tipo,15,stdin);
    tipo[strlen(tipo) - 1] = '\0';
    strupr(tipo);

    for(i = 0; i < 100; i++){
        if((strcmp(aCadastro->tipo,tipo) == 0) && (strcmp(aCadastro->disp,"VENDA") == 0 )){
            printf("%d ", aCadastro->ID);
            flag = 1;
        }aCadastro++;
    }if(!flag)
    printf("Não foi encontrado nenhum imóvel disponível\n");
}
void consultaAlugaTipo(tCadastro *aCadastro) //Consulta se o imóvel está disponível para aluguel por tipo
{
    int i, flag = 0;
    char tipo[15];

    fgets(tipo,15,stdin);
    tipo[strlen(tipo) - 1] = '\0';
    strupr(tipo);

    for(i = 0; i < 100; i++){
        if((strcmp(aCadastro->tipo,tipo) == 0) && (strcmp(aCadastro->disp,"ALUGUEL") == 0 )){
            printf("%d ", aCadastro->ID);
            flag = 1;
        }aCadastro++;
    }if(!flag)
    printf("Não foi encontrado nenhum imóvel disponível\n");
}

void show_all(tCadastro *aCadastro){
	//Imprime todos os itens do array
	int count = 0;
	while(aCadastro->ID != 0){
        printf("%d-%s\n",aCadastro->ID, aCadastro->tipo);
        count++;
        aCadastro++;
	}
	if(!count)
		puts("0 itens encontrados.");
}

void show_descricao(tCadastro *aCadastro)
{
	int count = 0;
	while(aCadastro->ID != 0){
        printf("%d-%s\n",aCadastro->ID, aCadastro->tipo);
        printf("Cidade: %s\nBairro: %s\n",aCadastro->cidade, aCadastro->bairro);
        printf("Rua: %s\nCEP: %s\n",aCadastro->rua, aCadastro->CEP);
        printf("Número: %d\n",aCadastro->numero);
        printf("Disponibilidade: %s\nValor: R$%.2lf\n",aCadastro->disp, aCadastro->valor);

        if(strcmp(aCadastro->tipo,"CASA") == 0){
            printf("Número de pavimentos: %d\n", aCadastro->casa.N_pav);
            printf("Número de quartos: %d\n", aCadastro->casa.N_quartos);
            printf("Área do terreno: %.2lf\n", aCadastro->casa.area_terreno);
            printf("Área construida: %.2lf\n", aCadastro->casa.area_construida);
        }
        else if(strcmp(aCadastro->tipo,"APARTAMENTO") == 0){
            printf("Número de andares: %d\n", aCadastro->apartamento.N_andar);
            printf("Número de quartos: %d\n", aCadastro->apartamento.N_quartos);
            printf("Área: %.2lf\n", aCadastro->apartamento.area);
            printf("Posição: %s\n", aCadastro->apartamento.posicao);
            printf("Número de vagas na garagem: %d\n", aCadastro->apartamento.vagas_garag);
            printf("Valor do condomínio: %.2lf\n", aCadastro->apartamento.valor_cond);
        }
        else if(strcmp(aCadastro->tipo,"TERRENO") == 0){
            printf("Área do terreno: %.2lf\n", aCadastro->terreno.area);
        }
        else if(strcmp(aCadastro->tipo,"FLAT") == 0){
            printf("Área: %.2lf\n", aCadastro->flat.area);
            printf("Possui Ar condicionado: %s\n", aCadastro->flat.arCond);
            printf("Possui Internet e Tv a cabo: %s\n", aCadastro->flat.int_tv);
            printf("Atendimento 24h: %s\n", aCadastro->flat.atend24);
            printf("Possui lavanderia: %s\n", aCadastro->flat.lavanderia);
            printf("Valor do condomínio: %.2lf\n", aCadastro->flat.condominio);
            printf("Possui serviço de limpeza: %s\n", aCadastro->flat.limpeza);
        }
        else if(strcmp(aCadastro->tipo,"STUDIO") == 0){
            printf("Área: %.2lf\n", aCadastro->studio.area);
            printf("Possui Ar condicionado: %s\n", aCadastro->studio.arCond);
            printf("Possui Internet e Tv a cabo: %s\n", aCadastro->studio.int_tv);
            printf("Atendimento 24h: %s\n", aCadastro->studio.atend24);
            printf("Possui lavanderia: %s\n", aCadastro->studio.lavanderia);
            printf("Valor do condomínio: %.2lf\n", aCadastro->studio.condominio);
            printf("Possui piscina: %s\n", aCadastro->studio.piscina);
            printf("Possui sauna: %s\n", aCadastro->studio.sauna);
            printf("Possui sala de ginástica: %s\n", aCadastro->studio.ginastica);
        }
        count++;
        aCadastro++;
    }
    if(!count)
       puts("0 itens encontrados.");
}

void AluguelBairro(tCadastro *aCadastro)
{
    int i, flag = 0;
    char bairro[30];

    fgets(bairro,30,stdin);
    bairro[strlen(bairro) - 1] = '\0';
    strupr(bairro);

    for(i = 0; i < 100; i++){
        if((strcmp(aCadastro->bairro,bairro) == 0) && (strcmp(aCadastro->disp,"ALUGUEL") == 0 )){
            printf("%d ", aCadastro->ID);
            flag = 1;
        }aCadastro++;
    }if(!flag)
    printf("Não foi encontrado nenhum imóvel disponível para aluguel nesse bairro\n");
}

void VendaBairro(tCadastro *aCadastro)
{
    int i, flag = 0;
    char bairro[30];

    fgets(bairro,30,stdin);
    bairro[strlen(bairro) - 1] = '\0';
    strupr(bairro);

    for(i = 0; i < 100; i++){
        if((strcmp(aCadastro->bairro,bairro) == 0) && (strcmp(aCadastro->disp,"VENDA") == 0 )){
            printf("%d ", aCadastro->ID);
            flag = 1;
        }aCadastro++;
    }if(!flag)
    printf("Não foi encontrado nenhum imóvel disponível para venda nesse bairro\n");
}

void DispCidade(tCadastro *aCadastro)
{
    int i, flag = 0;
    char cidade[30];

    fgets(cidade,30,stdin);
    cidade[strlen(cidade) - 1] = '\0';
    strupr(cidade);

    for(i = 0; i < 100; i++){
        if(strcmp(aCadastro->cidade,cidade) == 0){
            printf("%d-%s\n",aCadastro->ID, aCadastro->tipo);
            printf("Cidade: %s\nBairro: %s\n",aCadastro->cidade, aCadastro->bairro);
            printf("Rua: %s\nCEP: %s\n",aCadastro->rua, aCadastro->CEP);
            printf("Número: %d\n",aCadastro->numero);
            printf("Disponibilidade: %s\nValor: R$%.2lf\n",aCadastro->disp, aCadastro->valor);

            if(strcmp(aCadastro->tipo,"CASA") == 0){
            printf("Número de pavimentos: %d\n", aCadastro->casa.N_pav);
            printf("Número de quartos: %d\n", aCadastro->casa.N_quartos);
            printf("Área do terreno: %.2lf\n", aCadastro->casa.area_terreno);
            printf("Área construida: %.2lf\n", aCadastro->casa.area_construida);
        }
        else if(strcmp(aCadastro->tipo,"APARTAMENTO") == 0){
            printf("Número de andares: %d\n", aCadastro->apartamento.N_andar);
            printf("Número de quartos: %d\n", aCadastro->apartamento.N_quartos);
            printf("Área: %.2lf\n", aCadastro->apartamento.area);
            printf("Posição: %s\n", aCadastro->apartamento.posicao);
            printf("Número de vagas na garagem: %d\n", aCadastro->apartamento.vagas_garag);
            printf("Valor do condomínio: %.2lf\n", aCadastro->apartamento.valor_cond);
        }
        else if(strcmp(aCadastro->tipo,"TERRENO") == 0){
            printf("Área do terreno: %.2lf\n", aCadastro->terreno.area);
        }
        else if(strcmp(aCadastro->tipo,"FLAT") == 0){
            printf("Área: %.2lf\n", aCadastro->flat.area);
            printf("Possui Ar condicionado: %s\n", aCadastro->flat.arCond);
            printf("Possui Internet e Tv a cabo: %s\n", aCadastro->flat.int_tv);
            printf("Atendimento 24h: %s\n", aCadastro->flat.atend24);
            printf("Possui lavanderia: %s\n", aCadastro->flat.lavanderia);
            printf("Valor do condomínio: %.2lf\n", aCadastro->flat.condominio);
            printf("Possui serviço de limpeza: %s\n", aCadastro->flat.limpeza);
        }
        else if(strcmp(aCadastro->tipo,"STUDIO") == 0){
            printf("Área: %.2lf\n", aCadastro->studio.area);
            printf("Possui Ar condicionado: %s\n", aCadastro->studio.arCond);
            printf("Possui Internet e Tv a cabo: %s\n", aCadastro->studio.int_tv);
            printf("Atendimento 24h: %s\n", aCadastro->studio.atend24);
            printf("Possui lavanderia: %s\n", aCadastro->studio.lavanderia);
            printf("Valor do condomínio: %.2lf\n", aCadastro->studio.condominio);
            printf("Possui piscina: %s\n", aCadastro->studio.piscina);
            printf("Possui sauna: %s\n", aCadastro->studio.sauna);
            printf("Possui sala de ginástica: %s\n", aCadastro->studio.ginastica);
        }
            flag = 1;
        }aCadastro++;
    }if(!flag)
    printf("Não foi encontrado nenhum imóvel disponível nessa cidade\n");
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i;

    tCadastro aCadastro[100] = {0};

    Cadastro(aCadastro);

    printf("\n");
    show_all(aCadastro);
    printf("\n");
    show_descricao(aCadastro);
    printf("\n");

    consultaVendaTipo(aCadastro);
    printf("\n");

    consultaAlugaTipo(aCadastro);
    printf("\n");

    AluguelBairro(aCadastro);
    printf("\n");

    VendaBairro(aCadastro);
    printf("\n\n");

    DispCidade(aCadastro);
    printf("\n\n");

    return 0;
}
