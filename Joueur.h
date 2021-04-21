#ifndef JOUEUR_H
#define JOUEUR_H

#include <string>
#include "CaseMonop.hpp"
#include "Plateau.h"
using namespace std;



class Joueur {

///attributs
private : 
  string nom;
  int id;
  int fortune;
  CaseMonop* position;
  Plateau* plateau;


public :
///contructeur
Joueur(string n,int id, CaseMonop* position, Plateau* plat);
///contructeur 2
Joueur(string s);

Joueur();
~Joueur();


//accesseurs
string getNom() const;
int getFortune() const;
CaseMonop* getPosition() const;

///méthodes
bool paiement(int somme, Joueur &jAdverse);
bool prelevement(int somme_du);
int lanceDe();
void tourDeJeu();



};



ostream& operator<<(ostream& out,  Joueur const& j);
#endif 