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

#include "Joueur.hpp"

using namespace std;

Depart::Depart() : NonAchetable() 
{

}

Depart::~Depart()
{

}

void Depart::affiche() const
{
 cout << *this << endl;
}

int Depart::isLoyer() const
{
  return 0;
}

bool Depart::isAchetable() const
{
  return false;
}

 ostream& operator<<(ostream& out,  Depart const& c)
{
  out <<"Depart"<<endl;
   return out;
}





