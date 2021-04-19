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

 void CaseMonop::afficher(ostream &flux) const
 {
    
    //  if(isProprio != 0)
    //  {
    //    flux << m_nom << " (coût : " << m_prix << " ) propriétaire : " << m_proprio;
    //  }
    //  else
    //  {
    //    flux << m_nom << " (coût : " << m_prix << " ) - pas de propriétaire";
    //  }
 }

 

// ostream& operator<<( ostream &flux, CaseMonop const& caseM )
// {
//     //Affichage des attributs
//     caseM.afficherflux
//     return flux;
// }
