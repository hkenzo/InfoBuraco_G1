#include "MySQLDAO.h"
#include <stdio.h>
#include <string>
#include <msclr\marshal_cppstd.h>
#include <vector>
using namespace std;
#pragma once
class buracoDAO
{
public:
	buracoDAO();
	void criarBuracoDAO(string nomRua, int numRua, string posRua, int tamanho, string regional, string tipoCom, string Com, string nomCid, string dataCont, string horaCont, int numReclamacoes, int statusBuraco, int prioridade, int numBuraco);

};

