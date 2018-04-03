#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <Struct.h>
#include <windows.h>

setlocale(LC_ALL,"Portuguese");

void read_data_struct(FILE *file){
	fseek(file,0, SEEK_SET);
	fread(aCadastro,(sizeof(tCadastro)*100),1,file);
	fseek(file,0, SEEK_SET);
}

void save_data_struct(FILE *file){
	fseek(file,0, SEEK_SET);
	fwrite(aCadastro,1,(sizeof(tCadastro)*100),file);
	fseek(file,0, SEEK_SET);
}

int change_index(){
	int counter = 0,i=0;
	while(1){
		if(aCadastro[i].ID == 0){
			return counter;
		}else{
			counter++;
		}
		i++;
	}
}

void Apaga_Cadastro(int ID)
{
	int a;
	for(a = 0; a < 100; a++){
			if(aCadastro[a].ID == ID){
					aCadastro[a].ID = 0;
					printf("Cadastro apagado com sucesso!\n");
					Sleep(2000);
					break;
			}
	}
}

int Verifica_ID(int ID)
{
	int a, count = 0;

	for(a = 0; a < 100; a++){
			if(aCadastro[a].ID == ID){
					count++;
					if(count == 2){
							printf("ID já cadastrado.\n");
							return 1;
					}
			}
	}
	return 0;
}

