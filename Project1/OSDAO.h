#pragma once

#include "MySQLDAO.h"
#include <stdio.h>
#include <string>
#include <vector>
#include "OS.h"

using namespace std;

class OSDAO
{
public:

	int numOS;
	int estimativaHoras;
	int estimativaEquipamento;
	int estimativaMaterial;
	int statusOS;
	int numBuraco;
	//int prioridadeOS;

	OSDAO(int numOS, int estimativaHoras, int estimativaEquipamento, int estimativaMaterial, int statusOS, int numBuraco);
	OSDAO();
	
	vector<OS*>* OSDAO::buscarOS();
	void setStatusOS(int statusOS, int numOS);
};

