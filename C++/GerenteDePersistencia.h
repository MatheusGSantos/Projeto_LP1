#ifndef GERENTE_DE_PERSISTENCIA
#define GERENTE_DE_PERSISTENCIA

#include <iostream>
#include <list>

using namespace std;

class GerenteDePersistencia
{
public:
	GerenteDePersistencia();
	virtual ~GerenteDePersistencia();

	list<Imovel> recuperaListaImoveis();
	void salvaListaImoveis(std::list <Imovel>);
};

#endif
