#include "mobilizacao.h"

mobilizacao::mobilizacao(int custo, int id) {
	this->idMob = id;
	this->custoKm = custo;
}


void mobilizacao::setCusto(int novoCusto) {
	this->custoKm = novoCusto;
}

int mobilizacao::getId() {
	return this->idMob;
}


int mobilizacao::getCusto() {
	return this->custoKm;
}

mobilizacao::~mobilizacao()
{
	//TODO Auto-generated method stub
}
