
#pragma once
#include "MySQLDAO.h"
#include <stdio.h>
#include <string>
#include <vector>
#include "equipe.h" 
#include "OS.h"




using namespace std;


class buracos
{
public:
	buracos(int a, string b);
	int numBuraco;
	string nomeRua;
	int numeroRua;
	int tamanho;
	string posicao;
	string regional;
	int prioridade;
	int numReclamacoes;
	int statusBuraco;
	string nomeCidadao;
	string canalCidadao;
	string dadoCanal;
	string dataHora;
	string reclamacao;

	void setNum(int numero);
	buracos(int numBuraco, string nomeRua, int numeroRua, int tamanho, string posicao, string regional, int prioridade, int numReclamacoes, int satusBuraco, string nomeCidadao, string canalCidadao, string dadoCanal, string dataHora, string reclamacao);
	
	~buracos();

	int getNum();
	string buracos::getRua();
	int buracos::getRuaNum();
	int getTamanho();
	string getPosicao();
	string getRegional();
	int getPrioridade();
	int getNumReclamacoes();
	int getStatusBuraco();
	string getNomeCid();
	string getCanalCid();
	string getDadoCanal();
	string getDataHora();
	string getReclamacao();
	//void criarBuraco(string nomRua, int numRua, string posRua, int tamanho, string regional, string tipoCom, string Com, string nomCid, string dataCont, string horaCont);

};

