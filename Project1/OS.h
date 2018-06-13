#pragma once
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
};

