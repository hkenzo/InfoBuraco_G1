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
	void equipeDAO::criarEquipeDAO(string identificacaoEquipe, int numProfissionais, int custoHoraEquipe);
	void equipeDAO::criarEquipeSaidaDAO(string  identificacaoEquipe, string data, int numOS);
	void equipeDAO::deletarEquipeDAO(string  identificacaoEquipe);
	void equipeDAO::editarEquipeDAO(string  identificacaoEquipe, int numProfissionais, int custoHoraEquipe);
	vector<equipe*>* equipeDAO::buscarEquipe();
	vector<equipe*>* buscarEquipeSaida(int num, string dat);
	void setHorasTrabalho(int horas, int  id, string data,string idE);
};

#endif