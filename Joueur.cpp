#include <iostream>
#include "Joueur.h"
#include <random>
using namespace std;


///Contructeur 
Joueur::Joueur(string n,int p){
  this->nom=n;
  this->fortune=10000;
  this->position=p;
}

Joueur::Joueur(){
    this->nom=string();
    this->fortune=0;
    this->position=0;
}

///Asseceurs
int Joueur::getFortune() const{
  return fortune;
}
string Joueur::getNom() const {
  return nom;
}
 int Joueur::getPosition() const{
   return position;
}

///Méthodes

///PAIEMENT D’UNE SOMME À UN AUTRE JOUEUR
bool Joueur::paiement(int x, Joueur &j){
  bool i;
  ///si le joueur courant n'a pas assez de crédit, on retourne faux
  if (x > this->fortune){
    i=false;
  }
  ///sinon on effetue le paiement au joueur adverse
  else {
    j.fortune+=x;
    this->fortune-=x;
    i=true;
  }
  return i;
}

//lancé de dé
int Joueur::lanceDe(){
  return rand()%6+1;
}

//TOUR DE Joueur
void Joueur::tourDeJeu(){

  ///calcul de la nouvelle case courante
  this->position+=lanceDe();
  cout<<"Le joueur "<< this->nom << " est en : " << this->position<<endl;
}


ostream& operator<<(ostream& out,  Joueur const& j){
    out <<j.getNom()<<" - "<<j.getPosition()<<" - "<<j.getFortune()<<endl;
    return out;
}
