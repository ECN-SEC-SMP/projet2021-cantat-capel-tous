#include <iostream>
#include <stdlib.h>
#include "CaseMonop.hpp"
#include "Achetable.hpp"
#include "Joueur.h"



using namespace std;

Achetable::Achetable(int prix) : m_prix(prix);
{

}

void Achetable::acheter(Joueur j)
{
  m_Proprio = j;
}



