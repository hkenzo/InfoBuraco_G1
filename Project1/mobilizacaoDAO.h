#ifndef MOBILIZACAODAO_H
#define MOBILIZACAODAO_H

#include "MySQLDAO.h"
#include <stdio.h>
#include <string>
#include <vector>
#include "mobilizacao.h" 

using namespace std;

class mobilizacaoDAO
{

public:
	mobilizacaoDAO();
	void mobilizacaoDAO::criarMobilizacaoDAO(int custoKM);
	void mobilizacaoDAO::deletarMobilizacaoDAO(int idMob);
	void mobilizacaoDAO::alterarMobilizacaoDAO(int custoKM, int idMob);
	vector<mobilizacao*>* mobilizacaoDAO::buscarMobilizacao();
};

#endif