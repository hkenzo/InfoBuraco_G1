
#include "buraco.h"

using namespace std;

void buraco::setBuraco(string nomRua, int numRua, string posRua, int tamanho, string regional, string tipoCom, string Com, string nomCid, string dataCont, string horaCont) {
	int numReclamacoes;
	int statusBuraco;
	int prioridade;
	
	this->nomRua = nomRua;
	this->numRua = numRua;
	this->posicao = posRua;
	this->tamanho = tamanho;
	this->regional = regional;
	
	this->tipoCom = tipoCom;
	this->Com = Com;
	this->nomCid = nomCid;
	this->dataCont = dataCont;
	this->horaCont = horaCont;

	this->numReclamacoes = 1;
	this->statusBuraco = 0; //registrado e não finalizado; 1 = finalizado;
	this->prioridade = tamanho;//calculo com base nos dados informadosnumBuraco = 3//numero dado ou pelo banco de dados (automatico) ou por um contador no programa;

//	criarBuracoDAO(nomRua, numRua, posRua, tamanho, regional, tipoCom, Com, nomCid, dataCont, horaCont, numReclamacoes, statusBuraco, prioridade, numBuraco);

};

buraco::buraco()
{
}

buraco::~buraco()
{
}
