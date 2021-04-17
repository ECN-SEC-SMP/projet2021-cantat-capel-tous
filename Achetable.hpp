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

class Achetable : public CaseMonop
{
    public:
    Achetable();
    Achetable(std::string nom, int prix);
    //void acheter(Joueur j);

    protected:

    int m_prix;
   // Joueur m_Proprio;


};

#endif
