#include <stdio.h>
#include <string>

#pragma once
ref class buraco
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

	buraco();


	void criarBuraco(string nomRua, int nomRua, string posRua, int tamanho, string regional, string tipoCom, string Com, string nomCid, string dataCont, string horaCont);

};