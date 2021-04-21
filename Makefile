


main.out: main.o Joueur.o CaseMonop.o Achetable.o NonAchetable.o Constructible.o  Gare.o Chance.o Depart.o Prison.o
	g++ -o main.out main.o Joueur.o CaseMonop.o Achetable.o NonAchetable.o Constructible.o  Gare.o Chance.o Depart.o Prison.o


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

Plateau.o: Plateau.cpp Plateau.h
	g++ -c Plateau.cpp


Prison.o: Prison.cpp Prison.h
	g++ -c Prison.cpp

main.o: main.cpp 
	g++ -c main.cpp


clean : 
	rm *.o