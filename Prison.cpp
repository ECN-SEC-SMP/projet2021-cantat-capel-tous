/**
 * @file        Prison.cpp
 * @brief       Contient la déclaration de la classe Prison
 * @details     La classe Prison est
 * @author      Sacha CANTAT
 * @date        17/04/21
 */

#include <iostream>
#include <stdlib.h>
#include "NonAchetable.hpp"
#include "Prison.hpp"

#include "Joueur.hpp"

using namespace std;

Prison::Prison() : NonAchetable() 
{

}

Prison::~Prison()
{

}

void Prison::affiche() const
{
 cout << *this << endl;
}

int Prison::isLoyer() const
{
  return 0;
}

bool Prison::isAchetable() const
{
  return false;
}

 ostream& operator<<(ostream& out,  Prison const& c)
{
  out <<"Prison"<<endl;
   return out;
}





