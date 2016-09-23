#include "Repartido.h"
#include "baraja.j"

Repartidor::Repartidor(){
	
}
Repartidor::Repartidor(string nom,int eda,string num,string dific,double money):Persona(nom,eda,num),dificultad(dific),dinero(money){
	cartas = new baraja();
}
Repartidor::~Repartidor(){

}
baraja Repartidor::getBaraja(){
	return cartas;
}
double Repartidor::getDinero(){
	return dinero
}