#include "Plateau.h"
#include "Joueur.h"
#include "CaseMonop.hpp"
#include "Achetable.hpp"
#include "Constructible.hpp"
#include <string> 
#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

using namespace std;

Plateau::Plateau()
{
  for(int i=0; i<=40; i++)
  {
    this->_plateau[i] = nullptr; //On remplit le vecteur de pointeur null
  } 
}

Plateau::~Plateau()
{
  for (int i = 0; i < _joueurs.size(); i++) delete _joueurs[i];
  for (int i = 0; i < 40; i++) delete _plateau[i];
}


/**
 * @file        Plateau.cpp
 * @brief       Fonction permettant l'affichage des cases de notre plateau ainsi que l'ordre des joueurs à l'instanté 
 * @details     Cette fonction utilise la méthode afficheCase() sur notre vecteur plateau
 * @author      Thibault CAPEL
 * @date        17/04/21
 */
void Plateau::Affiche()
{
  cout<<"Voici l'ordre des joueurs :"<<endl;
  for(Joueur &j : this->_joueurs)
  {
    cout<<j.getNom<<" est sur la case :"<<j.getPosition()->getID()<<endl ;
  }
  for(int i=0; i<40; i++ )
  {
    if (this->_plateau[i] != nullptr)
    {
      _plateau[i]->afficheCase() //méthode réalisée par Sacha
    }
  }
}


/**
 * @file        Plateau.cpp
 * @brief       Fonction permettant l'initialisation du plateau Monopoly
 * @details     Cette fonction initialise : le nombre de tour à zéro, le vecteur plateau contenant des cases, le vecteurs joueurs et affiche le plateau dans le terminal
 * @author      Thibault CAPEL
 * @date        17/04/21
 */
void Plateau::initPlateau()
{
  //On initialise le nombre de tour à 0 
  _tour = 0;
  //déclaration des (40) cases dans le vecteur plateau
  //this->_plateau[0] =  new Depart("Case Départ", 0);
  Depart depart = Depart("Case Départ", 0);
  _plateau[0] = &depart;
  Constructible BDB = Constructible("Boulevard de Belleville", 600);
  _plateau[1] = &BDB;
  Chance chance1 = Chance("La chance vous sourrit", 300);
  _plateau[2] = &chance1;
  Constructible RL = Constructible("Rue Lecourbe", 450);
  _plateau[3] = &RL;
  Chance chance2 = Chance("La chance vous sourrit", 150);
  _plateau[4] = &chance2;
  Gare GM = Gare("Gare Montparnasse", 1500);
  _plateau[5] = &GM;
  Constructible RDV = Constructible("Rue de Vaugirard", 400);
  _plateau[6] = &RDV;
  Chance chance3 = Chance("La chance vous sourrit", 250);
  _plateau[7] = &chance3;
  Constructible RDC = Constructible("Rue des Courcelles", 500);
  _plateau[8] = &RDC;
  Constructible ADLR = Constructible("Avenue de la République", 500);
  _plateau[9] = &ADLR;
  Prison prison("Prison ! heureusment c'est une visite.", 0);
  _plateau[10] = &prison;
  Constructible BDLV = Constructible("Boulevard de la Vilette", 700);
  _plateau[11] = &BDLV;
  Chance chance4 = Chance("La chance vous sourrit", 300);
  _plateau[12] = &chance4;  
  Constructible ADN = Constructible("Avenue de Neuilly", 400);
  _plateau[13] = &ADN;
  Constructible RDP = Constructible("Rue de Paradis", 450);
  _plateau[14] = &RDP;
  Gare GDL = Gare("Gare de Lyon", 1200);
  _plateau[15] = &GDL;
  Constructible AM = Constructible("Avenue Mozart", 600);
  _plateau[16] = &AM;
  Chance chance5 = Chance("La chance vous sourrit", 500);
  _plateau[17] = &chance5;
  Constructible BSM = Constructible("Boulevard Saint-Michel", 500);
  _plateau[18] = &BSM;
  Constructible PP = Constructible("Place Pigale", 650);
  _plateau[19] = &PP;
  Chance chance6 = Chance("La chance vous sourrit", 700);
  _plateau[20] = &chance6;
  Constructible AM = Constructible("Avenue Matignon", 550);
  _plateau[21] = &AM;
  Chance chance7 = Chance("La chance vous sourrit", 300);
  _plateau[22] = &chance7;
  Constructible BMS = Constructible("Boulevard Malsherbes", 450);
  _plateau[23] = &BMS;
  Constructible AHM = Constructible("Avenue Henri-Martin", 400);
  _plateau[24] = &BMS;
  Gare GDN = Gare("Gare du Nord", 1400);
  _plateau[25] = &GDN;
  Constructible FSH = Constructible("Faubourg Saint-Honoré", 700);
  _plateau[26] = &FSH;
  Constructible PDLB = Constructible("Place de la Bourse", 500);
  _plateau[27] = &PDLB;
  Chance chance8 = Chance("La chance vous sourrit", 400);
  _plateau[28] = &chance8;
  Constructible RLF = Constructible("Rue La Fayelle", 300);
  _plateau[29] = &RLF;
  Prison prison2("Prison ! les barreaux se ferme.", 0);
  _plateau[30] = &prison2;
  Constructible ADB = Constructible("Avenue de Breteuille", 400);
  _plateau[31] = &ADB;
  Constructible AR = Constructible("Avenue Roch", 400);
  _plateau[32] = &AR;
  Chance chance9 = Chance("La chance vous sourrit", 450);
  _plateau[33] = &chance9;
  Constructible BDC = Constructible("Boulevard des Capucines", 500);
  _plateau[34] = &BDC;
  Gare GSL = Gare("Gare Saint-Lazare", 1300);
  _plateau[35] = &GSL;
  Chance chance10 = Chance("La chance vous sourrit", 500);
  _plateau[36] = &chance10;
  Constructible ADCE = Constructible("Avenue des Champs-Elysée", 800);
  _plateau[37] = &ADCE;
  Chance chance11  = Chance("La chance vous sourrit mais ne vous donne rien", 0);
  _plateau[38] = &chance11;
  Constructible RDLP = Constructible("Rue de la Paix", 650);
  _plateau[39] = &RDLP;
  //On initialise les joueurs et créer le vecteurs _joueurs
  int nbJoueurs;
  cout<<"Veuillez saisir le nombre de joueurs voulu : " << endl;
  cin>>nbJoueurs;
  string Pseudo;
  cout<<"Veuillez tour à tour rentrer votre pseudo : "<< endl;
  for(int y=0; y<=nbJoueurs; y++)
  {
    cin>> Pseudo;
    this->_joueurs.push_back(Joueur(Pseudo, y, this->_plateau[0], this));
  } 
  //On affiche les cases du tableau
  Affiche();
}


