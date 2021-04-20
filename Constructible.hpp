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
    
    int getNbMaison() const;
    int getNbHotel() const;

    private:

    int m_hotel= 0;
    int m_maison= 0;


};


ostream& operator<<(ostream&, Constructible const&);
#endif
