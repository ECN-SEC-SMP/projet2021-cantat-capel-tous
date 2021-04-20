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
#include "Joueur.h"



using namespace std;


Achetable::Achetable(string nom, int prix): CaseMonop(nom), m_prix(prix)
{
    Joueur j(string(), 0);
    this->m_Proprio = j;
}

int Achetable::getPrix() const
{
  return m_prix;
}

string Achetable::getProprio() const
{
  return m_Proprio.getNom();
}

bool Achetable::acheter(Joueur j)
{
//  if (j.getFortune(m_prix)) return true;
 // else return false; // Renvoit 0 si pas assez d'argent chez le joeur
}

bool Achetable::haveProprio() const
{
  return m_stateProprio;
}



 ostream& operator<<(ostream& out,  Achetable const& a)
{

  out <<  a.getNom() << " (coût : " << a.getPrix() << " ) propriétaire : " <<  a.getProprio() <<endl;
    return out;
}
