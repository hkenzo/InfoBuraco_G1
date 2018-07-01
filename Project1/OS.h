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

	OS(int numOS, int estimativaHoras, int estimativaEquipamento, int estimativaMaterial, int statusOS, int numBuraco);
	
	~OS();

	OS();
};

