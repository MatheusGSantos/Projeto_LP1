#include "Imovel.h"

Imovel::Imovel(){
    valor = 0.0;
    tipoImovel = "";
    tipoOferta = "";
	endereco = new Endereco("", 0, "", "", "");
	id = 0;
}


Imovel::~Imovel()
{
    //dtor
}
