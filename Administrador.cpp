#include "Administrador.h"
#include <string>
using namespace std;

Administrador::Administrador(){

}
Administrador::~Administrador(){

}
Administrador::Administrador(string nom,int eda,string numero,int tiempo,string car,double suel):Persona(nom,eda,numero),exp(tiempo),cargo(car),sueldo(suel){

}