/**
 * @file        Chance.cpp
 * @brief       Contient la déclaration de la classe Chance
 * @details     La classe Chance est
 * @author      Sacha CANTAT
 * @date        17/04/21
 */

#include <iostream>
#include <stdlib.h>
#include "NonAchetable.hpp"
#include "Chance.hpp"

#include "Joueur.hpp"

using namespace std;

Chance::Chance() : NonAchetable() 
{

}

Chance::~Chance()
{

}

void Chance::affiche() const
{
   cout << *this <<endl;
}

 ostream& operator<<(ostream& out,  Chance const& c)
{
  out <<"Chance"<<endl;
   return out;
}

