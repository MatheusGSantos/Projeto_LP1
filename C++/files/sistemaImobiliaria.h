#ifndef SISTEMAIMOBILIARIA_H_
#define SISTEMAIMOBILIARIA_H_
#include <list>

class sistemaImobiliaria(){
	public:
		std::list<Imovel> imoveis;

		void cadastraImovel(Imovel);
		std::list<Imovel> getImoveis();
		std::list<std::string> getDescricaoImoveis();
		std::list<Imovel> getImoveisPorTipo(/**/); //A definir se vamos colocar tipo de oferta como int, binario ou string
		std::list<Imovel> getImoveisParaAlugarPorBairro(std::string);
		std::list<Imovel> getImoveisParaVenderPorBairro(std::string);
		std::list<Imovel> getImoveisPorCidade(std::string);
}


#endif /*SISTEMAIMOBILIARIA_H_*/