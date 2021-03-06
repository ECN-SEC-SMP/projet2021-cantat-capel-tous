

main.out: main.o Achetable.o CaseMonop.o Joueur.o Constructible.o Gare.o 
	g++ -o main.out main.o CaseMonop.o Achetable.o Joueur.o Constructible.o Gare.o
Achetable.o: Achetable.cpp Achetable.hpp CaseMonop.hpp
	g++ -c Achetable.cpp
CaseMonop.o: CaseMonop.cpp CaseMonop.hpp
	g++ -c CaseMonop.cpp
Constructible.o: Constructible.cpp Constructible.hpp
	g++ -c Constructible.cpp
Gare.o: Gare.cpp Gare.hpp
	g++ -c Gare.cpp

Joueur.o: Joueur.cpp Joueur.h
	g++ -c Joueur.cpp

main.o: main.cpp 
	g++ -c main.cpp


clean : 
	rm *.o