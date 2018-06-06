#include "MySQLDAO.h"
#include <stdio.h>
#include <string>
using namespace std;

class equipeDAO
{

public:
	equipeDAO();
	void equipeDAO::criarEquipeDAO(string identificacaoEquipe, int numProfissionais, int custoHoraEquipe);
	void equipeDAO::deletarEquipeDAO(string identificacaoEquipe);
	void equipeDAO::editarEquipeDAO(string identificacaoEquipe, int numProfissionais, int custoHoraEquipe);
	//equipe equipeDAO::buscarEquipe(string nomeequipe);
};