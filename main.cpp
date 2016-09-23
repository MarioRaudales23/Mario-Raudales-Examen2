#include "Persona.h"
#include "Repartidor.h"
#include "Administrador.h"
#include "Jugador.h"
#include "baraja.h"
#include "carta.h"
#include "mesa.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	Administrador* admin = new Administrador("Juan",20,"1590",10,"Gerente General",14500.00);
	cout<<"Nombre Admin: "<<admin->getNombre()<<" ID: "<<admin->getID();
	vector<Persona*> personas;
	vector<mesa> mesas;
	Persona* actual;
	int conjuga=0,conrepa=0;
	string nombre,id;
	char resp = 's';
	while(resp == 's' || resp == 'S'){
		cout<<"Ingrese el nombre de la persona: ";
		cin>>nombre;
		cout<<"Ingrese el Id de la persona: ";
		cin>>id;
		for (int i = 0; i < personas.size(); ++i)
		{
			if (dynamic_cast<Jugador*>(personas.at(i))!=NULL)
			{
				Jugador* apostador = dynamic_cast<Jugador*>(personas.at(i));
			}
		}
		if (nombre == admin->getNombre() && admin->getID() == id)
		{
			int menu;
			cout<<"1-Agregar Jugadores\n2-Agregar Repartidores\n3-Gestionar Mesas\n....";
			cin>>menu;
			while(menu != 4){
				switch(menu){
					case 1:{
						string nom;
						string id;
						int edad;
						string apodo;
						string lugar;
						double monto;
						cout<<"Ingrese el nombre";
						cin>>nombre;
						do
						{
							cout<<"Ingrese un id";
							cin>>id;
						} while (id.size() != 4);
						do
						{
							cout<<"Ingrese la edad";
							cin>>edad;
						} while (edad < 0);
						cout<<"Ingrese el apodo: ";
						cin>>apodo;
						cout<<"Ingrese el lugar: ";
						cin>>lugar;
						do
						{
							cout<<"Ingrese el monto de dinero que tiene";
							cin>>monto;
						} while (monto < 0);
						personas.push_back(new Jugador(nombre,edad,id,apodo,lugar,monto));
						conjuga++;
						break;
					}
					case 2:{
						string nom;
						string id;
						int edad;
						double din;
						string tipo;
						cout<<"Ingrese el nombre";
						cin>>nombre;
						do
						{
							cout<<"Ingrese un id";
							cin>>id;
						} while (id.size() != 4);
						do
						{
							cout<<"Ingrese la edad";
							cin>>edad;
						} while (edad < 0);
						int numero;
						do
						{
							cout<<"1-Facil\n2-Intermedio\n3-Dificil\n.....";
							cin>>numero;
							switch(numero){
								case 1:{
									tipo = "Facil";
									break;
								}
								case 2:{
									tipo = "Intermedio";
									break;
								}
								case 3:{
									tipo = "Dificil";
									break;
								}
							}
						} while (numero != 1 || numero != 2 || numero!= 3);
						do
						{
							cout<<"Ingrese el dinero que le dio el casino: ";
							cin>>din;
						} while (din < 0);
						personas.push_back(new Repartidor(nom,edad,id,tipo,din));
						conrepa++;
						break;
					}
					case 3:{
						if (conjuga > 0 && conrepa > 0 )
						{
							int submenu;
							cout<<"1-Agregar Mesa\n2-Modificar Mesa\n3-Eliminar Mesa\n.....";
							cin>>submenu;
							switch(submenu){
								case 1:{
									break;
								}
								case 2:{
									break;
								}
								case 3:{
									break;
								}
							}
						}
						break;
					}
				}
			}
		}
		cout<<"Desea ingresar como otra Persona[s/n]: ";
		cin>>resp;
	}
	return 0;
}