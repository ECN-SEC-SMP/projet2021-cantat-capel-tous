/**
 * @file        achetable.hpp
 * @brief       Contient la déclaration de la classe Achetable
 * @details     La classe Achetable est
 * @author      Sacha CANTAT
 * @date        17/04/21
 */

#ifndef DEF_ACHETABLE
#define DEF_ACHETABLE

#include "Joueur.hpp"
//#include "CaseMonop.hpp"

class Achetable : public CaseMonop
{
    public:
    Achetable();
    Achetable(std::string nom, int prix);
    int isProprio() const;
    int getPrix() const;
    bool haveProprio() const;
    string getProprioName() const;
    Joueur getProprio() const;
    bool acheter(Joueur j);
    std::string getNom() const;
    int getId() const;

    protected:

    
    int m_id;
    int m_prix;
    bool m_stateProprio = 0;
    Joueur m_Proprio;
    std::string m_nom;
    


};

ostream& operator<<(ostream& out,  Achetable const& c);

#endif
