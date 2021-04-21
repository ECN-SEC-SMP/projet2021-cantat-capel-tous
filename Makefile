

main.out: main.o Achetable.o CaseMonop.o Joueur.o Constructible.o NonAchetable.o Gare.o Chance.o Depart.o 
	g++ -o main.out main.o CaseMonop.o Achetable.o Joueur.o Constructible.o NonAchetable.o Gare.o Chance.o Depart.o 
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

Chance.o: Chance.cpp Chance.hpp
	g++ -c Chance.cpp

Depart.o: Depart.cpp Depart.hpp
	g++ -c Depart.cpp

NonAchetable.o: NonAchetable.cpp NonAchetable.hpp
	g++ -c NonAchetable.cpp

main.o: main.cpp 
	g++ -c main.cpp


clean : 
	rm *.o