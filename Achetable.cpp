/**
 * @file        achetable.cpp
 * @brief       Contient la déclaration de la classe Achetable
 * @details     La classe Achetable est
 * @author      Sacha CANTAT
 * @date        17/04/21
 */

#include <iostream>
#include <stdlib.h>
#include "CaseMonop.hpp"
#include "Achetable.hpp"

#include "Joueur.hpp"

using namespace std;


Achetable::Achetable(string nom, int prix): CaseMonop(nom), m_prix(prix)
{
    Joueur j = Joueur(string());
    this->m_Proprio = j;
}

Achetable::~Achetable()
{
  
}



//Accesseur

//Retourn le prix du bien
int Achetable::getPrix() const
{
  return m_prix;
}

//Retourne le joueur propriétaire
Joueur Achetable::getProprio() const
{
  return m_Proprio;
}

//Retourne le nom du propriétaire
string Achetable::getProprioName() const
{
  return m_Proprio.getNom();
}


//Methode

//Le joueur j achete la case et en deviens propriétaire si il a assez d'argent, sinon renvoie FALSE.
bool Achetable::acheter(Joueur j)
{
  if (j.prelevement(m_prix))
  {
    m_Proprio = j;
    return true; //REnvoit 1 si achat effectué
  }
  else return false; // Renvoit 0 si pas assez d'argent chez le joeur
}

//Retourne TRUE si la case à deja un propriétaire
bool Achetable::haveProprio() const
{
  if (m_Proprio.getNom()==string())
  {
    return false;
  }
  else return true;
}

//Methode qui prennent sens plus bas
bool Achetable::isAchetable() const
{
  return true;
}


void Achetable::affiche() const
{

}

int Achetable:: isLoyer() const
{
 return 0;
}


 ostream& operator<<(ostream& out,  Achetable const& a)
{

  out <<  a.getNom() << " (coût : " << a.getPrix() << " ) propriétaire : " <<  a.getProprio() <<endl;
    return out;
}
