/**
 * @file        Depart.hpp
 * @brief       Contient la déclaration de la classe Depart
 * @details     La classe Depart est
 * @author      Sacha CANTAT
 * @date        17/04/21
 */

#ifndef DEF_DEPART
#define DEF_DEPART

#include "NonAchetable.hpp"


class Depart : public NonAchetable
{
    public:
    Depart();
    ~Depart();

   
    
    
    private:

};

ostream& operator<<(ostream& out,  Depart const& c);

#endif 
