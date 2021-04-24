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

/**
 * \fn Gare(string nom, int prix)
 * \brief    Constructeur d'une case Gare
 * \param    nom         Nom de la gare
 * \param    prix       prix d'achat de la gare
 */
Gare::Gare(string nom, int prix) : Achetable(nom,prix) 
{

}

Gare::~Gare()
{

}

/**
 * \fn affiche() const
 * \brief    Affiche les informations de la gare
 */
void Gare::affiche() const

 {
   cout << *this <<endl;
}

/**
 * \fn isLoyer() const
 * \brief    calcule le loyer
 * \return    loyer       loyer de la case
 **/
int Gare::isLoyer() const
{
  return 2500*m_Proprio.NbGare(); //Renvoi 2500 * le nombre de gare
}

/**
 * \fn isAchetable const
 * \brief    Vérifie si la case est une case de type achetable
 * \return true
 */
bool Gare::isAchetable() const
{
  return true;
}

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
