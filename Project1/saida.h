#ifndef SAIDA_H
#define SAIDA_H

#include <iostream>
using namespace std;

class saida
{
public:

	string data;
	int numOS;



	saida(string data, int numOS);
	virtual ~saida();

	int getNumOS();
	string getData();


};
#endif