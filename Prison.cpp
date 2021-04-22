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

 ostream& operator<<(ostream& out,  Prison const& c)
{
  out <<"Prison"<<endl;
   return out;
}





