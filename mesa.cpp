#include "mesa.h"
#include "Jugador.h"
#include "Repartidor.h"
#include <string>
using namespace std;

mesa::mesa(){
	
}

mesa::mesa(Repartidor* rep,Jugador* jug,int num,string tip){
	repa = rep;
	juga = jug;
	nummesa = num;
	tipo = tip;
}
mesa::~mesa(){

}
Repartidor* mesa::getRepartidor(){
	return repa;
}
Jugador* mesa::getJugador(){
	return juga;
}
int mesa::getMesa(){
	return nummesa;
}
void mesa::setMesa(int mes){
	nummesa =mes;
}
void mesa::setTipo(string mes){
	tipo =mes;
}
void mesa::setRepartidor(Repartidor* mes){
	repa =mes;
}
void mesa::setJugador(Jugador* mes){
	juga =mes;
}