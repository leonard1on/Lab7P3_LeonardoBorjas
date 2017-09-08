main: main.o Escuadron.o Soldado.o Arquero.o Coraza.o Asesino.o
	g++ main.o Escuadron.o Soldado.o Arquero.o Coraza.o Asesino.o -o main

main.o: main.cpp Escuadron.h Soldado.h Arquero.h Coraza.h Asesino.h
	g++ -c main.cpp

Escuadron.o: Escuadron.cpp Soldado.h Arquero.h Coraza.h Asesino.h
	g++ -c Escuadron.cpp

Soldado.o: Soldado.cpp Soldado.h
	g++ -c Soldado.cpp

Arquero.o: Arquero.cpp Arquero.h Soldado.h
	g++ -c Arquero.cpp

Coraza.o: Coraza.cpp Coraza.h Soldado.h
	g++ -c Coraza.cpp

Asesino.o: Asesino.cpp Asesino.h Soldado.h
	g++ -c Asesino.cpp
