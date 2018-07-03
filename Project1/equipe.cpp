#include "equipe.h"

equipe::equipe(string id, int num, int custo) {
	this->identificacaoEquipe = id;
	this->numProfissionais = num;
	this->custoHoraEquipe = custo;
}


void equipe::setNumProfissionais(int novoNum) {
	this->numProfissionais = novoNum;
}
void equipe::setCusto(int novoCusto) {
	this->custoHoraEquipe = novoCusto;
}
string equipe::getId() {
	return this->identificacaoEquipe;
}
int equipe::getNum() {
	return this->numProfissionais;
}

int equipe::getCusto() {
	return this->custoHoraEquipe;
}

equipe::~equipe()
{
	//TODO Auto-generated method stub
}