int Cadastro()    //retorna 0 se o tipo de cadastro for válido, 1 se for inválido
{
	int i = change_index(&aCadastro);


	printf("Informe o ID da transação: ");
	scanf("%d", &aCadastro[i].ID);
	getchar();

	if(Verifica_ID(aCadastro[i].ID)){
		aCadastro[i].ID = 0;
		return 1;
	}

	printf("Informe o nome da cidade: ");
	fgets(aCadastro[i].cidade,20,stdin);
	aCadastro[i].cidade[strlen(aCadastro[i].cidade) - 1] = '\0';
	strupr(aCadastro[i].cidade);

	printf("Informe o nome do bairro: ");
	fgets(aCadastro[i].bairro,30,stdin);
	aCadastro[i].bairro[strlen(aCadastro[i].bairro) - 1] = '\0';
	strupr(aCadastro[i].bairro);

	printf("Informe o nome da rua: ");
	fgets(aCadastro[i].rua,50,stdin);
	aCadastro[i].rua[strlen(aCadastro[i].rua) - 1] = '\0';
	strupr(aCadastro[i].rua);

	printf("Informe o CEP: ");
	fgets(aCadastro[i].CEP,11,stdin);
	aCadastro[i].CEP[strlen(aCadastro[i].CEP) - 1] = '\0';

	printf("Informe o número do imóvel: ");
	scanf("%d", &aCadastro[i].numero);
	getchar();

	printf("Informe o tipo do imóvel: ");
	fgets(aCadastro[i].tipo,13,stdin);
	aCadastro[i].tipo[strlen(aCadastro[i].tipo) - 1] = '\0';
	strupr(aCadastro[i].tipo);

	printf("Informe se ele está disponível para aluguel ou venda: ");
	fgets(aCadastro[i].disp,10,stdin);
	aCadastro[i].disp[strlen(aCadastro[i].disp) - 1] = '\0';
	strupr(aCadastro[i].disp);


	printf("Informe o valor do imóvel: ");
	scanf("%lf", &aCadastro[i].valor);


	if(strcmp(aCadastro[i].tipo,"CASA") == 0){
		printf("Informe o número de pavimentos: ");
		scanf("%d", &aCadastro[i].casa.N_pav);

		printf("Informe o número de quartos: ");
		scanf("%d", &aCadastro[i].casa.N_quartos);

		printf("Informe a área do terreno: ");
		scanf("%lf", &aCadastro[i].casa.area_terreno);

		printf("Informe a área construída: ");
		scanf("%lf", &aCadastro[i].casa.area_construida);
		getchar();
	}else if(strcmp(aCadastro[i].tipo,"APARTAMENTO") == 0){
		printf("Informe a área do apartamento: ");
		scanf("%lf", &aCadastro[i].apartamento.area);

		printf("Informe o número de quartos: ");
		scanf("%d", &aCadastro[i].apartamento.N_quartos);

		printf("Informe a posição: ");
		fgets(aCadastro[i].apartamento.posicao,50,stdin);
		aCadastro[i].apartamento.posicao[strlen(aCadastro[i].apartamento.posicao) - 1] = '\0';

		printf("Informe o andar no prédio: ");
		scanf("%d", &aCadastro[i].apartamento.N_andar);

		printf("Informe o valor do condomínio: ");
		scanf("%lf", &aCadastro[i].apartamento.valor_cond);

		printf("Informe o número de vagas na garagem: ");
		scanf("%d", &aCadastro[i].apartamento.vagas_garag);
		getchar();
	}else if(strcmp(aCadastro[i].tipo,"TERRENO") == 0){
		printf("Informe a área do terreno: ");
		scanf("%lf", &aCadastro[i].terreno.area);
		getchar();

	}else if(strcmp(aCadastro[i].tipo,"FLAT") == 0){
		printf("Informe a área do terreno: ");
		scanf("%lf", &aCadastro[i].flat.area);

		printf("Informe o valor do condomínio: ");
		scanf("%lf", &aCadastro[i].flat.condominio);
		getchar();

		printf("Dispõe de ar-condicionado? ");
		fgets(aCadastro[i].flat.arCond,5,stdin);
		aCadastro[i].flat.arCond[strlen(aCadastro[i].flat.arCond) - 1] = '\0';
		strlwr(aCadastro[i].flat.arCond);

		printf("Dispõe de internet e TV a cabo? ");
		fgets(aCadastro[i].flat.int_tv,5,stdin);
		aCadastro[i].flat.int_tv[strlen(aCadastro[i].flat.int_tv) - 1] = '\0';
		strlwr(aCadastro[i].flat.int_tv);

		printf("Dispõe de lavanderia? ");
		fgets(aCadastro[i].flat.lavanderia,5,stdin);
		aCadastro[i].flat.lavanderia[strlen(aCadastro[i].flat.lavanderia) - 1] = '\0';
		strlwr(aCadastro[i].flat.lavanderia);

		printf("Dispõe de arrumação/limpeza? ");
		fgets(aCadastro[i].flat.limpeza,5,stdin);
		aCadastro[i].flat.limpeza[strlen(aCadastro[i].flat.limpeza) - 1] = '\0';
		strlwr(aCadastro[i].flat.limpeza);

		printf("Dispõe de recepção 24h? ");
		fgets(aCadastro[i].flat.atend24,5,stdin);
		aCadastro[i].flat.atend24[strlen(aCadastro[i].flat.atend24) - 1] = '\0';
		strlwr(aCadastro[i].flat.atend24);
	}else if(strcmp(aCadastro[i].tipo,"STUDIO") == 0){
		printf("Informe a área do terreno: ");
		scanf("%lf", &aCadastro[i].studio.area);
		getchar();

		printf("Informe o valor do condomínio: ");
		scanf("%lf", &aCadastro[i].studio.condominio);
		getchar();

		printf("Dispõe de ar-condicionado? ");
		fgets(aCadastro[i].studio.arCond,5,stdin);
		aCadastro[i].studio.arCond[strlen(aCadastro[i].studio.arCond) - 1] = '\0';
		strlwr(aCadastro[i].studio.arCond);

		printf("Dispõe de internet e TV a cabo? ");
		fgets(aCadastro[i].studio.int_tv,5,stdin);
		aCadastro[i].studio.int_tv[strlen(aCadastro[i].studio.int_tv) - 1] = '\0';
		strlwr(aCadastro[i].studio.int_tv);

		printf("Dispõe de lavanderia? ");
		fgets(aCadastro[i].studio.lavanderia,5,stdin);
		aCadastro[i].studio.lavanderia[strlen(aCadastro[i].studio.lavanderia) - 1] = '\0';
		strlwr(aCadastro[i].studio.lavanderia);

		printf("Dispõe de arrumação/limpeza? ");
		fgets(aCadastro[i].studio.limpeza,5,stdin);
		strlwr(aCadastro[i].studio.limpeza);
		aCadastro[i].studio.limpeza[strlen(aCadastro[i].studio.limpeza) - 1] = '\0';

		printf("Dispõe de recepção 24h? ");
		fgets(aCadastro[i].studio.atend24,5,stdin);
		aCadastro[i].studio.atend24[strlen(aCadastro[i].studio.atend24) - 1] = '\0';
		strlwr(aCadastro[i].studio.atend24);

		printf("Dispões de piscina? ");
		fgets(aCadastro[i].studio.piscina,5,stdin);
		aCadastro[i].studio.piscina[strlen(aCadastro[i].studio.piscina) - 1] = '\0';
		strlwr(aCadastro[i].studio.piscina);

		printf("Dispões de sauna? ");
		fgets(aCadastro[i].studio.sauna,5,stdin);
		aCadastro[i].studio.sauna[strlen(aCadastro[i].studio.sauna) - 1] = '\0';
		strlwr(aCadastro[i].studio.sauna);

		printf("Dispões de ginástica? ");
		fgets(aCadastro[i].studio.ginastica,5,stdin);
		aCadastro[i].studio.ginastica[strlen(aCadastro[i].studio.ginastica) - 1] = '\0';
		strlwr(aCadastro[i].studio.ginastica);
	}else{
		printf("Tipo invalido\n");
		return 1;
	}
	return 0;
}