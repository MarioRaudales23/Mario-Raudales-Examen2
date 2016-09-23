#pragma once
#include <string>
using namespace std;
class Persona{
	private:
		string nombre;
		int edad;
		string identidad;
	public:
		Persona();
		Persona(string,int,string);
		virtual ~Persona()=0;
		string getNombre();
		string getID();
		virtual string toString();
};