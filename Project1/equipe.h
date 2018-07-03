#ifndef EQUIPE_H
#define EQUIPE_H

#include <iostream>
using namespace std;

class equipe
{
private:

	string identificacaoEquipe;
	int numProfissionais;
	int custoHoraEquipe;


public:

	equipe(string identificacaoEquipe, int numProfissionais, int custoHoraEquipe);
	virtual ~equipe();

	void setNumProfissionais(int novoNum);
	void setCusto(int novoCusto);
	string getId();
	int getNum();
	int getCusto();

};  



#endif
