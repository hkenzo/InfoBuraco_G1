#ifndef USUARIODAO_H
#define USUARIODAO_H

#include "MySQLDAO.h"
#include <stdio.h>
#include <string>
#include <vector>
#include "usuario.h" 

using namespace std;

class usuarioDAO
{

public:
	usuarioDAO();
	void usuarioDAO::criarUsuarioDAO(string user,string tipo, string senha, string nome);
	vector<usuario*>* usuarioDAO::buscarUsuario(string user);
};

#endif