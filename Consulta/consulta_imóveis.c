void show_all(tCadastro *aCadastro){
	//Imprime todos os itens do array
	int count = 0,i=0;
	while(i<100){
		if(aCadastro->ID != 0){
			printf("%d\t\t%s\n",aCadastro->ID, aCadastro->tipo);
			count++;
		}
		aCadastro++;
		i++;
	}
	if(!count)
		puts("0 itens encontrados.");
}
