#ifndef DEF_CONSTRUCTIBLE
#define DEF_CONSTRUCTIBLE

#include "Achetable.hpp"
//#include "Joueur.h"

class Constructible : public Achetable
{
    public:

    Constructible();
    Constructible(std::string nom, int prix);
    ~Constructible();

    void acheteMaison(int nombre);
    void acheteHotel(int nombre);

    private:

    int m_hotel;
    int m_maison;


};

#endif