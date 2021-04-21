/**
 * @file        CaseMonop.hpp
 * @brief       Contient la déclaration de la classe Achetable
 * @details     La classe CaseMonop est
 * @author      Sacha CANTAT
 * @date        17/04/21
 */
#include <iostream>
#include "CaseMonop.hpp"

using namespace std;

CaseMonop::CaseMonop(string nom) : m_nom(nom)
{
  
}

CaseMonop::~CaseMonop()
{
  
}




 string CaseMonop::getNom() const
 {
   return m_nom;
 }

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
