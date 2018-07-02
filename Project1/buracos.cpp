#include "buracos.h"

buracos::buracos(int a, string b)
{
	this->numBuraco = a;
	this->nomeRua = b;
}

buracos::buracos(int numBuraco, string nomeRua, int numeroRua, int tamanho, string posicao, string regional, int prioridade, int numReclamacoes, int statusBuraco, string nomeCidadao, string canalCidadao, string dadoCanal, string dataHora, string reclamacao)
{
	//if check buraco = 0 (buraco n�o existe)
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

	this->numReclamacoes = numReclamacoes;
	this->statusBuraco = statusBuraco; //registrado e n�o finalizado; 1 = finalizado;
	this->prioridade = prioridade;//calculo com base nos dados informadosnumBuraco = 3//numero dado ou pelo banco de dados (automatico) ou por um contador no programa;

	this->numBuraco = numBuraco;
	
//	buracoDAO * burDAO = new buracoDAO(numBuraco, nomeRua, numeroRua, tamanho, posicao, regional, prioridade, numReclamacoes, statusBuraco, nomeCidadao, canalCidadao, dadoCanal, dataHora, reclamacao);
	// no come�o vou mandar 0, mas vai mudar na cria��o

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
string buracos::getNomeCid() {
	return this->nomeCidadao;
}


string buracos::getCanalCid()
{
	return this->canalCidadao;
}
string buracos::getDadoCanal()
{
	return this->dadoCanal;
}
string buracos::getDataHora()
{
	return this->dataHora;
}
;
int buracos::getTamanho()
{
	return this->tamanho;
}
string buracos::getPosicao()
{
	return this->posicao;
}
string buracos::getRegional()
{
	return this->regional;
}
int buracos::getPrioridade()
{
	return this->prioridade;
}
int buracos::getNumReclamacoes()
{
	return this->numReclamacoes;
}
int buracos::getStatusBuraco()
{
	return this->statusBuraco;
}
string buracos::getReclamacao()
{
	return this->reclamacao;
}