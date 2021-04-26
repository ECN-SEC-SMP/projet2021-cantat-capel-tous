#include <iostream>
#include "Joueur.hpp"
#include "CaseMonop.hpp"
#include "Plateau.hpp"
#include "Achetable.hpp"
#include "NonAchetable.hpp"
#include "Chance.hpp"
#include "Prison.hpp"
#include "Depart.hpp"


#include <random>
using namespace std;


///Contructeur 
Joueur::Joueur(string n,int id, int position, Plateau* plat){
  this->nom=n;
  this->fortune=100000;
  this->position=position;
  this->plateau=plat;
  this->gare = 0;
}

///Contructeur 
Joueur::Joueur(string n,int id, int position) {
  this->nom=n;
  this->fortune=100000;
  this->position=position;
  this->gare = 0;
  //this->plateau=plat;
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

void Joueur::setPosition(int p){
  this->position=p%40; 
}
///Méthodes

///PAIEMENT D’UNE SOMME À UN AUTRE JOUEUR
bool Joueur::paiement(int x, Joueur j){
 bool i=false;
 ///si le joueur courant a assez de crédit il paye le joueur adverse
 if (x <=  this->fortune){
   this->fortune-=x; ///crédit prélevé
   j.fortune+=x;  ///crédit envoyé à l’adversaire
   i=true;
 }
 ///sinon on renvoi faux
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
int Joueur::nbGare() const
{
  return gare;
}

//Renvoie le nombre de gare
void Joueur::adGare() 
{
  gare++;
}


//lancé de dé
int Joueur::lanceDe(){
  return rand()%6+1;
}

//TOUR DE Joueur
void Joueur::tourDeJeu(){
  int d = lanceDe();
  bool parite;
  
  if (d%2==1) parite=0;//dé impaire 
  else parite=1; //dé pair


  ///calcul de la nouvelle case courante
  int positionCourante = getPosition();
  CaseMonop* nouvelleCase = plateau->Avance(plateau->GetCase(positionCourante),  d, this);
  cout<<"Le joueur "<<this->nom<< " est en "<< getPosition() <<endl;
  

  

    
 if (Achetable *ach = dynamic_cast<Achetable*>(nouvelleCase))
{ //Achetable
  cout << "Cette case est de type achetable" <<endl;
  if (ach->haveProprio())
  {
    //Payer le propriétaire
    cout << "Cette case appartient à : "<< ach->getProprio().nom <<endl;
    paiement(ach->isLoyer(), ach->getProprio());
    cout <<this->nom<< " a payé "<<ach->isLoyer()<< " à " << ach->getProprio().nom <<" il a donc une fortune de : "<<this->fortune<<endl;
  }
  else 
  {
    //si la case n'a pas de propriétaire, que le d est impaire et que le joueur a assez d'agent 
    if (parite==0 && ach->haveProprio()==0 && (ach->getPrix()<=this->fortune)) 
    {
     //on achete la propriété
     ach->acheter(*this);
     cout<<"Le joueur "<< nom <<" a acheté "<< ach->getNom() <<" à "<<ach->getPrix()<<" il a donc une fortune de : "<<this->fortune<<endl;
    }
  }
}

if (NonAchetable *Nach = dynamic_cast<NonAchetable*>(nouvelleCase))
{//Non achtebale
  if (Chance *Chanc = dynamic_cast<Chance*>(nouvelleCase))
  {//Non achtebale
    //Case Chance
    cout<<"Cette case est un case chance"<<endl;
  }
  if (Prison *Priso = dynamic_cast<Prison*>(nouvelleCase))
  {//Non achtebale
    //Case Chance
    cout<<"Cette case est un case prison"<<endl;
  }
  if (Depart *Dep = dynamic_cast<Depart*>(nouvelleCase))
  {//Non achtebale
    //Case Depart
    cout<<"Cette case est un case départ"<<endl;
  }
  
}
}



ostream& operator<<(ostream& out,  Joueur const& j){
    out <<"Nom : "<<j.getNom()<<" Position : "<<j.getPosition()<<" Fortune : "<<j.getFortune()<<endl;
    return out;
}

