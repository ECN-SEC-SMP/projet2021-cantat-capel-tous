#ifndef DEF_CONSTRUCTIBLE
#define DEF_CONSTRUCTIBLE

#include "Achetable.hpp"

class Constructible : public Achetable
{
    public:

    Constructible();
    Constructible(Joueur proprio);

    void acheteMaison(int nombre);
    void acheteHotel(int nombre)

    private:

    int m_hotel
    int m_maison;


};

#endif