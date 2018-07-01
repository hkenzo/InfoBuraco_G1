#include "OS.h"

OS::OS()
{

}

OS::OS(int numOS, int estimativaHoras, int estimativaEquipamento, int estimativaMaterial, int statusOS, int numBuraco)
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
