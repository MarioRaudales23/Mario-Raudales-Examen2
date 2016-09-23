#include "carta.h"
#include <string>
#include <sstream>
using namespace std;

carta::carta(){

}
carta::carta(string sim,int val,string valo){
	valor = val;
	simbolo = sim;
	valorr = valo;
	if (sim == "♣" || sim =="♠")
	{
		color = "negro";
	}else{
		color = "rojo";
	}
}
carta::~carta(){

}

int carta::getValor(){
	return valor;
}
void carta::setValor(int val){
	valor = val;
}
string carta::getSimbolo(){
	return simbolo;
}
string carta::toString(){
	stringstream ss;
	ss<<"Simbolo: "<<simbolo<<" Valor: "<<valorr;
	return ss.str();
}