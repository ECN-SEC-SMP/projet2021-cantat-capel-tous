#ifndef DEF_ACHETABLE
#define DEF_ACHETABLE

#include "CaseMonop.hpp"

class Achetable : public CaseMonop
{
    public:

    Achetable();
    void acheter(Joueur j);

    protected:

    int m_prix;
    int m_Proprio;


};

#endif