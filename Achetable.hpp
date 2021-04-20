/**
 * @file        achetable.hpp
 * @brief       Contient la déclaration de la classe Achetable
 * @details     La classe Achetable est
 * @author      Sacha CANTAT
 * @date        17/04/21
 */

#ifndef DEF_ACHETABLE
#define DEF_ACHETABLE

#include "CaseMonop.hpp"
#include "Joueur.h"

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

    protected:

    int m_prix;
    bool m_stateProprio = 0;
    Joueur m_Proprio;
    


};

ostream& operator<<(ostream& out,  Achetable const& c);

#endif
