#pragma once

#include "MySQLDAO.h"
#include <stdio.h>
#include <string>
#include <vector>
#include "buracos.h"

using namespace std;

class OS
{
public:
	int numOS;
	int estimativaHoras;
	int estimativaEquipamento;
	int estimativaMaterial;
	int statusOS;
	int numBuraco;
	//int prioridadeOS;

	OS(int numOS, int estimativaHoras, int estimativaEquipamento, int estimativaMaterial, int statusOS, int numBuraco);
	//OS(int numOS, int estimativaHoras, int estimativaEquipamento, int estimativaMaterial, int statusOS, int numBuraco, int prioridadeOS);
	
	~OS();

	OS();

	int getNumOS();
	int getEstHoras();
	int getEstMat();
	int getEstEquipam();
	int getStatusOS();
	int getNumBuraco();
};

