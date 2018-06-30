#ifndef MATERIAL_H
#define MATERIAL_H

#include <iostream>
using namespace std;

class material
{
private:

	string tipoMaterial;
	string unidadeMaterial;
	int precoUnidade;
	int idMaterial;


public:

	material(string tipoMaterial, string unidadeMaterial, int precoUnidade, int idMaterial);
	virtual ~material();

	void setPreco(int novoPreco);
	int getId();
	string getUnidade();
	string getTipo();
	int getPreco();

};
#endif
