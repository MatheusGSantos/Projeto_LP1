#include <stdio.h>

void read_data_struct(tCadastro *aCadastro, FILE *file){
	int i = 0;
	if( !fread(aCadastro[i],sizeof(tCadastro),1,file) )
		printf("Arquivo vazio, 0 itens importados\n");
	else{
		i++;
		while(fread(aCadastro[i],sizeof(tCadastro),1,file)){
			i++;
		}
	}	
}