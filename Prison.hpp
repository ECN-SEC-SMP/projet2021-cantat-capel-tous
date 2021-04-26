/**
 * @file        Prison.hpp
 * @brief       Contient la déclaration de la classe Prison
 * @details     La classe Prison est
 * @author      Sacha CANTAT
 * @date        17/04/21
 */

#ifndef DEF_PRISON
#define DEF_PRISON

#include "NonAchetable.hpp"

class Prison : public NonAchetable
{
    public:
    Prison();
    ~Prison();
    virtual void affiche() const override;
    virtual int isLoyer() const override;
    bool isAchetable() const override;

   
    
    
    private:

};

ostream& operator<<(ostream& out,  Prison const& c);

#endif 
