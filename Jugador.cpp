#include "Jugador.h"
#include <string>
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