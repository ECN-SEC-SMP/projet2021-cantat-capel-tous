#include <iostream>
using namespace std;

#ifndef Joueur_h
#define Joueur_h

class Joueur {

///attributs
private : 
  string nom;
  int fortune;
  int position;
  //reference au plateau


public :
///contructeur
Joueur(string nom, int position);

//accesseurs
string getNom() const;
int getFortune() const;
int getPosition() const;

///méthodes
bool paiement(int somme, Joueur &j);
int lanceDe();
void tourDeJeu();


};

#endif 


