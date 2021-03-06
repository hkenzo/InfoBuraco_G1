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
	void mobilizacaoDAO::criarMobilizacaoSaidaDAO(int sequencial, string data, int numOS);
	void mobilizacaoDAO::deletarMobilizacaoDAO(int idMob);
	void mobilizacaoDAO::alterarMobilizacaoDAO(int custoKM, int idMob);
	vector<mobilizacao*>* mobilizacaoDAO::buscarMobilizacao();
	vector<mobilizacao*>* mobilizacaoDAO::buscarMobilizacaoSaida(int num, string dat);
	void mobilizacaoDAO::setDuracaoMobilizacao(int dur, int  id, string data, int idE);
};

#endif