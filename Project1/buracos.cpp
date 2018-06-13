#include "buracos.h"



buracos::buracos(string nomRua, int numRua, string posRua, int tamanho, string regional, string tipoCom, string Com, string nomCid, string dataHora, string reclamacao)
{
	this->nomRua = nomRua;
	this->numRua = numRua;
	this->posRua = posRua;
	this->tamanho = tamanho;
	this->regional = regional;

	this->tipoCom = tipoCom;
	this->Com = Com;
	this->nomCid = nomCid;
	this->dataHora = dataHora;
	this->reclamacao = reclamacao;

	this->numReclamacoes = 1;
	this->statusBuraco = 0; //registrado e não finalizado; 1 = finalizado;
	this->prioridade = tamanho;//calculo com base nos dados informadosnumBuraco = 3//numero dado ou pelo banco de dados (automatico) ou por um contador no programa;

	this->numBuraco = 0;

	buracoDAO * bur = new buracoDAO(nomRua, numRua, posRua, tamanho, regional, tipoCom, Com, nomCid, dataHora, numReclamacoes, statusBuraco, prioridade, 0, reclamacao); // no começo vou mandar 0, mas vai mudar na criação

	// depois do buraco registrado, deve criar OS
}


buracos::~buracos()
{
}

//void buracos::criarBuraco
//};