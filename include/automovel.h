#define _GLIBCXX_USE_CXX11_ABI 0
#ifndef AUTOMOVEL_H
#define AUTOMOVEL_H



#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <algorithm>



using namespace std;

class automovel{
	private: 
		string marca; 
		double preco;
		string chassi; 
		

//Getters e Setters
	public: 
		static int numeroCarros;

		automovel();
		automovel(string marca, double preco, string chassi);
		~automovel();

		string getMarca();
		string setMarca(string marca_); 
		double getPreco();
		double setPreco(double preco_); 
		string getChassi();
		string setChassi(string chassi_);

		friend ostream& operator << (ostream &o, automovel &veiculo);

		bool operator==(const automovel &autom) const;

		bool operator==(const string &marca) const;
	
};




#endif // AUTOMOVEL_H
