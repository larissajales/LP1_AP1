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

automovel::automovel(){
	marca = " ";
	preco = 0;
	chassi = " ";
	++numeroCarros;
}

automovel::automovel(string marca_, double preco_, string chassi_){
	marca = marca_;
	preco = preco_;
	chassi= chassi_;
	++numeroCarros;
}
automovel::~automovel(){
	--numeroCarros;
}


string automovel::setMarca(string marca_){
	marca=marca_;
	return marca;
}
double automovel::setPreco(double preco_){
	preco = preco_;
	return preco;

}


string automovel::setChassi(string chassi_){
	chassi = chassi_;
	return chassi;
}

ostream& operator<< (ostream &o, automovel &veiculo){
	o << "> Marca: " << veiculo.marca << endl
	  << "> Preco: " << veiculo.preco << endl
	  << "> Numero do Chassi: " << veiculo.chassi << endl;
	return o;
}

bool automovel::operator==(const automovel &autom) const {
	if (this->marca == autom.marca){
		return true;
	} else {
		return false;
	}
}

bool automovel::operator==(const std::string &marca) const {
	if (this->marca == marca){
		return true;
	} else {
		return false;
	}
}