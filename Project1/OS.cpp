#include "OS.h"

OS::OS()
{

}

OS::OS(int estimativaHoras, int estimativaEquipamento, int estimativaMaterial, int numOS, int statusOS, int numBuraco)
{
	this->numOS = numOS;
	this->estimativaHoras = estimativaHoras;
	this->estimativaEquipamento = estimativaEquipamento;
	this->estimativaMaterial = estimativaMaterial;
	this->statusOS = statusOS;
	this->numBuraco = numBuraco;

}


OS::~OS()
{
}


int OS::getNumOS()
{
	return this->numOS;
}
int OS::getEstimativaHoras()
{
	return this->estimativaHoras;
}
int OS::getEstimativaEquipamento()
{
	return this->estimativaEquipamento;
}
int OS::getEstimativaMaterial()
{
	return this->estimativaMaterial;
}
int OS::getStatusOS()
{
	return this->statusOS;
}
int OS::getNumBuraco()
{
	return this->numBuraco;
}