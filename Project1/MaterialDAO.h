#include "MySQLDAO.h"
#include <stdio.h>
#include <string>
using namespace std;

class MaterialDAO
{

public:
	MaterialDAO();
	void MaterialDAO::criarMaterialDAO(string nomematerial, string unidademedida, int custo);
	void MaterialDAO::deletarMaterialDAO(string nomematerial);
	//void MaterialDAO::editarMaterialDAO(string nomematerial, string unidademedida, int custo);
	//Material MaterialDAO::buscarMaterial(string nomematerial);
};