/**
 * @file        NonAchetable.hpp
 * @brief       Contient la déclaration de la classe Achetable
 * @details     La classe Achetable est
 * @author      Sacha CANTAT
 * @date        17/04/21
 */

#ifndef DEF_NONACHETABLE
#define DEF_NONACHETABLE

#include "CaseMonop.hpp"
#include "Joueur.h"

class NonAchetable : public CaseMonop
{
    public:
    NonAchetable();
    

    protected:

    


};

ostream& operator<<(ostream& out,  NonAchetable const& c);

#endif
