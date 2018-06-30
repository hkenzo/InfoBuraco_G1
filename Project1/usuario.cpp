#include "usuario.h"

usuario::usuario(string user, string senha, string nome, string tipo) {
	this->tipoUser = tipo;
	this->senha = senha;
	this->user = user;
	this->nome = nome;
}



string usuario::getTipo() {
	return this->tipoUser;
}

string usuario::getUser() {
	return this->user;
}

string usuario::getSenha() {
	return this->senha;
}

string usuario::getNome() {
	return this->nome;
}



usuario::~usuario()
{
	//TODO Auto-generated method stub
}
