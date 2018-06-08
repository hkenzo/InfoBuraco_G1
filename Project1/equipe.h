#ifndef EQUIPE_H
#define EQUIPE_H

#include <iostream>
using namespace std;

class equipe
{
private:

	int identificacaoEquipe;
	int numProfissionais;
	int custoHoraEquipe;


public:

	equipe(int identificacaoEquipe, int numProfissionais, int custoHoraEquipe);
	virtual ~equipe();

	void setNumProfissionais(int novoNum);
	void setCusto(int novoCusto);
	int getId();
	int getNum();
	int getCusto();

};  



#endif
