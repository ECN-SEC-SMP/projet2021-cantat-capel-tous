/**
 * @file        Gare.hpp
 * @brief       Contient la déclaration de la classe Gare
 * @details     La classe Gare est
 * @author      Sacha CANTAT
 * @date        17/04/21
 */

#ifndef DEF_GARE
#define DEF_GARE

#include "Achetable.hpp"

class Gare : public Achetable
{
    public:
    Gare(std::string nom, int prix);
    ~Gare();
    
    
    private:


};

#endif