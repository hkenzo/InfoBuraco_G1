
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

	vector<buracos*>* buracoDAO::getCidadaoNotificar();
	buracoDAO(int numBuraco, string nomeRua, int numeroRua, int tamanho, string posicao, string regional, int prioridade, int numReclamacoes, int statusBuraco, string nomeCidadao, string canalCidadao, string dadoCanal, string dataHora, string reclamacao);
	buracoDAO();
	buracos* buscarRua(string nomeRua, int numeroRua); 

	vector<buracos*>* buracoDAO::buscarBuracos();
	void buracoDAO::setStatusBur(int statusBuraco, int numeroBuraco);
	void buracoDAO::setStatusBuraco(int statusBuraco, string nomeRua, int numRua);
	void aumentaReclamacao(string rua, int num);
	void setPrioridadeBuraco(int prioridade, string rua, int num);
	vector<buracos*>* buracoDAO::getBuraco(int numeroBuraco);
	void editarBuracoDAO(int prioridade, int numeroBuraco);
	vector <buracos*>* buracoDAO::buscarBuracosAbertos();


};

