#include <stdio.h>

void read_data_struct(tCadastro *aCadastro, FILE *file){
	if( !fread(aCadastro,sizeof(tCadastro),1,file) )
		printf("Arquivo vazio, 0 itens importados\n");
	else{
		aCadastro++;
		while(fread(aCadastro,sizeof(tCadastro),1,file)){
			aCadastro++;;
		}
	}	
}