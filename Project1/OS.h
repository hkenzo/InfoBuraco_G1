#pragma once

#include "MySQLDAO.h"
#include <stdio.h>
#include <string>
#include <vector>

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

	int getNumOS();
	int getEstimativaHoras();
	int getEstimativaEquipamento();
	int getEstimativaMaterial();
	int getStatusOS();
	int getNumBuraco();

	OS( int estimativaHoras, int estimativaEquipamento, int estimativaMaterial, int numOS, int statusOS, int numBuraco);
	
	~OS();

	OS();
};

