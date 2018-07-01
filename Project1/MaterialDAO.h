#ifndef MATERIALDAO_H
#define MATERIALDAO_H

#include "MySQLDAO.h"
#include <stdio.h>
#include <string>
#include <vector>
#include "material.h" 

using namespace std;

class materialDAO
{

public:
	materialDAO();
	void materialDAO::criarMaterialDAO(string tipoMaterial, string unidadeMaterial, int precoUnidade);
	void materialDAO::criarMaterialSaidaDAO(string data, int numOS, int sequencial);
	void materialDAO::deletarMaterialDAO(int idMaterial);
	void materialDAO::alterarMaterialDAO(int precoUnidade, int idMaterial);
	vector<material*>* materialDAO::buscarMaterial();
};

#endif