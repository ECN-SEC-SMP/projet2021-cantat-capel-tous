#ifndef PLATEAU_H
#define	PLATEAU_H

#define NBCASES 40

#include <cstdlib>
#include <vector>
#include <queue>
#include <string>
// #include "CaseMonop.h"
// #include "Gare.h"
// #include "Constructible.h"

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
  void Avancer();
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
  vector<CaseMonop*> _plateau[40];
  vector<Joueur*> _joueurs;
  int _tour;
};

#endif	/* PLATEAU_H */