/**
 * @file        Plateau.cpp
 * @brief       Fonction permettant de connaître le nombre de Gares que possède un joueurs
 * @details     Cette fonction prend en paramètre un joueur 
 * @author      Thibault CAPEL
 * @date        17/04/21
 */
int Plateau::nbGares(Joueur j)
{

}


/**
 * @file        Plateau.cpp
 * @brief       Fonction permettant à un joueur d'avancer
 * @details     Cette fonction prend en paramètre une case (celle acttuel), du nombre de case à avancer et renvoie la case sur laquelle se positioner
 * @author      Thibault CAPEL
 * @date        17/04/21
 */
CaseMonop* Plateau::Avance(CaseMonop *cMonop, int numero)
{
  return this->_plateau[cMonop->getID()+numero];
}


// void Plateau::AjouterJoueur(string nomJoueur)
// {
//   Joueur* joueur = new Joueur(this, nomJoueur);
//   _joueurs.push_back(joueur);
// }

/**
 * @file        Plateau.cpp
 * @brief       Fonction permettant de connaître le joueur actuel 
 * @details     Cette fonction se réfère au tour au quel nous sommes
 * @author      Thibault CAPEL
 * @date        17/04/21
 */
Joueur* Plateau::GetJoueurActuel()
{
  return _joueurs[_tour];
}


/**
 * @file        Plateau.cpp
 * @brief       Fonction permettant de terminer un tour 
 * @details     Cette fonction incrémente le compteur tour (qui est remis à zéro quand tous les joueurs ont joué)
 * @author      Thibault CAPEL
 * @date        17/04/21
 */
void Plateau::FinirTour()
{
   _tour++;

  if (_tour == _joueurs.size())
    _tour = 0;

  //if (GetJoueurActuel()->APerdu())
  //  FinirTour();
}

/**
 * @file        Plateau.cpp
 * @brief       Fonction retournant le vecteur joueurs 
 * @details     
 * @author      Thibault CAPEL
 * @date        17/04/21
 */
vector<Joueur*> Plateau::GetJoueurs()
{
  return _joueurs;
}


/**
 * @file        Plateau.cpp
 * @brief       Fonction retournant une case selon un numéro
 * @details     Cette fonction renvoie une case du vecteur plateau
 * @author      Thibault CAPEL
 * @date        17/04/21
 */
// CaseMonop* Plateau::GetCase(int numero)
// {
//   return this->_plateau[numero];
// }


// void Plateau::JoueurActuelAPerdu()
// {
//   GetJoueurActuel()->Perdre();
// }


/**
 * @file        Plateau.cpp
 * @brief       Fonction permettant de terminer la partie 
 * @details     Cette fonction retourne le joueurs restant (le gagnant)
 * @author      Thibault CAPEL
 * @date        17/04/21
 */
bool Plateau::EstFini()
{
  int nbJoueursRestants = 0;
  // for (int i = 0; i < _joueurs.size(); i++)
  // {
  //   if (!_joueurs[i]->APerdu())
  //   nbJoueursRestants++;
  // }

  return nbJoueursRestants == 1;
}