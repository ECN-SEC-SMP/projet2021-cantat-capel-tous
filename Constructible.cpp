/**
 * @file        Constructible.hpp
 * @brief       Contient la déclaration de la classe Constructible
 * @details     La classe Constructible est
 * @author      Sacha CANTAT
 * @date        17/04/21
 */
#include <iostream>
#include <stdlib.h>
#include "Achetable.hpp"
#include "Constructible.hpp"
//#include "Joueur.h"

using namespace std;

Constructible::Constructible(string nom, int prix) : Achetable(nom,prix)
{
  
}


void Constructible::acheteMaison(int nombreMaison)
{

}
