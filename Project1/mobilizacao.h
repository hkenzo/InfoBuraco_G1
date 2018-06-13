#ifndef MOBILIZACAO_H
#define MOBILIZACAO_H

#include <iostream>
using namespace std;

class mobilizacao
{
private:

	int custoKm;
	int idMob;


public:

	mobilizacao(int custo, int id);
	virtual ~mobilizacao();

	void setCusto(int novoCusto);
	int getId();
	int getCusto();

};



#endif
