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
 
    Achetable(std::string nom, int prix);
    ~Achetable();
    int getPrix() const;
    bool haveProprio() const;
    string getProprioName() const;
    Joueur getProprio() const;
    bool acheter(Joueur &j);
    
    virtual bool isAchetable() const override;
    virtual void affiche() const;
    virtual int isLoyer() const;


    protected:

    int m_prix;
    bool m_stateProprio = 0;
    Joueur m_Proprio;



};

ostream& operator<<(ostream& out,  Achetable const& c);

#endif
