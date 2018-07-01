
#include "MySQLDAO.h"
#include <stdio.h>
#include <string>
#include <vector>
#include "buracos.h"


#pragma once
using namespace std;

class buracoDAO
{
public:
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

	buracoDAO(int numBuraco, string nomeRua, int numeroRua, int tamanho, string posicao, string regional, int prioridade, int numReclamacoes, int statusBuraco, string nomeCidadao, string canalCidadao, string dadoCanal, string dataHora, string reclamacao);
	buracoDAO();
	buracos* buscarRua(string nomeRua, int numeroRua);
	//void criarBuracoDAO
	vector<buracos*>* buracoDAO::buscarBuracos();

	void aumentaReclamacao(string rua, int num);
	buracos** getAll();//(int numBuraco, string nomeRua, int numeroRua, int tamanho, string posicao, string regional, int prioridade, int numReclamacoes, int statusBuraco, string nomeCidadao, string canalCidadao, string dadoCanal, string dataHora, string reclamacao);
};

