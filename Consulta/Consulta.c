#include <stdio.h>
#include <string.h>
#include <locale.h>

setlocale(LC_ALL,"Portuguese");

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
