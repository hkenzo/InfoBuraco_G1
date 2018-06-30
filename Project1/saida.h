#ifndef SAIDA_H
#define SAIDA_H

#include <iostream>
using namespace std;

class saida
{
private:

	string data
	int numOS;


public:

	saida(string data, int numOS);
	virtual ~saida();

	int getNumOS();
	string getData();


};
#endif