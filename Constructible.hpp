#ifndef DEF_CONSTRUCTIBLE
#define DEF_CONSTRUCTIBLE

#include "Achetable.hpp"
//#include "Joueur.h"

class Constructible : public Achetable
{
    public:

    Constructible(std::string nom, int prix, int loyer);
    ~Constructible();

    int getNbMaison() const;
    int getNbHotel() const;
    
    int acheteMaison(int nombre);
    bool acheteHotel(int nombre);
    
    virtual void affiche() const override;
    virtual int isLoyer() const override;
    virtual bool isAchetable() const override;

    private:

    int m_hotel= 0;
    int m_maison= 0;
    int m_loyer=0;


};


ostream& operator<<(ostream&, Constructible const&);
#endif
