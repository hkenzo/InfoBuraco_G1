#include "MySQLDAO.h"
#include <stdio.h>
#include <string>
#include <vector>
#include "equipe.h"
#pragma once
using namespace std;

class buracoDAO
{
public:
	buracoDAO(int numBuraco, string nomeRua, int numeroRua, int tamanho, string posicao, string regional, int prioridade, int numReclamacoes, int satusBuraco, string nomeCidadao, string canalCidadao, string dadoCanal, string dataHora, string reclamacao);
	int buscarRua(string nomRua, int numRua);
	//void criarBuracoDAO
};

