#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <Struct.h>

setlocale(LC_ALL,"Portuguese");

void consultaVendaTipo()
{
    int i, flag = 0;
    char tipo[15];

    fgets(tipo,15,stdin);
    tipo[strlen(tipo) - 1] = '\0';
    strupr(tipo);

    for(i = 0; i < 100; i++){
        if( (strcmp(aCadastro[i].tipo, tipo) == 0) && (strcmp(aCadastro[i].disp, "VENDA") == 0 )){
            printf("%d", aCadastro[i].ID);
            flag = 1;
            if(i != 99)
            	printf(", ");
			else	
				printf("\n");
        }
    }
	if(!flag)
    	printf("Não foi encontrado nenhum imóvel deste tipo para venda.\n");
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
            printf("%d ", aCadastro[i].ID);
            flag = 1;
        }
    }
	if(!flag)
    	printf("Não foi encontrado nenhum imóvel deste tipo para aluguel.\n");
}

void show_all()
{
	
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
	        printf("Número: %d\n",aCadastro[i].numero);
	        printf("Disponibilidade: %s\nValor: R$%.2lf\n",aCadastro[i].disp, aCadastro[i].valor);
	
	        if(strcmp(aCadastro[i].tipo,"CASA") == 0){
	            printf("Número de pavimentos: %d\n", aCadastro[i].casa.N_pav);
	            printf("Número de quartos: %d\n", aCadastro[i].casa.N_quartos);
	            printf("Área do terreno: %.2lf\n", aCadastro[i].casa.area_terreno);
	            printf("Área construida: %.2lf\n", aCadastro[i].casa.area_construida);
	        }
	        else if(strcmp(aCadastro[i].tipo,"APARTAMENTO") == 0){
	            printf("Número de andares: %d\n", aCadastro[i].apartamento.N_andar);
	            printf("Número de quartos: %d\n", aCadastro[i].apartamento.N_quartos);
	            printf("Área: %.2lf\n", aCadastro[i].apartamento.area);
	            printf("Posição: %s\n", aCadastro[i].apartamento.posicao);
	            printf("Número de vagas na garagem: %d\n", aCadastro[i].apartamento.vagas_garag);
	            printf("Valor do condomínio: %.2lf\n", aCadastro[i].apartamento.valor_cond);
	        }
	        else if(strcmp(aCadastro[i].tipo,"TERRENO") == 0){
	            printf("Área do terreno: %.2lf\n", aCadastro[i].terreno.area);
	        }
	        else if(strcmp(aCadastro[i].tipo,"FLAT") == 0){
	            printf("Área: %.2lf\n", aCadastro[i].flat.area);
	            printf("Possui Ar condicionado: %s\n", aCadastro[i].flat.arCond);
	            printf("Possui Internet e Tv a cabo: %s\n", aCadastro[i].flat.int_tv);
	            printf("Atendimento 24h: %s\n", aCadastro[i].flat.atend24);
	            printf("Possui lavanderia: %s\n", aCadastro[i].flat.lavanderia);
	            printf("Valor do condomínio: %.2lf\n", aCadastro[i].flat.condominio);
	            printf("Possui serviço de limpeza: %s\n", aCadastro[i].flat.limpeza);
	        }
	        else if(strcmp(aCadastro[i].tipo,"STUDIO") == 0){
	            printf("Área: %.2lf\n", aCadastro[i].studio.area);
	            printf("Possui Ar condicionado: %s\n", aCadastro[i].studio.arCond);
	            printf("Possui Internet e Tv a cabo: %s\n", aCadastro[i].studio.int_tv);
	            printf("Atendimento 24h: %s\n", aCadastro[i].studio.atend24);
	            printf("Possui lavanderia: %s\n", aCadastro[i].studio.lavanderia);
	            printf("Valor do condomínio: %.2lf\n", aCadastro[i].studio.condominio);
	            printf("Possui piscina: %s\n", aCadastro[i].studio.piscina);
	            printf("Possui sauna: %s\n", aCadastro[i].studio.sauna);
	            printf("Possui sala de ginástica: %s\n", aCadastro[i].studio.ginastica);
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
			printf("%d", aCadastro[i].ID);
			if(i != 99)
				printf(", ");
			else
				printf("\n");			
			
			flag = 1;
        }
    }
	if(!flag)
    	printf("Não foi encontrado nenhum imóvel disponível para aluguel nesse bairro\n");
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
    	printf("Não foi encontrado nenhum imóvel disponível para venda nesse bairro\n");
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
            printf("Número: %d\n",aCadastro[i].numero);
            printf("Disponibilidade: %s\nValor: R$%.2lf\n",aCadastro[i].disp, aCadastro[i].valor);

            if(strcmp(aCadastro[i].tipo,"CASA") == 0){
            printf("Número de pavimentos: %d\n", aCadastro[i].casa.N_pav);
            printf("Número de quartos: %d\n", aCadastro[i].casa.N_quartos);
            printf("Área do terreno: %.2lf\n", aCadastro[i].casa.area_terreno);
            printf("Área construida: %.2lf\n", aCadastro[i].casa.area_construida);
	        }
	        else if(strcmp(aCadastro[i].tipo,"APARTAMENTO") == 0){
	            printf("Número de andares: %d\n", aCadastro[i].apartamento.N_andar);
	            printf("Número de quartos: %d\n", aCadastro[i].apartamento.N_quartos);
	            printf("Área: %.2lf\n", aCadastro[i].apartamento.area);
	            printf("Posição: %s\n", aCadastro[i].apartamento.posicao);
	            printf("Número de vagas na garagem: %d\n", aCadastro[i].apartamento.vagas_garag);
	            printf("Valor do condomínio: %.2lf\n", aCadastro[i].apartamento.valor_cond);
	        }
	        else if(strcmp(aCadastro[i].tipo,"TERRENO") == 0){
	            printf("Área do terreno: %.2lf\n", aCadastro[i].terreno.area);
	        }
	        else if(strcmp(aCadastro[i].tipo,"FLAT") == 0){
	            printf("Área: %.2lf\n", aCadastro[i].flat.area);
	            printf("Possui Ar condicionado: %s\n", aCadastro[i].flat.arCond);
	            printf("Possui Internet e Tv a cabo: %s\n", aCadastro[i].flat.int_tv);
	            printf("Atendimento 24h: %s\n", aCadastro[i].flat.atend24);
	            printf("Possui lavanderia: %s\n", aCadastro[i].flat.lavanderia);
	            printf("Valor do condomínio: %.2lf\n", aCadastro[i].flat.condominio);
	            printf("Possui serviço de limpeza: %s\n", aCadastro[i].flat.limpeza);
	        }
	        else if(strcmp(aCadastro[i].tipo,"STUDIO") == 0){
	            printf("Área: %.2lf\n", aCadastro[i].studio.area);
	            printf("Possui Ar condicionado: %s\n", aCadastro[i].studio.arCond);
	            printf("Possui Internet e Tv a cabo: %s\n", aCadastro[i].studio.int_tv);
	            printf("Atendimento 24h: %s\n", aCadastro[i].studio.atend24);
	            printf("Possui lavanderia: %s\n", aCadastro[i].studio.lavanderia);
	            printf("Valor do condomínio: %.2lf\n", aCadastro[i].studio.condominio);
	            printf("Possui piscina: %s\n", aCadastro[i].studio.piscina);
	            printf("Possui sauna: %s\n", aCadastro[i].studio.sauna);
	            printf("Possui sala de ginástica: %s\n", aCadastro[i].studio.ginastica);
	        }
            flag = 1;
        }
    }
	if(!flag)
    	printf("Não foi encontrado nenhum imóvel disponível nessa cidade\n");
}
