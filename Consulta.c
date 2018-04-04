#include <stdio.h>
#include <string.h>
#include <locale.h>
#include "Struct.h"

void consultaVendaTipo()
{
    int i, flag = 0;
    char tipo[15];

    fgets(tipo,15,stdin);
    tipo[strlen(tipo) - 1] = '\0';
    strupr(tipo);

    for(i = 0; i < 100; i++){
        if( (strcmp(aCadastro[i].tipo, tipo) == 0) && (strcmp(aCadastro[i].disp, "VENDA") == 0 )){
            printf("%d;", aCadastro[i].ID);
            flag = 1;
            if(i != 99)
            	printf(" ");
			else
				printf("\n");
        }
    }
	if(!flag)
    	printf("Nao foi encontrado nenhum imovel deste tipo para venda.\n");
}
void consultaAlugaTipo()
{
	int i, flag = 0;
    char tipo[15];

    fgets(tipo,15,stdin);
    tipo[strlen(tipo) - 1] = '\0';
    strupr(tipo);

    for(i = 0; i < 100; i++){
        if((strcmp(aCadastro[i].tipo,tipo) == 0) && (strcmp(aCadastro[i].disp,"ALUGUEL") == 0 )){
            printf("%d;", aCadastro[i].ID);
            if(i != 99)
            	printf(" ");
			else
				printf("\n");
            flag = 1;
        }
    }
	if(!flag)
    	printf("Nao foi encontrado nenhum imovel deste tipo para aluguel.\n");
}

void show_all()
{
    setlocale(LC_ALL ,"Portuguese");
	int count = 0, i = 0, f_counter = 0;
	while(i<100){
        if(aCadastro[i].ID != 0){
			f_counter++;
            if(f_counter == 1)
            	puts("ID's':");
			printf("%d - %s\n",aCadastro[i].ID, aCadastro[i].tipo);
        	count++;
    	}
		i++;
	}
	if(!count)
		puts("0 itens encontrados.");
}

void show_descricao()
{
	int count = 0, i = 0;
	while(i < 100){
	    if(aCadastro[i].ID != 0){
			printf("%d - %s\n",aCadastro[i].ID, aCadastro[i].tipo);
	        printf("Cidade: %s\nBairro: %s\n",aCadastro[i].cidade, aCadastro[i].bairro);
	        printf("Rua: %s\nCEP: %s\n",aCadastro[i].rua, aCadastro[i].CEP);
	        printf("Numero: %d\n",aCadastro[i].numero);
	        printf("Disponibilidade: %s\nValor: R$%.2lf\n",aCadastro[i].disp, aCadastro[i].valor);

	        if(strcmp(aCadastro[i].tipo,"CASA") == 0){
	            printf("Numero de pavimentos: %d\n", aCadastro[i].casa.N_pav);
	            printf("Numero de quartos: %d\n", aCadastro[i].casa.N_quartos);
	            printf("Area do terreno: %.2lf\n", aCadastro[i].casa.area_terreno);
	            printf("Area construida: %.2lf\n", aCadastro[i].casa.area_construida);
	            printf("........................................................\n");
	        }
	        else if(strcmp(aCadastro[i].tipo,"APARTAMENTO") == 0){
	            printf("Numero de andares: %d\n", aCadastro[i].apartamento.N_andar);
	            printf("Numero de quartos: %d\n", aCadastro[i].apartamento.N_quartos);
	            printf("Area: %.2lf\n", aCadastro[i].apartamento.area);
	            printf("Posicao: %s\n", aCadastro[i].apartamento.posicao);
	            printf("Numero de vagas na garagem: %d\n", aCadastro[i].apartamento.vagas_garag);
	            printf("Valor do condominio: %.2lf\n", aCadastro[i].apartamento.valor_cond);
	            printf("........................................................\n");
	        }
	        else if(strcmp(aCadastro[i].tipo,"TERRENO") == 0){
	            printf("Area do terreno: %.2lf\n", aCadastro[i].terreno.area);
	            printf("........................................................\n");
	        }
	        else if(strcmp(aCadastro[i].tipo,"FLAT") == 0){
	            printf("Area: %.2lf\n", aCadastro[i].flat.area);
	            printf("Possui Ar condicionado: %s\n", aCadastro[i].flat.arCond);
	            printf("Possui Internet e Tv a cabo: %s\n", aCadastro[i].flat.int_tv);
	            printf("Atendimento 24h: %s\n", aCadastro[i].flat.atend24);
	            printf("Possui lavanderia: %s\n", aCadastro[i].flat.lavanderia);
	            printf("Valor do condominio: %.2lf\n", aCadastro[i].flat.condominio);
	            printf("Possui servico de limpeza: %s\n", aCadastro[i].flat.limpeza);
	            printf("........................................................\n");
	        }
	        else if(strcmp(aCadastro[i].tipo,"STUDIO") == 0){
	            printf("Area: %.2lf\n", aCadastro[i].studio.area);
	            printf("Possui Ar condicionado: %s\n", aCadastro[i].studio.arCond);
	            printf("Possui Internet e Tv a cabo: %s\n", aCadastro[i].studio.int_tv);
	            printf("Atendimento 24h: %s\n", aCadastro[i].studio.atend24);
	            printf("Possui lavanderia: %s\n", aCadastro[i].studio.lavanderia);
	            printf("Valor do condominio: %.2lf\n", aCadastro[i].studio.condominio);
	            printf("Possui piscina: %s\n", aCadastro[i].studio.piscina);
	            printf("Possui sauna: %s\n", aCadastro[i].studio.sauna);
	            printf("Possui sala de ginastica: %s\n", aCadastro[i].studio.ginastica);
	            printf("........................................................\n");
	        }
			count++;
		}
        i++;
    }
    if(!count)
       puts("0 itens encontrados.");
}

