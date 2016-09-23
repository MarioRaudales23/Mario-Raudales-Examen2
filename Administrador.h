#pragma once
#include "Persona.h"
#include <string>
using namespace std;
class Administrador: public Persona{
	private:
		int exp;
		string cargo;
		double sueldo;
	public:
		Administrador();
		Administrador(string,int,string,int,string,double);
		virtual ~Administrador();
};