#include "Plateau.hpp"
#include "Joueur.hpp"
#include "CaseMonop.hpp"
#include "Achetable.hpp"
#include "Depart.hpp"
#include "Gare.hpp"
#include "Prison.hpp"
#include "Chance.hpp"
#include "Constructible.hpp"
#include <string> 
#include <iostream>
#include <algorithm>
#include <vector>
// #include <Windows.h>
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
  // for (int i = 0; i < _joueurs.size(); i++) delete _joueurs[i];
  // for (int i = 0; i < 40; i++) delete _plateau[i];
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
  for(Joueur *j : this->_joueurs)
  {
    cout<<j->getNom()<<" est sur la case :"<<j->getPosition()<<endl ;
  }
  for(int i=0; i<40; i++ )
  {
    if (this->_plateau[i] != nullptr)
    {
     _plateau[i]->affiche(); //méthode réalisée par Sacha
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
  //this->_plateau[0] =  new Depart();
  Depart *depart = new Depart();
  _plateau[0] = depart;
  Constructible *BDB = new Constructible("Boulevard de Belleville", 600,100);
  _plateau[1] = BDB;
  Chance *chance1 = new Chance();
  _plateau[2] = chance1;
  Constructible *RL = new Constructible("Rue Lecourbe", 450,100);
  _plateau[3] = RL;
  Chance *chance2 = new Chance();
  _plateau[4] = chance2;
  Gare *GM =new Gare("Gare Montparnasse", 1500);
  _plateau[5] = GM;
  Constructible *RDV = new Constructible("Rue de Vaugirard", 400,100);
  _plateau[6] = RDV;
  Chance *chance3 = new Chance();
  _plateau[7] = chance3;
  Constructible *RDC =new Constructible("Rue des Courcelles", 500,100);
  _plateau[8] = RDC;
  Constructible *ADLR =new Constructible("Avenue de la République", 500,100);
  _plateau[9] = ADLR;
  Prison *prison = new Prison();
  _plateau[10] = prison;
  Constructible *BDLV =new Constructible("Boulevard de la Vilette", 700,100);
  _plateau[11] = BDLV;
  Chance *chance4 =new Chance();
  _plateau[12] = chance4;  
  Constructible *ADN = new Constructible("Avenue de Neuilly", 400,100);
  _plateau[13] = ADN;
  Constructible *RDP = new Constructible("Rue de Paradis", 450,100);
  _plateau[14] = RDP;
  Gare *GDL = new Gare("Gare de Lyon", 1200);
  _plateau[15] = GDL;
  Constructible *AM = new Constructible("Avenue Mozart", 600,100);
  _plateau[16] = AM;
  Chance *chance5 = new Chance();
  _plateau[17] = chance5;
  Constructible *BSM =new Constructible("Boulevard Saint-Michel", 500,100);
  _plateau[18] = BSM;
  Constructible *PP =new Constructible("Place Pigale", 650,100);
  _plateau[19] = PP;
  Chance *chance6 = new Chance();
  _plateau[20] = chance6;
  Constructible *AMN = new Constructible("Avenue Matignon", 550,100);
  _plateau[21] = AMN;
  Chance *chance7 = new Chance();
  _plateau[22] = chance7;
  Constructible *BMS =new Constructible("Boulevard Malsherbes", 450,100);
  _plateau[23] = BMS;
  Constructible *AHM =new Constructible("Avenue Henri-Martin", 400,100);
  _plateau[24] = BMS;
  Gare *GDN =new Gare("Gare du Nord", 1400);
  _plateau[25] = GDN;
  Constructible *FSH =new Constructible("Faubourg Saint-Honoré", 700,100);
  _plateau[26] = FSH;
  Constructible *PDLB =new Constructible("Place de la Bourse", 500,100);
  _plateau[27] = PDLB;
  Chance *chance8 =new Chance();
  _plateau[28] = chance8;
  Constructible *RLF =new Constructible("Rue La Fayelle", 300,100);
  _plateau[29] = RLF;
  Prison *prison2 =new Prison();
  _plateau[30] = prison2;
  Constructible *ADB =new Constructible("Avenue de Breteuille", 400,100);
  _plateau[31] = ADB;
  Constructible *AR = new Constructible("Avenue Roch", 400, 100);
  _plateau[32] = AR;
  Chance *chance9 =new Chance();
  _plateau[33] = chance9;
  Constructible *BDC =new Constructible("Boulevard des Capucines", 500,100);
  _plateau[34] = BDC;
  Gare *GSL =new Gare("Gare Saint-Lazare", 1300);
  _plateau[35] = GSL;
  Chance *chance10 =new Chance();
  _plateau[36] = chance10;
  Constructible *ADCE =new Constructible("Avenue des Champs-Elysée", 800,100);
  _plateau[37] = ADCE;
  Chance *chance11  =new Chance();
  _plateau[38] = chance11;
  Constructible *RDLP =new Constructible("Rue de la Paix", 650,100);
  _plateau[39] = RDLP;

  //On initialise les joueurs et créer le vecteurs _joueurs
  int nbJoueurs;
  cout<<" "<<endl;
  cout<<"Veuillez saisir le nombre de joueurs voulu : " << endl;
  cin>>nbJoueurs;
  string Pseudo;
  cout<<" "<<endl;
  cout<<"Veuillez tour à tour rentrer votre pseudo : "<< endl;
  for(int y=0; y<nbJoueurs; y++)
  {
    cin>> Pseudo;
    this->_joueurs.push_back(new Joueur(Pseudo, y, 0, this));
  } 
  cout<<" "<<endl;


for(int i = 0; i<=6;i++)
{
  if (Achetable *ach = dynamic_cast<Achetable*>(_plateau[i]))
  {
    ach->acheter(*_joueurs[0]);
  }
}

//On affiche les cases du tableau
 Affiche();

//  cout<<" "<<endl;
//  cout<<"Simulation tour de jeu n°1 :  "<<endl;
//  this->_joueurs[0]->tourDeJeu();
//  this->_joueurs[1]->tourDeJeu();

//  cout<<" "<<endl;
//  cout<<"Simulation tour de jeu n°2 :  "<<endl;
//  this->_joueurs[0]->tourDeJeu();
//  this->_joueurs[1]->tourDeJeu();

//  Affiche();
}


/**
 * @file        Plateau.cpp
 * @brief       Fonction permettant de connaître le nombre de Gares que possède un joueurs
 * @details     Cette fonction prend en paramètre un joueur 
 * @author      Thibault CAPEL
 * @date        17/04/21
 */
// int Plateau::nbGares(Joueur* j) const{
//   int nbGares = 0;
//   for(Achetable* c : this->_plateau)
//   {
//     if(c->getProprio() != nullptr && c->getProprio()->getId() == j->getId()){
//       nbGares++;
//     }
//   }
//   return nbGares;
// };


/**
 * @file        Plateau.cpp
 * @brief       Fonction permettant à un joueur d'avancer
 * @details     Cette fonction prend en paramètre une case (celle acttuel), du nombre de case à avancer et renvoie la case sur laquelle se positioner
 * @author      Thibault CAPEL
 * @date        17/04/21
 */
CaseMonop* Plateau::Avance(CaseMonop *cMonop, int numero, Joueur *j)
{
  j->setPosition(j->getPosition()+numero);
  return (this->_plateau[cMonop->getId()+numero]);
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
 * @brief       Fonction permettant de retourner le tableau de case  
 * @details     accesseur plateau 
 * @author      Thibault CAPEL
 * @date        17/04/21
 */
// CaseMonop* Plateau::getPlateau() {
//   return _plateau;
// };


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
CaseMonop* Plateau::GetCase(int numero)
{
  return this->_plateau[numero];
}


// void Plateau::JoueurActuelAPerdu()
// {
//   GetJoueurActuel()->Perdre();
// }



bool Plateau::finPartie() {
    if (this->_joueurs.size() <= 1) {
        return true;
    } else {
        return false;
    }
}


/**
 * @file        Plateau.cpp
 * @brief       Fonction permettant de démarrer la partie 
 * @author      Thibault CAPEL
 * @date        25/04/21
 */
 void Plateau::startGame()
 {
   /*
  while(!this->finPartie()) 
  {
    for (Joueur *j : this->_joueurs) 
    {          
      cin.get();
      j->tourDeJeu();
      this->Affiche();
      }
  }
  cout << endl;
  cout << "--------> WINNER <--------" << endl;
  cout << " Player : " << this->_joueurs[0]->getNom() << endl;
*/
 cout<<" "<<endl;
  cout<<"Simulation tour de jeu n°1 :  "<<endl;
 this->_joueurs[0]->tourDeJeu();
  this->_joueurs[1]->tourDeJeu();

  Affiche();

  cout<<" "<<endl;
  cout<<"Simulation tour de jeu n°2 :  "<<endl;
  this->_joueurs[0]->tourDeJeu();
  this->_joueurs[1]->tourDeJeu();

  Affiche();

 }
 