#include "buracos.h"

buracos::buracos(int a, string b)
{
	this->numBuraco = a;
	this->nomeRua = b;
}

buracos::buracos(int numBuraco, string nomeRua, int numeroRua, int tamanho, string posicao, string regional, int prioridade, int numReclamacoes, int statusBuraco, string nomeCidadao, string canalCidadao, string dadoCanal, string dataHora, string reclamacao)
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
	//this->statusBuraco = 0; //registrado e não finalizado; 1 = finalizado;
	this->prioridade = tamanho;//calculo com base nos dados informadosnumBuraco = 3//numero dado ou pelo banco de dados (automatico) ou por um contador no programa;

	this->numBuraco = 0;
	
//	buracoDAO * burDAO = new buracoDAO(numBuraco, nomeRua, numeroRua, tamanho, posicao, regional, prioridade, numReclamacoes, statusBuraco, nomeCidadao, canalCidadao, dadoCanal, dataHora, reclamacao);
	// no começo vou mandar 0, mas vai mudar na criação

	// this -> numBuraco = pega no db
//	vector<buracoDAO*>* temp2 = burDAO->buscarRuae();//(numBuraco, nomeRua, numeroRua, tamanho, posicao, regional, prioridade, numReclamacoes, statusBuraco, nomeCidadao, canalCidadao, dadoCanal, dataHora, reclamacao);
	//this->numBuraco = bur->buscarRua(this->nomeRua, this->numeroRua);
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

int buracos::getNum()
{
	return this->numBuraco;
}

void buracos::setNum(int numero)
{
	this->numBuraco = numero;
}

string buracos::getRua() 
{
	return this->nomeRua;
}
int buracos::getRuaNum() 
{
	return this->numeroRua;
 }


