#pragma once
#include <string>
using namespace std;
class carta{
	private:
		string simbolo;
		int valor;
		string valorr;
		string color;
	public:
		carta();
		carta(string,int,string);
		~carta();
		int getValor();
		void setValor(int);
		string getSimbolo();
		string toString();
};