#define _GLIBCXX_USE_CXX11_ABI 0
#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <algorithm>

#include "gerenciar.h"
#include "automovel.h"
#include "concessionaria.h"

using namespace std;

concessionaria::concessionaria(){

}

concessionaria::concessionaria(string nome_, int cnpj_, const vector<automovel*>lista_){
	nome = nome_;
	cnpj = cnpj_;
	listaConc = lista_;
	++(++numeroConc);
}

concessionaria::~concessionaria(){
	--numeroConc;

}


string concessionaria::get_nome(){
	return nome; 
}

int concessionaria::get_cnpj(){
	int cnpj_ = 0;

	cnpj = cnpj_;
	return cnpj; 
}



bool concessionaria::add_carro(){
	string chassi;
	string marca;
	double preco;

	cout << endl << "-> Digite os dados do carro";

	cout << endl << "Numero do Chassi: ";
	getline(cin,chassi);

	cout << endl << "Marca: ";
	getline(cin,marca);

	cout << endl << "Preço: ";	
	cin >> preco;


	// Ira conferir apenas o chassi pois o chassi é como se fosse o cpf do carro, é unico
	automovel *autom = new automovel(marca, preco, chassi);

	for (vector<automovel*>::iterator it = listaConc.begin(); it != listaConc.end(); ++it){
		if (**it == *autom){
			cout << endl << "Carro ja cadastrado. Operacao CANCELADA!" << endl;
			return false;	
		}
	}

	listaConc.push_back(autom);

	return true;
}


int concessionaria::estoque(){
	return listaConc.size();
}


   ostream& operator<<(ostream &o, concessionaria &concessionaria){
	for (vector<automovel*>::iterator i = concessionaria.listaConc.begin(); i != concessionaria.listaConc.end(); ++i)
	{
		o << (**i) << endl;
	}
	return o;
}

bool concessionaria::operator==(const concessionaria &conc) const{
	if (this->nome == conc.nome){
		return true;
	} else {
		return false;
	}
}











