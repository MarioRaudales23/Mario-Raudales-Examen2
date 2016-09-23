#pragma once
#include "Jugador.h"
#include "Repartidor.h"

class mesa{
	private:
		Repartidor* repa;
		Jugador* juga;
		int nummesa;
		string tipo;
	public:
		mesa();
		mesa(Repartidor*,Jugador*,int,string);
		~mesa();
		Repartidor* getRepartidor();
		Jugador* getJugador();
		int getMesa();
};