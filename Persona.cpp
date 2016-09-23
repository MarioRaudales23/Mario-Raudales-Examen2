#include "Persona.h"
#include <string>
#include <sstream>
using namespace std;

Persona::Persona(){

}
Persona::Persona(string nom,int eda,string numero){
	nombre = nom;
	edad = eda;
	identidad = numero;
}
Persona::~Persona(){

}
string Persona::getNombre(){
	return nombre;
}
string Persona::getID(){
	return identidad;
}
string Persona::toString(){
	stringstream ss;
	ss<<"Nombre ":nombre<<" ID: "<<identidad<<" Edad: "<<edad;
	return ss.str();
}