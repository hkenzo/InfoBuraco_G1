#ifndef EQUIPEDAO_H
#define EQUIPEDAO_H

#include "MySQLDAO.h"
#include <stdio.h>
#include <string>
#include <vector>
#include "equipe.h" 

using namespace std;

class equipeDAO
{

public:
	equipeDAO();
	void equipeDAO::criarEquipeDAO(int identificacaoEquipe, int numProfissionais, int custoHoraEquipe);
	void equipeDAO::criarEquipeSaidaDAO(int identificacaoEquipe, string data, int numOS);
	void equipeDAO::deletarEquipeDAO(int identificacaoEquipe);
	void equipeDAO::editarEquipeDAO(int identificacaoEquipe, int numProfissionais, int custoHoraEquipe);
	vector<equipe*>* equipeDAO::buscarEquipe();
};

#endif