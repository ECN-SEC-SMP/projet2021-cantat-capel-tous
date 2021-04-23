/**
 * @file        Constructible.hpp
 * @brief       Contient la déclaration de la classe Constructible
 * @details     La classe Constructible est
 * @author      Sacha CANTAT
 * @date        17/04/21
 */
#include <iostream>
#include <stdlib.h>
#include "Achetable.hpp"
#include "Constructible.hpp"
//#include "Joueur.h"

using namespace std;

Constructible::Constructible(string nom, int prix) : Achetable(nom,prix)
{
  
}

Constructible::~Constructible()
{
  
}

void Constructible::affiche() const
 {
   cout << *this <<endl;
}





void Constructible::acheteMaison(int nombreMaison)
{
  m_maison += nombreMaison;
}

void Constructible::acheteHotel(int nombreHotel)
{
  m_hotel += nombreHotel;
}

int Constructible::getNbMaison() const
{
  return m_maison;
}

int Constructible::getNbHotel() const
{
  return m_hotel;
}

// bool Constructible::isAchetable() const
// {
//   return true;
// }



//  ostream& operator<<(ostream& out,  Constructible const& c)
// {
//   if(c.haveProprio() != 0)
//   {
//     //Il y n'y a pas de propriétaire
//     out <<  c.getNom() << " (coût : " << c.getPrix() << " ) - sans propriétaire " <<endl;
//     return out;
//   }
//   else if (c.getNbMaison() && c.getNbHotel() ==0 )
//   {
//     //Il y a un propriétaire, maison pas d'hotel
//     out <<  c.getNom() << " (coût : " << c.getPrix() << " ) "<<"propriétaire : " <<  c.getProprio() <<", " << c.getNbMaison()<< " maison<<endl;
//     return out;
//   }
// }
   ostream& operator<<(ostream& out,  Constructible const& c)
{
   
    out <<  c.getNom() << " (coût : " << c.getPrix() << " ) - ";
    if (c.getProprioName() == string()) out <<" sans propriétaire" << endl;  //Il y n'y a pas de propriétaire
    else 
    {
      //Il y a un propriétaire
      out << " propriétaire : " <<  c.getProprioName() << ", ";
      int nbMaison = c.getNbMaison();
      int nbHotel = c.getNbHotel();
      //cout << "M :" << nbMaison << " H :"<< nbHotel << endl;
      
      if(nbMaison ) // On affiche le nombre de maisons si besoin, au pluriel ou non
      {
        out << nbMaison << " maison";
        if (nbMaison > 1) out << "s , ";
        else out << ", ";
      }

      if(nbHotel) // On affiche le nombre d'hotel si besoin, au pluriel ou non
      {
        out << nbHotel << " hotel";
        if (nbHotel > 1) out << "s , ";
        else out << ", ";
      }
      //int loyer = c.getLoyer()
      out <<"loyer = XXXXX" << endl; //On affiche le loyer
    }

    return out;

  
}



  //  if(isProprio != 0)
    //  {
    //    flux << m_nom << " (coût : " << m_prix << " ) propriétaire : " << m_proprio;
    //  }
    //  else
    //  {
    //    flux << m_nom << " (coût : " << m_prix << " ) - pas de propriétaire";
    //  }
