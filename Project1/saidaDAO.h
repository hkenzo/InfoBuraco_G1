#ifndef SAIDADAO_H
#define SAIDADAO_H

#include "MySQLDAO.h"
#include <stdio.h>
#include <string>
#include <vector>
#include "saida.h" 

using namespace std;

class saidaDAO
{

public:
	saidaDAO();
	void saidaDAO::criarSaidaDAO(string data, int numOS);
	void saidaDAO::deletarSaidaDAO(string data, int numOS);
	vector<saida*>* saidaDAO::buscarSaida();
};

#endif