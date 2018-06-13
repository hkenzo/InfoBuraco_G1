#include "equipamento.h"

equipamento::equipamento(string tipo, int id, int custo) {
	this->idEquipamento = id;
	this->tipoEquipamento = tipo;
	this->custoHora = custo;
}


void equipamento::setPreco(int novoPreco) {
	this->custoHora = novoPreco;
}

int equipamento::getId() {
	return this->idEquipamento;
}


string equipamento::getTipo() {
	return this->tipoEquipamento;
}

int equipamento::getPreco() {
	return this->custoHora;
}

equipamento::~equipamento()
{
	//TODO Auto-generated method stub
}
