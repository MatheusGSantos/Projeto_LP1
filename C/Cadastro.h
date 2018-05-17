#ifndef CADASTRO_H
#define CADASTRO_H

void read_data_struct(FILE *file);
void save_data_struct(FILE *file);
int change_index();
void Apaga_Cadastro(int ID);
int Verifica_ID(int ID);
int Cadastro();

#endif
