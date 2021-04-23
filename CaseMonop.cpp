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

CaseMonop::CaseMonop()
{

}

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
    return false;
 }

  int CaseMonop::isLoyer() const
 {
    return 0;
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
 cout << "test" << endl;
  out <<  c.getNom()<<endl;
    return out;
}

 

// ostream& operator<<( ostream &flux, CaseMonop const& caseM )
// {
//     //Affichage des attributs
//     caseM.afficherflux
//     return flux;
// }
