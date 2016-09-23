#pragma once
#include "carta.h"
#include <vector> 
class baraja{
	private:
		vector<carta*> cartas; 
	public:
		baraja();
		~baraja();
		void reinicio();
		vector<carta*> getBaraja();
};