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
	//this->prioridadeOS = 0; // valor default

}

//OS::OS(int numOS, int estimativaHoras, int estimativaEquipamento, int estimativaMaterial, int statusOS, int numBuraco, int prioridadeOS)
//{
//	this->numOS = numOS;
//	this->estimativaHoras = estimativaHoras;
//	this->estimativaEquipamento = estimativaEquipamento;
//	this->estimativaMaterial = estimativaMaterial;
//	this->statusOS = statusOS;
//	this->numBuraco = numBuraco;
//	this->prioridadeOS = prioridadeOS;
//
//}

OS::~OS()
{
}

int OS::getNumOS() 
{
	return this->numOS;
}

int OS::getEstHoras()
{
	return this->estimativaHoras;
}

int OS::getEstMat()
{
	return this->estimativaMaterial;
}

int OS::getEstEquipam()
{
	return this->estimativaEquipamento;
}

int OS::getStatusOS()
{
	return this->statusOS;
}

int OS::getNumBuraco()
{
	return this->numBuraco;
}
