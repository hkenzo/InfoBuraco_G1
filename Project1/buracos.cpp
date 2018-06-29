#include "buracos.h"



buracos::buracos(int numBuraco, string nomeRua, int numeroRua, int tamanho, string posicao, string regional, int prioridade, int numReclamacoes, int satusBuraco, string nomeCidadao, string canalCidadao, string dadoCanal, string dataHora, string reclamacao)
{
	//if check buraco = 0 (buraco não existe)
	this->nomeRua = nomeRua;
	this->numeroRua = numeroRua;
	this->posicao = posicao;
	this->tamanho = tamanho;
	this->regional = regional;

	this->canalCidadao = canalCidadao;
	this->dadoCanal = dadoCanal;
	this->nomeCidadao = nomeCidadao;
	this->dataHora = dataHora;
	this->reclamacao = reclamacao;

	this->numReclamacoes = 1;
	this->statusBuraco = 0; //registrado e não finalizado; 1 = finalizado;
	this->prioridade = tamanho;//calculo com base nos dados informadosnumBuraco = 3//numero dado ou pelo banco de dados (automatico) ou por um contador no programa;

	this->numBuraco = 0;

	buracoDAO * bur = new buracoDAO(numBuraco, nomeRua, numeroRua, tamanho, posicao, regional, prioridade, numReclamacoes, satusBuraco, nomeCidadao, canalCidadao, dadoCanal, dataHora, reclamacao);
	// no começo vou mandar 0, mas vai mudar na criação

	// this -> numBuraco = pega no db
	//this->numBuraco = bur->buscarRua(this->nomRua, this->numRua);
	//int estimativaHoras = tamanho * 3;

	// depois do buraco registrado, deve criar OS
	// gera os parametros da OS
	
	int estimativaEquipamento = tamanho * 50;
	int estimativaMaterial = tamanho * 40;

	//cria OS
//	OS * geraOS = new OS(0, estimativaHoras, estimativaEquipamento, estimativaMaterial, 0, numBuraco);


	//if check buraco = 1 (buraco existe) -> atualizar no reclamacoes
}


buracos::~buracos()
{
}

//void buracos::criarBuraco
//};