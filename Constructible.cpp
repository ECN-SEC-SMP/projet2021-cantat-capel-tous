/**
 * @file        Constructible.hpp
 * @brief       Contient la déclaration de la classe Constructible
 * @author      Sacha CANTAT
 * @date        17/04/21
 */
#include <iostream>
#include <stdlib.h>
#include "Achetable.hpp"
#include "Constructible.hpp"
//#include "Joueur.h"

using namespace std;

 /**
 * \fn Constructible(string nom, int prix, int loyer)
 * \brief       Constructeur d'une case Constructible avec un nom, un prix et un loyer
 * \param    nom          Nom de la rue
 * \param    prix         Prix d'achat de la case
 * \param    prix         Base de loyer sans maison ni hotel
 */
Constructible::Constructible(string nom, int prix, int loyer) : Achetable(nom,prix), m_loyer(loyer)
{
  
}
Constructible::~Constructible()
{
  
}

/**
 * \fn affiche() const
 * \brief Affiche les informations de la case
 */
void Constructible::affiche() const
{
 cout << *this << endl;
}

/**
 * \fn isLoyer() const
 * \brief Calcule le loyer
 * \return loyer
 */
int Constructible::isLoyer() const
{
  if(this->haveProprio())
  {
    int a = 200; //Coeff pour maison
    int b = 1200; //Coeff pour hotel
    int loyer = m_loyer + a*m_maison + m_hotel*b;
    return loyer;
  }

  else return 0;
}




/**
 * \fn acheteMaison(int nombreMaison)
 * \brief    Achète le nombre de maison demandé
 * \detail Un terrain ne peut contenir plus de 4 maison
 * \param    nombreMaison          Nombre de maison à acheter
 * \return    m_maison         Le nombre de maison présente sur le terrain
 */
int Constructible::acheteMaison(int nombreMaison)
{
  int prixMaison = 300;
  if ((nombreMaison+m_maison <= 4) && (m_hotel == 0))
  {
    m_maison += nombreMaison;
    m_Proprio.prelevement(prixMaison*nombreMaison);
  }
  return m_maison;
}

/**
 * \fn acheteHotel(int nombreHotel)
 * \brief    Achète un hotel
 * \detail Une case ne peut contenir plus d'un hotel et un hotel ne peut être acheté que si 4 maison sont présente sur la case
 * \param    nombreHotel          Nombre d'Hotel à acheter
 * \return    true       L'hotel a été acheté
 * \return    false      L'hotel n'a pas été acheté  
 */
bool Constructible::acheteHotel(int nombreHotel)
{
 if (m_maison == 4 && m_hotel ==0)
 {
   m_hotel++;
   m_Proprio.prelevement(500);
   m_maison =0;
   return true;
 }
 return false;

}

/**
 * \fn getNbMaison()() const
 * \brief Vérifie si la case est une case de type achetable
 * \return m_maison     Le nombre de maison de la case
 */
int Constructible::getNbMaison() const
{
  return m_maison;
}

/**
 * \fn getNbHotel()() const
 * \brief Vérifie si la case est une case de type achetable
 * \return m_hotel     Le nombre d'hotel sur la case
 */
int Constructible::getNbHotel() const
{
  return m_hotel;
}

/**
 * \fn isAchetable() const
 * \brief Vérifie si la case est une case de type achetable
 * \return true
 */
bool Constructible::isAchetable() const
{
  return true;
}





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
   
      out <<"loyer = " << c.isLoyer() <<endl; //On affiche le loyer
    }

    return out;
  
}

