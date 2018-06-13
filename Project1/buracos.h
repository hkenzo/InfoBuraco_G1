
#pragma once
#include "MySQLDAO.h"
#include <stdio.h>
#include <string>
#include <vector>
#include "equipe.h" 
#include "OS.h"

#include "buracoDAO.h"



using namespace std;


class buracos
{
public:
	int numBuraco;
	int prioridade;
	int numReclamacoes;
	int statusBuraco;

	string nomRua;
	int numRua;
	string posRua;
	int tamanho;
	string regional;
	string tipoCom;
	string Com;
	string nomCid;
	string dataHora;
	string reclamacao;

	buracos(string nomRua, int numRua, string posRua, int tamanho, string regional, string tipoCom, string Com, string nomCid, string dataHora, string reclamacao);

	~buracos();

	//void criarBuraco(string nomRua, int numRua, string posRua, int tamanho, string regional, string tipoCom, string Com, string nomCid, string dataCont, string horaCont);

};

