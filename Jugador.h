#pragma once
#include "Persona.h"
#include <string>
using namespace std;
class Jugador:public Persona{
	private:
		string lugar;
		string apodo;
		double monto;
	public:
		Jugador();
		Jugador(string,int,string,string,string,double);
		~Jugador();
		double getMonto();
		void setMonto(double);
		string toString();
};