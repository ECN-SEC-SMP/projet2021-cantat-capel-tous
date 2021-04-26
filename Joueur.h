#ifndef Joueur_h
#define Joueur_h

#include <string>
using namespace std;

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

Joueur();


//accesseurs
string getNom() const;
int getFortune() const;
int getPosition() const;

///méthodes
bool paiement(int somme, Joueur &jAdverse);
bool prelevement(int somme_du);
int lanceDe();
void tourDeJeu();


};

//surcharge de l'opérateur <<
ostream& operator<<(ostream& out,  Joueur const &j);
#endif 