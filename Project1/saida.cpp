#include "saida.h"

saida::saida(string data, int numOS) {
	this->data = data;
	this->numOS = numOS;
}


int saida::getNumOS() {
	return this->numOS;
}
string saida::getData() {
	return this->data;
}



saida::~saida()
{
	//TODO Auto-generated method stub
}
