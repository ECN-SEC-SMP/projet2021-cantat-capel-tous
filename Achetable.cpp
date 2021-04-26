/**
 * @file        achetable.cpp
 * @brief       Contient la déclaration de la classe Achetable
 * @author      Sacha CANTAT
 * @date        17/04/21
 */

#include <iostream>
#include <stdlib.h>
#include "CaseMonop.hpp"
#include "Achetable.hpp"
#include "Gare.hpp"

#include "Joueur.hpp"

using namespace std;


/**
 * \fn Achetable(string nom, int prix)
 * \brief    Constructeur de Achetable
 * \param    nom          nom de la case
 * \param    prix          prix d'achat de la case
 */
Achetable::Achetable(string nom, int prix): CaseMonop(nom), m_prix(prix)
{
    Joueur j = Joueur(string());
    this->m_Proprio = j;
}

Achetable::~Achetable()
{
  
}



//Accesseur

/**
 * \fn getPrix() const
 * \brief    Retorune le prix d'achat de la case
 * \return    m_prix      l'attribut m_prix
 */
int Achetable::getPrix() const
{
  return m_prix;
}

/**
 * \fn getProprio() const
 * \brief    Retorune l'objet Joueur propriétaire de la case
 * \return    m_Proprio      l'attribut m_Proprio
 */
Joueur Achetable::getProprio() const
{
  return m_Proprio;
}

/**
 * \fn getProprioName() const
 * \brief    Retourne le nom du propriétaire
 * \return    m_Proprio.getNom()      le nom du propriétaire
 */
string Achetable::getProprioName() const
{
  return m_Proprio.getNom();
}


//Methode

/**
 * \fn acheter(Joueur j)
 * \brief    un Joueur achete la case
 * \detail Possible si le joueur dispose d'assez d'argent et si aucun propriétaire ne possède déja cette case.
 * \param    j          Objet Joeur souhaitant acquérir la case
 * \return    true       La case a été achetée
 * \return    false      La case  n'a pas été achetée
 */
bool Achetable::acheter(Joueur &j)
{
  if (j.prelevement(m_prix) && this->haveProprio() == 0)
  {
    m_Proprio = j;
     if (Gare *gar = dynamic_cast<Gare*>(this)) j.adGare();
    return true; //REnvoit 1 si achat effectué
  }
  else return false; // Renvoit 0 si pas assez d'argent chez le joeur
}

/**
 * \fn haveProprio() const
 * \brief    Regarde si la case à un propriétare ou non
 * \return    true       La case a un propriétaire
 * \return    false      La case  n'a pas de propriétaire
 */
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