void AluguelBairro()
{
    int i, flag = 0, f_counter = 0;
    char bairro[30];

    fgets(bairro,30,stdin);
    bairro[strlen(bairro) - 1] = '\0';
    strupr(bairro);

    for(i = 0; i < 100; i++){
        if((strcmp(aCadastro[i].bairro,bairro) == 0) && (strcmp(aCadastro[i].disp,"ALUGUEL") == 0 )){
            f_counter++;
            if(f_counter == 1)
            	puts("ID's':");
			printf("%d;", aCadastro[i].ID);
			if(i != 99)
				printf(" ");
			else
				printf("\n");

			flag = 1;
        }
    }
	if(!flag)
    	printf("Nao foi encontrado nenhum imovel disponivel para aluguel nesse bairro\n");
}

void VendaBairro()
{
    int i, flag = 0, f_counter = 0;
    char bairro[30];

    fgets(bairro,30,stdin);
    bairro[strlen(bairro) - 1] = '\0';
    strupr(bairro);

    for(i = 0; i < 100; i++){
        if((strcmp(aCadastro[i].bairro,bairro) == 0) && (strcmp(aCadastro[i].disp,"VENDA") == 0 )){
            f_counter++;
            if(f_counter == 1)
            	puts("ID's':");
			printf("%d", aCadastro[i].ID);
			if(i != 99)
				printf(", ");
			else
				printf("\n");

			flag = 1;
        }
    }
	if(!flag)
    	printf("Nao foi encontrado nenhum imovel disponivel para venda nesse bairro\n");
}

void DispCidade()
{
    int i, flag = 0;
    char cidade[30];

    fgets(cidade,30,stdin);
    cidade[strlen(cidade) - 1] = '\0';
    strupr(cidade);

    for(i = 0; i < 100; i++){
        if(strcmp(aCadastro[i].cidade,cidade) == 0){
            printf("%d-%s\n",aCadastro[i].ID, aCadastro[i].tipo);
            printf("Cidade: %s\nBairro: %s\n",aCadastro[i].cidade, aCadastro[i].bairro);
            printf("Rua: %s\nCEP: %s\n",aCadastro[i].rua, aCadastro[i].CEP);
            printf("Numero: %d\n",aCadastro[i].numero);
            printf("Disponibilidade: %s\nValor: R$%.2lf\n",aCadastro[i].disp, aCadastro[i].valor);


            if(strcmp(aCadastro[i].tipo,"CASA") == 0){
            printf("Numero de pavimentos: %d\n", aCadastro[i].casa.N_pav);
            printf("Numero de quartos: %d\n", aCadastro[i].casa.N_quartos);
            printf("Area do terreno: %.2lf\n", aCadastro[i].casa.area_terreno);
            printf("Area construida: %.2lf\n", aCadastro[i].casa.area_construida);
            printf("........................................................\n");

	        }
	        else if(strcmp(aCadastro[i].tipo,"APARTAMENTO") == 0){
	            printf("Numero de andares: %d\n", aCadastro[i].apartamento.N_andar);
	            printf("Numero de quartos: %d\n", aCadastro[i].apartamento.N_quartos);
	            printf("Area: %.2lf\n", aCadastro[i].apartamento.area);
	            printf("Posicao: %s\n", aCadastro[i].apartamento.posicao);
	            printf("Numero de vagas na garagem: %d\n", aCadastro[i].apartamento.vagas_garag);
	            printf("Valor do condominio: %.2lf\n", aCadastro[i].apartamento.valor_cond);
                printf("........................................................\n");

	        }
	        else if(strcmp(aCadastro[i].tipo,"TERRENO") == 0){
	            printf("Area do terreno: %.2lf\n", aCadastro[i].terreno.area);
                printf("........................................................\n");

	        }
	        else if(strcmp(aCadastro[i].tipo,"FLAT") == 0){
	            printf("Area: %.2lf\n", aCadastro[i].flat.area);
	            printf("Possui Ar condicionado: %s\n", aCadastro[i].flat.arCond);
	            printf("Possui Internet e Tv a cabo: %s\n", aCadastro[i].flat.int_tv);
	            printf("Atendimento 24h: %s\n", aCadastro[i].flat.atend24);
	            printf("Possui lavanderia: %s\n", aCadastro[i].flat.lavanderia);
	            printf("Valor do condominio: %.2lf\n", aCadastro[i].flat.condominio);
	            printf("Possui servico de limpeza: %s\n", aCadastro[i].flat.limpeza);
                printf("........................................................\n");

	        }
	        else if(strcmp(aCadastro[i].tipo,"STUDIO") == 0){
	            printf("Area: %.2lf\n", aCadastro[i].studio.area);
	            printf("Possui Ar condicionado: %s\n", aCadastro[i].studio.arCond);
	            printf("Possui Internet e Tv a cabo: %s\n", aCadastro[i].studio.int_tv);
	            printf("Atendimento 24h: %s\n", aCadastro[i].studio.atend24);
	            printf("Possui lavanderia: %s\n", aCadastro[i].studio.lavanderia);
	            printf("Valor do condominio: %.2lf\n", aCadastro[i].studio.condominio);
	            printf("Possui piscina: %s\n", aCadastro[i].studio.piscina);
	            printf("Possui sauna: %s\n", aCadastro[i].studio.sauna);
	            printf("Possui sala de ginastica: %s\n", aCadastro[i].studio.ginastica);
                printf("........................................................\n");

	        }
            flag = 1;
        }
    }
	if(!flag)
    	printf("Nao foi encontrado nenhum imovel disponivel nessa cidade\n");
