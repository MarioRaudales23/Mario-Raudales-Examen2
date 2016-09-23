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