#include "Persona.h"
#include <string>
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