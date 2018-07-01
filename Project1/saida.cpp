#include "saida.h"

saida::saida(string data, int numOS) {
	this->data = data;
	this->getNumOS = numOS;
}


int saida::getNumOS() {
	return this->getNumOS;
}
string saida::getData() {
	return this->data;
}



saida::~saida()
{
	//TODO Auto-generated method stub
}
