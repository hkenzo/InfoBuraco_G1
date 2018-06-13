#include "buracos.h"



buracos::buracos(string nomRua, int numRua, string posRua, int tamanho, string regional, string tipoCom, string Com, string nomCid, string dataHora, string reclamacao)
{
	//if check buraco = 0 (buraco não existe)
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
	
	// this -> numBuraco = pega no db
	this->numBuraco = bur->buscarRua(this->nomRua, this->numRua);
	int estimativaHoras = tamanho * 3;

	// depois do buraco registrado, deve criar OS
	// gera os parametros da OS
	
	int estimativaEquipamento = tamanho * 50;
	int estimativaMaterial = tamanho * 40;

	//cria OS
	OS * geraOS = new OS(0, estimativaHoras, estimativaEquipamento, estimativaMaterial, 0, numBuraco);


	//if check buraco = 1 (buraco existe) -> atualizar no reclamacoes
}


buracos::~buracos()
{
}

//void buracos::criarBuraco
//};