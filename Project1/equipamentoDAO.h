#ifndef EQUIPAMENTODAO_H
#define EQUIPAMENTODAO_H

#include "MySQLDAO.h"
#include <stdio.h>
#include <string>
#include <vector>
#include "equipamento.h" 

using namespace std;

class equipamentoDAO
{

public:
	equipamentoDAO();
	void equipamentoDAO::criarEquipamentoDAO(string tipoEquipamento, int id, int custoHoraEquipamento);
	void equipamentoDAO::deletarEquipamentoDAO(int id);
	void equipamentoDAO::editarEquipamentoDAO(int id, int custoHoraEquipamento);
	vector<equipamento*>* equipamentoDAO::buscarEquipamento();
};

#endif