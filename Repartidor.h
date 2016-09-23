#pragma once
#include "Persona.h"
#include "baraja.h"
#include <string>
using namespace std;

class Repartidor:public Persona{
	private:
		baraja* cartas;
		string dificultad;
		double dinero;
	public:
		Repartidor();
		~Repartidor();
		Repartidor(string,double);
		baraja getBaraja();
		double getDinero();
};