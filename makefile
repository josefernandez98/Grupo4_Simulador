Main: Main.o Personas.o Entrenadores.o Equipos.o Jugadores.o Partidos.o
	g++ Main.o Personas.o Entrenadores.o Equipos.o Jugadores.o Partidos.o -o Main
Main.o: Main.cpp Personas.h Entrenadores.h Equipos.h Jugadores.h Partidos.h
	g++ -c Main.cpp
Personas.o: Personas.h Personas.cpp
	g++ -c Personas.cpp
Entrenadores.o: Personas.h Entrenadores.h Entrenadores.cpp
	g++ -c Entrenadores.cpp
Equipos.o: Personas.h Jugadores.h Entrenadores.h Equipos.h Equipos.cpp
	g++ -c Equipos.cpp
Jugadores.o: Personas.h Jugadores.h Jugadores.cpp
	g++ -c Jugadores.cpp
Partidos.o: Equipos.h Partidos.h Partidos.cpp
	g++ -c Partidos.cpp
Clean:
	rm -f *.o temp
