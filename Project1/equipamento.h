#ifndef EQUIPAMENTO_H
#define EQUIPAMENTO_H

#include <iostream>
using namespace std;

class equipamento
{
private:

	string tipoEquipamento;
	int custoHora;
	int idEquipamento;


public:

	equipamento(string tipo, int id, int custo);
	virtual ~equipamento();

	void setPreco(int novoPreco);
	int getId();
	string getTipo();
	int getPreco();

};



#endif
