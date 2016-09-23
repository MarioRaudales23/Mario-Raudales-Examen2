tem:	main.o mesa.o Persona.o Jugador.o Repartidor.o Administrador.o baraja.o carta.o
	g++ main.o mesa.o Persona.o Jugador.o Repartidor.o Administrador.o baraja.o carta.o -o tem
main.o:	main.cpp mesa.h Persona.h Jugador.h Repartidor.h Administrador.h baraja.h carta.h
	g++ -c main.cpp
mesa.o:	mesa.h mesa.cpp Jugador.h Repartidor.h
	g++ -c mesa.cpp
Persona.o:	Persona.h Persona.cpp
	g++ -c Persona.cpp
Jugador.o:	Jugador.h Jugador.cpp Persona.h
	g++ -c Jugador.cpp
Repartidor.o:	Repartidor.h Repartidor.cpp baraja.h Persona.h
	g++ -c Repartidor.cpp
Administrador.o:	Administrador.h Administrador.cpp Persona.h
	g++ -c Administrador.cpp
baraja.o:	baraja.h baraja.cpp carta.h
	g++ -c baraja.cpp
carta.o:	carta.h carta.cpp
	g++ -c carta.cpp