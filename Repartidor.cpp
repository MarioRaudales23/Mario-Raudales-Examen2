#include "Repartidor.h"
#include "baraja.h"
#include <string>
#include <sstream>
using namespace std;

Repartidor::Repartidor(){
	
}
Repartidor::Repartidor(string nom,int eda,string num,string dific,double money):Persona(nom,eda,num),dificultad(dific),dinero(money){
	cartas = new baraja();
}
Repartidor::~Repartidor(){

}
baraja* Repartidor::getBaraja(){
	return cartas;
}
double Repartidor::getDinero(){
	return dinero;
}
string Repartidor::toString(){
	stringstream ss;
	ss<<Persona::toString()<<" Dificultad: "<<dificultad<<" Dinero: "<<dinero;
	return ss.str();
}