/**
 * @file        NonAchetable.cpp
 * @brief       Contient la déclaration de la classe NonAchetable
 * @details     La classe NonAchetable est
 * @author      Sacha CANTAT
 * @date        17/04/21
 */

#include <iostream>
#include <stdlib.h>
#include "CaseMonop.hpp"
#include "NonAchetable.hpp"
#include "Joueur.hpp"



using namespace std;


/**
 * \fn NonAchetable()
 * \brief    Constructeur de case NonAchetable
 */
NonAchetable::NonAchetable()
{

}

void NonAchetable::affiche() const
{

}
NonAchetable::~NonAchetable(){}

int NonAchetable::isLoyer() const
{
  return 0;
}

bool NonAchetable::isAchetable() const
 {
    return 0;
 }