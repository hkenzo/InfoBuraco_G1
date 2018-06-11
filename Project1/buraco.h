#ifndef BURACO_H
#define BURACO_H

#include "MySQLDAO.h"
#include <stdio.h>
#include <string>
#include <vector>
#include "equipe.h" 

#include "buracoDAO.h"

using namespace std;
#pragma once

class buraco
{
public:
	int numBuraco;
	int prioridade;
	int numReclamacoes;
	int statusBuraco;

	string reclamacao;

	string nomRua;
	int numRua;
	string posRua;
	int tamanho;
	string regional;
	string tipoCom;
	string Com;
	string nomCid;
	string dataCont;
	string horaCont;
																							
	void setBuraco(string nomRua, int numRua, string posRua, int tamanho, string regional, string tipoCom, string Com, string nomCid, string dataCont, string horaCont, int numReclamacoes, int statusBuraco, int prioridade, int numBuraco);
	~buraco();
	buraco();
};

#endif