#ifndef PLATEAU_H
#define	PLATEAU_H

#define NBCASES 40

#include <cstdlib>
#include <vector>
#include <queue>
#include <string>
#include "CaseMonop.hpp"
#include "Gare.hpp"
#include "Constructible.hpp"
#include "Achetable.hpp"

using namespace std ;

class Case;
class Joueur;

class Plateau {
public:
/*****Constructeur*****/
	Plateau();
	~Plateau();
/*****Méthodes*****/
//nécéssaire
  void initPlateau();
  int nbGares(Joueur j);
  void Affiche();
  void Avance();
  bool EstFini();
//supplémentaire
  void AjouterJoueur(string nomJoueur);
  Joueur* GetJoueurActuel();
  vector<Joueur*> GetJoueurs();
  void FinirTour();
  Case* GetCase(int);
  void JoueurActuelAPerdu();
private:
/*****Attributs*****/
  CaseMonop* _plateau[40];
  vector<Joueur*> _joueurs;
  int _tour;
};

ostream& operator<<(ostream& out,  Plateau const& p);

#endif	/* PLATEAU_H */