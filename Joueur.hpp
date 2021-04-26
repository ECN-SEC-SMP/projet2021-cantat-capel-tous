#ifndef DEF_JOUEUR
#define DEF_JOUEUR

#include <iostream>
#include <stdlib.h>
#include <string>
//#include "CaseMonop.hpp"
#include "Plateau.hpp"
using namespace std;

class Joueur {

///attributs
private : 
  string nom;
  int id;
  int fortune;
  int position;
  Plateau* plateau;
  int gare;


public :
  ///contructeur
  Joueur(string n,int id, int position, Plateau* plat);
  Joueur(string n,int id, int position);
  ///contructeur 2
  Joueur(string s);
  Joueur();
  ~Joueur();

  //accesseurs
  string getNom() const;
  int getFortune() const;
  int getPosition() const;
  


  void setPosition(int p);

  ///méthodes
  bool paiement(int somme, Joueur jAdverse);
  bool prelevement(int somme_du);
  int lanceDe();
  void tourDeJeu();
  void ajouteGare();
  int nbGare() const;
  void adGare();

};



ostream& operator<<(ostream& out,  Joueur const& j);
#endif 