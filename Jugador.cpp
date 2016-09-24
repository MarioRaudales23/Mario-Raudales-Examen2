#include "Jugador.h"
#include <string>
#include <sstream>
using namespace std;

Jugador::Jugador(){

}

Jugador::Jugador(string nom,int eda,string num,string lug,string apod,double din):Persona(nom,eda,num),lugar(lug),apodo(apod),monto(din){

}
Jugador::~Jugador(){

}
double Jugador::getMonto(){
	return monto;
}
void Jugador::setMonto(double nuevo){
	monto = nuevo;
}
string Jugador::toString(){
	stringstream ss;
	ss<<Persona::toString()<<" Lugar: "<<lugar<<" Apodo: "<<apodo<<" Monto: "<<monto;
	return ss.str();
}