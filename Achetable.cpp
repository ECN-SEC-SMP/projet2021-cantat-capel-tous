/**
 * @file        achetable.cpp
 * @brief       Contient la déclaration de la classe Achetable
 * @details     La classe Achetable est
 * @author      Sacha CANTAT
 * @date        17/04/21
 */

#include <iostream>
#include <stdlib.h>
#include "CaseMonop.hpp"
#include "Achetable.hpp"



using namespace std;


Achetable::Achetable(string nom, int prix): CaseMonop(nom), m_prix(prix)
{

}

// void Achetable::acheter(Joueur j)
// {
//   m_Proprio = j;
// }




