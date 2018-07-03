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
	OSDAO(int estimativaHoras, int estimativaEquipamento, int estimativaMaterial, int numOS, int statusOS, int numBuraco);
	OSDAO();
	void setStatusD(int status, int numOS);
	vector <OS*>* getOS();
};