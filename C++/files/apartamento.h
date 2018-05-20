#ifndef APARTAMENTO_H_
#define APARTAMENTO_H_

class casa: public imovel{

	public:
		apartamento(std::string, int, double, int, double);

		std::string posicao;
		int numQuartos;
		double valorCondominio;
		int vagasGaragem;
		double area;
		
}

#endif /*APARTAMENTO_H_*/