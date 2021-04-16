#include <iostream>
using namespace std;

#ifndef Joueur_h
#define Joueur_h

class Joueur {

///attributs
private:
  string nom;
  int fortune;
  Case position;
  //reference au plateau



public :

///contructeur
Joueur(string n, int f, Case p);

///destructeur
virtual ~joueur();

};

#endif 


