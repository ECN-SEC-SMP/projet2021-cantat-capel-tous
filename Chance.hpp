/**
 * @file        Chance.hpp
 * @brief       Contient la déclaration de la classe Chance
 * @details     La classe Chance est
 * @author      Sacha CANTAT
 * @date        17/04/21
 */

#ifndef DEF_CHANCE
#define DEF_CHANCE

#include "NonAchetable.hpp"

class Chance : public NonAchetable
{
    public:
    Chance();
    ~Chance();
    virtual void affiche() const override;
    virtual int isLoyer() const override;
    
    
    private:

};

ostream& operator<<(ostream& out,  Chance const& c);

#endif 
