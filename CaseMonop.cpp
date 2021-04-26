/**
 * @file        CaseMonop.hpp
 * @brief       Contient la déclaration de la classe Achetable
 * @author      Sacha CANTAT
 * @date        17/04/21
 */
#include <iostream>
#include "CaseMonop.hpp"

using namespace std;

/**
 * \fn CaseMonop()
 * \brief    Constructeur de CaseMonop
 */
CaseMonop::CaseMonop()
{

}

/**
 * \fn CaseMonop(string nom)
 * \brief    Constructeur de CaseMonop
 * \param    nom          nom de la case
 */
CaseMonop::CaseMonop(string nom) : m_nom(nom)
{
  
}

CaseMonop::~CaseMonop()
{
  
}

 void CaseMonop::affiche() const
 {
    cout <<"CM"<<endl;
 }

 bool CaseMonop::isAchetable() const
 {
   
 }

  int CaseMonop::isLoyer() const
 {
    return 0;
 }






/**
 * \fn getNom() const
 * \brief    Retourne le nom de la case
 * \return   m_nom          Attribut m_nom de CaseMonp
 */
 string CaseMonop::getNom() const
 {
   return m_nom;
 }

/**
 * \fn getId() const
 * \brief    Retourne l'id de la case
 * \return   m_id          Attribut m_id de CaseMonp
 */
int CaseMonop::getId() const
 {
    return m_id;
 }


 ostream& operator<<(ostream& out, CaseMonop const & c)
{
  out <<  c.getNom()<<endl;
    return out;
}



 

// ostream& operator<<( ostream &flux, CaseMonop const& caseM )
// {
//     //Affichage des attributs
//     caseM.afficherflux
//     return flux;
// }
