/**
 * @file        Gare.hpp
 * @brief       Contient la déclaration de la classe Gare
 * @details     La classe Gare est
 * @author      Sacha CANTAT
 * @date        17/04/21
 */

#include <iostream>
#include <stdlib.h>
#include "Achetable.hpp"
#include "Gare.hpp"

#include "Joueur.hpp"

using namespace std;

Gare::Gare(string nom, int prix) : Achetable(nom,prix) 
{

}

Gare::~Gare()
{

}

// bool Gare::isAchetable() const
// {
//   return true;
// }

 ostream& operator<<(ostream& out,  Gare const& c)
{
  out <<  c.getNom() << " (coût : " << c.getPrix() << " ) - ";
  if(c.getProprioName() == string()) out << "sans propriétaire " <<endl; //Pas de propriétaire
  else 
  {
    //Il y a un propriétaire
    out << "propriétaire : " <<  c.getProprioName() << ", loyer = XXXXX"<<endl;
  }
   return out;
}




// void CaseMonop::afficher(ostream &flux) const
// {
    
//     if(isProprio != 0)
//     {
//       flux << m_nom << " (coût : " << this->m_prix << " ) propriétaire : " << m_proprio;
//     }
//     else
//     {
//       flux << m_nom << " (coût : " << m_prix << " ) - pas de propriétaire";
//     }
// }
