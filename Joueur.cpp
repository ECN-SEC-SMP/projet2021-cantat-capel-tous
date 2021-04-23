#include <iostream>
#include "Joueur.hpp"
#include "CaseMonop.hpp"
#include "Plateau.hpp"
#include <random>
using namespace std;


///Contructeur 
Joueur::Joueur(string n,int id, int position, Plateau* plat){
  this->nom=n;
  this->fortune=10000;
  this->position=position;
  this->plateau=plat;
}

Joueur::~Joueur(){}

Joueur::Joueur(){
    this->nom=string();
    this->fortune=0;
    this->position=0;
}

Joueur::Joueur(string s) : nom(s)
{    
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

bool Joueur::prelevement(int x){
  bool i =false;
  if (x <= this->fortune){
    this->fortune-=x;
    i=true;
  }
  return i;
}

//Renvoie le nombre de gare
int Joueur::NbGare() const
{
  return 0;
}

//lancé de dé
int Joueur::lanceDe(){
  return rand()%6+1;
}

//TOUR DE Joueur
void Joueur::tourDeJeu(){

  ///calcul de la nouvelle case courante
  
  //le joue
  
  /*

  ///si la case est de type Achetable
  if (vectorPlateau[CaseMonop.getId].isAchetable()){
    
    //si la case n'a pas de propriétaire et que impaire
    if (getProprio==null ){

      AcheteCase();

    }

    //si la case a un propriétaire on le paye
    else paiement(CaseMonop.getPrix(), CaseMonop.getProprio());
    
  }

  else {

    //si la case est la case de départ
    if (vectorPlateau[position].getTypeCaseNA() == 0) {

    }


    //si la case est la prison
    if (vectorPlateau[position].getTypeCaseNA()  == 1) {
      
    }

    //si la case est une gare
    if (vectorPlateau[position].getTypeCaseNA()  == 2) {
      
    }

    //si la case est une carte chance
    if (vectorPlateau[position].getTypeCaseNA()  == 3) {
      
    }


  }

  cout<<"Le joueur "<< this->nom << " est en : " << CaseMonop.getId() <<endl;

  }



  ///si la case est de type Achetable et a un propriétaire

*/


}


ostream& operator<<(ostream& out,  Joueur const& j){
    out <<j.getNom()<<" - "<<j.getPosition()<<" - "<<j.getFortune()<<endl;
    return out;
}
