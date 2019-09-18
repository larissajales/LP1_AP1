#define _GLIBCXX_USE_CXX11_ABI 0
#ifndef CONCESSIONARIA_H
#define CONCESSIONARIA_H

#include<iostream>
#include<vector>
#include<string>
#include<iterator>
#include<algorithm>


#include "automovel.h"


using namespace std;


class concessionaria{

private:
	string nome;
	int cnpj;
	vector<automovel*> listaConc;


public:
	static int numeroConc;

	//construtor
	concessionaria();

	// destrutor
	~concessionaria();


	concessionaria(string nome_, int cnpj_, const vector<automovel*>lista_);

	string get_nome();
	int get_cnpj();
	

	bool add_carro();
	bool lista_carro();
	int estoque();
	bool operator==(concessionaria a){
		return a.get_cnpj() == cnpj;
	}


	friend ostream& operator<< (ostream &o, concessionaria &concessionaria);
	bool operator==(const concessionaria &conc) const;


};

#endif 
