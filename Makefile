


main.out: main.o Joueur.o CaseMonop.o Achetable.o NonAchetable.o Constructible.o  Gare.o Chance.o Depart.o Prison.o Plateau.o
	g++ -o main.out main.o Joueur.o CaseMonop.o Achetable.o NonAchetable.o Constructible.o  Gare.o Chance.o Depart.o Prison.o Plateau.o


Achetable.o: Achetable.cpp Achetable.hpp CaseMonop.hpp Joueur.hpp
	g++ -c Achetable.cpp

Constructible.o: Constructible.cpp Constructible.hpp
	g++ -c Constructible.cpp
Gare.o: Gare.cpp Gare.hpp
	g++ -c Gare.cpp

Joueur.o: Joueur.cpp Joueur.hpp
	g++ -c Joueur.cpp


Chance.o: Chance.cpp Chance.hpp
	g++ -c Chance.cpp

Depart.o: Depart.cpp Depart.hpp
	g++ -c Depart.cpp

NonAchetable.o: NonAchetable.cpp NonAchetable.hpp
	g++ -c NonAchetable.cpp

Plateau.o: Plateau.cpp Plateau.hpp
	g++ -c Plateau.cpp


Prison.o: Prison.cpp Prison.hpp
	g++ -c Prison.cpp

main.o: main.cpp Joueur.hpp Achetable.hpp CaseMonop.hpp Constructible.hpp Gare.hpp Plateau.hpp Depart.hpp
	g++ -c main.cpp


clean : 
	rm *.o