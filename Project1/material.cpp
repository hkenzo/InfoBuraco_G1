#include "material.h"

material::material(string tipo, string unidade, int preco, int id) {
	this->idMaterial = id;
	this->tipoMaterial = tipo;
	this->precoUnidade = preco;
	this->unidadeMaterial = unidade;
}


void material::setPreco(int novoPreco) {
	this->precoUnidade = novoPreco;
}
int material::getId() {
	return this->idMaterial;
}
string material::getUnidade() {
	return this->unidadeMaterial;
}

string material::getTipo() {
	return this->tipoMaterial;
}

int material::getPreco() {
	return this->precoUnidade;
}

material::~material()
{
	//TODO Auto-generated method stub
}
