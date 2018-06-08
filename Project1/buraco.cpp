#include "buraco.h"



buraco::buraco()
{
}

void criarBuraco(string nomRua, int nomRua, string posRua, int tamanho, string regional, string tipoCom, string Com, string nomCid, string dataCont, string horaCont) {
	this->nomRua = nomRua;
	this->numRua = numRua;
	this->posicao = posicao;
	this->tamanho = tamanho;
	this->regional = regional;
	
	this->tipoCom = tipoCom;
	this->Com = Com;
	this->nomCid = nomCid;
	this->dataCont = dataCont;
	this->horaCont = horaCont;

	this->numReclamacoes = 1;
	this->statusBuraco = 0; //registrado e não finalizado; 1 = finalizado;
	this->prioridade = tamanho//calculo com base nos dados informados
		numBuraco = 3//numero dado ou pelo banco de dados (automatico) ou por um contador no programa;

		criarBuracoDAO(string nomRua, int nomRua, string posRua, int tamanho, string regional, string tipoCom, string Com, string nomCid, string dataCont, string horaCont, int numReclamacoes, int statusBuraco, int prioridade, int numBuraco);

};