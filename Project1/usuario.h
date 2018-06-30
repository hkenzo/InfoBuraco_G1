#ifndef USUARIO_H
#define USUARIO_H

#include <iostream>
using namespace std;

class usuario
{
private:

	string tipoUser;
	string senha;
	string user;
	string nome;


public:

	usuario(string user, string senha, string nome, string tipo);
	virtual ~usuario();

	string getNome();
	string getTipo();
	string getSenha();
	string getUser();

};

#endif
