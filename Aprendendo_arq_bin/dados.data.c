#include <stdio.h>
#include <string.h>

typedef struct
{
	char nome[20];
	int numero;
}tTeste;

int main()
{
	FILE *stream;
	tTeste teste = {"carlos", 4};
	stream = fopen("dados.dat","rb+");
	fwrite(&teste, sizeof(tTeste), 1, stream);

	fclose(stream);

	return 0;
}
