/**
 * @file        Depart.cpp
 * @brief       Contient la déclaration de la classe Depart
 * @details     La classe Depart est
 * @author      Sacha CANTAT
 * @date        17/04/21
 */

#include <iostream>
#include <stdlib.h>
#include "Achetable.hpp"
#include "Depart.hpp"

#include "Joueur.h"

using namespace std;

Depart::Depart() : NonAchetable() 
{

}

Depart::~Depart()
{

}

 ostream& operator<<(ostream& out,  Depart const& c)
{
  out <<"Depart"<<endl;
   return out;
}





