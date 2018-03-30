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
  char arCond[4];
  char int_tv[4];
  char lavanderia[4];
  char limpeza[4];
  char atend24[4];
}tFlat;


typedef struct
{
  double area;
  double condominio;
  char arCond[4];
  char int_tv[4];
  char lavanderia[4];
  char limpeza[4];
  char atend24[4];
  char pscina[4];
  char sauna[4];
  char ginastica[4];
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
