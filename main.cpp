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
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(int argc, char const *argv[])
{
	Administrador* admin = new Administrador("Juan",20,"1590",10,"Gerente General",14500.00);
	cout<<"Nombre Admin: "<<admin->getNombre()<<" ID: "<<admin->getID();
	vector<Persona*> personas;
	vector<mesa*> mesas;
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
				if (apostador->getNombre() == nombre && apostador->getID() == id)
				{
					bool continuar = true;
					bool entra = false;
					vector<carta*> jugar;
					vector<carta*> repar;
					mesa* actual;
					for (int i = 0; i < mesas.size(); ++i)
					{
						if (mesas.at(i)->getJugador()->getNombre()==nombre && mesas.at(i)->getJugador()->getID()==id)
						{
							actual = mesas.at(i);
							entra = true;
						}
					}
					if (entra)
					{
						Repartidor* temre = actual->getRepartidor();
						Jugador* temju = actual->getJugador();
						baraja* baraja = temre->getBaraja();
						int valorj,valorr;
						int tama = 52;
						int apuesta;
						double dineroj,dineror;
						dineror = temre->getDinero();
						dineroj = temju->getMonto();
						do
						{
							cout<<"Ingrese su apuesta ";
							cin>>dineroj;
						} while (dineroj < apuesta);
						while(continuar){
							for (int i = 0; i < 2; ++i)
							{
								int cartatem;
								srand (time(NULL));
								cartatem = rand() % tama;
								repar.push_back(baraja->getBaraja().at(cartatem));
								baraja->getBaraja().erase(baraja->getBaraja().begin()+cartatem);
								tama--;
							}
							for (int i = 0; i < repar.size(); ++i)
							{
								valorr += repar.at(i)->getValor();
							}
							cout<<repar.at(0)->toString()<<endl;
							for (int i = 0; i < 2; ++i)
							{
								int cartatem;
								srand (time(NULL));
								cartatem = rand() % tama;
								jugar.push_back(baraja->getBaraja().at(cartatem));
								baraja->getBaraja().erase(baraja->getBaraja().begin()+cartatem);
								tama--;
							}
							for (int i = 0; i < jugar.size(); ++i)
							{
								cout<<repar.at(i)->toString()<<endl;
							}
							for (int i = 0; i < jugar.size(); ++i)
							{
								valorj += jugar.at(i)->getValor();
							}
							if (valorj == 21 && valorr == 21)
							{
								cout<<"Ganador la Jugador";
								apuesta -= dineroj;
								dineroj *=2;
								double total;
								total = apuesta + dineroj;
								temju->setMonto(total);

							}
							if (valorr == 21)
							{
								cout<<"Ganador la casa";
								apuesta -= dineroj;
								temju->setMonto(apuesta);
							}
							if (valorj == 21)
							{
								cout<<"Ganador la Jugador";
								apuesta -= dineroj;
								dineroj *=2;
								double total;
								total = apuesta + dineroj;
								temju->setMonto(total);
							}
							if (valorr > 21 && valorj < 21)
							{
								cout<<"Ganador la Jugador";
								apuesta -= dineroj;
								dineroj *=2;
								double total;
								total = apuesta + dineroj;
								temju->setMonto(total);
							}
							if (valorj > 21 && valorr < 21)
							{
								cout<<"Ganador la casa";
								apuesta -= dineroj;
								temju->setMonto(apuesta);
							}
							bool quiere = true;
							while(quiere){
								if (valorj == 21 && valorr == 21)
								{
									cout<<"Ganador la Jugador";
									apuesta -= dineroj;
									dineroj *=2;
									double total;
									total = apuesta + dineroj;
									temju->setMonto(total);

								}
								if (valorr == 21)
								{
									cout<<"Ganador la casa";
									apuesta -= dineroj;
									temju->setMonto(apuesta);
								}
								if (valorj == 21)
								{
									cout<<"Ganador la Jugador";
									apuesta -= dineroj;
									dineroj *=2;
									double total;
									total = apuesta + dineroj;
									temju->setMonto(total);
								}
								if (valorr > 21 && valorj < 21)
								{
									cout<<"Ganador la Jugador";
									apuesta -= dineroj;
									dineroj *=2;
									double total;
									total = apuesta + dineroj;
									temju->setMonto(total);
								}
								if (valorj > 21 && valorr < 21)
								{
									cout<<"Ganador la casa";
									apuesta -= dineroj;
									temju->setMonto(apuesta);
								}
							}
							
						}	
					}
					
				}
			}
		}
		if (nombre == admin->getNombre() && admin->getID() == id)
		{
			int menu;
			cout<<"1-Agregar Jugadores\n2-Agregar Repartidores\n3-Gestionar Mesas\n4-salir\n....";
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
									string tipo;
									int numeromesa;
									Repartidor* temre;
									Jugador* temju;
									int numero;
									do
									{
										cout<<"1-VIP\n2-Clasica\n3-Viajero\n.....";
										cin>>numero;
										switch(numero){
											case 1:{
												tipo = "VIP";
												break;
											}
											case 2:{
												tipo = "Clasica";
												break;
											}
											case 3:{
												tipo = "Viajero";
												break;
											}
										}
									} while (numero != 1 || numero != 2 || numero!= 3);
									cout<<"Ingrese el numero de mesa";
									cin>>numeromesa;
									bool correcto = true;
									int pos;
									do
									{
										for (int i = 0; i < personas.size(); ++i)
										{
											if (dynamic_cast<Jugador*>(personas.at(i))!=NULL)
											{
												Jugador* apostador = dynamic_cast<Jugador*>(personas.at(i));
												cout<<i<<" "<<apostador->toString()<<endl;
											}
										}
										cout<<"Ingrese la posicion del Jugador";
										cin>>pos;
										if (dynamic_cast<Jugador*>(personas.at(pos))!=NULL)
										{
											correcto = false;
										}
									} while (correcto);
									temju = dynamic_cast<Jugador*>(personas.at(pos));
									bool correcto2 = true;
									int pos2;
									do
									{
										for (int i = 0; i < personas.size(); ++i)
										{
											if (dynamic_cast<Repartidor*>(personas.at(i))!=NULL)
											{
												Repartidor* apostador = dynamic_cast<Repartidor*>(personas.at(i));
												cout<<i<<" "<<apostador->toString()<<endl;
											}
										}
										cout<<"Ingrese la posicion del Repartidor";
										cin>>pos2;
										if (dynamic_cast<Repartidor*>(personas.at(pos2))!=NULL)
										{
											correcto2 = false;
										}
									} while (correcto2);
									temre = dynamic_cast<Repartidor*>(personas.at(pos));
									mesas.push_back(new mesa(temre,temju,numeromesa,tipo));
									break;
								}
								case 2:{
									if (mesas.size() > 0)
									{
										int subbmenu;
										int pos;
										cout<<"1-Numero Mesa\n2-Tipo\n3-Repartidor\n4-Jugador\n....";
										cin>>subbmenu;
										cout<<"Ingrese la posicion: ";
										cin>>pos;
										if (pos < mesas.size() && pos > 0)
										{
											switch(subbmenu){
												case 1:{
													int numeromesa;
													cout<<"Ingrese el numero de mesa";
													cin>>numeromesa;
													mesas.at(pos)->setMesa(numeromesa);
													break;
												}
												case 2:{
													int numero;
													string tipo;
													do
													{
														cout<<"1-VIP\n2-Clasica\n3-Viajero\n.....";
														cin>>numero;
														switch(numero){
															case 1:{
																tipo = "VIP";
																break;
															}
															case 2:{
																tipo = "Clasica";
																break;
															}
															case 3:{
																tipo = "Viajero";
																break;
															}
														}
													} while (numero != 1 || numero != 2 || numero!= 3);
													mesas.at(pos)->setTipo(tipo);
													break;
												}
												case 3:{
													Repartidor* temre;
													bool correcto2 = true;
													int pos2;
													do
													{
														for (int i = 0; i < personas.size(); ++i)
														{
															if (dynamic_cast<Repartidor*>(personas.at(i))!=NULL)
															{
																Repartidor* apostador = dynamic_cast<Repartidor*>(personas.at(i));
																cout<<i<<" "<<apostador->toString()<<endl;
															}
														}
														cout<<"Ingrese la posicion del Repartidor";
														cin>>pos2;
														if (dynamic_cast<Repartidor*>(personas.at(pos2))!=NULL)
														{
															correcto2 = false;
														}
													} while (correcto2);
													temre = dynamic_cast<Repartidor*>(personas.at(pos));
													mesas.at(pos)->setRepartidor(temre);
													break;
												}
												case 4:{
													Jugador* temju;
													bool correcto = true;
													int pos;
													do
													{
														for (int i = 0; i < personas.size(); ++i)
														{
															if (dynamic_cast<Jugador*>(personas.at(i))!=NULL)
															{
																Jugador* apostador = dynamic_cast<Jugador*>(personas.at(i));
																cout<<i<<" "<<apostador->toString()<<endl;
															}
														}
														cout<<"Ingrese la posicion del Jugador";
														cin>>pos;
														if (dynamic_cast<Jugador*>(personas.at(pos))!=NULL)
														{
															correcto = false;
														}
													} while (correcto);
													temju = dynamic_cast<Jugador*>(personas.at(pos));
													mesas.at(pos)->setJugador(temju);
													break;
												}
											}
										}
									}
									break;
								}
								case 3:{
									int pos;
									if (mesas.size() > 0)
									{
										cout<<"Ingrese la posicion: ";
										cin>>pos;
										if (pos < mesas.size() && pos > 0)
										{
											mesas.erase(mesas.begin() +pos);
										}
									}
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