

#include <iostream>
#include "Joueur.hpp"
#include <stdio.h>
#include <string>

#include "Achetable.hpp"
#include "CaseMonop.hpp"
#include "Constructible.hpp"
#include "Gare.hpp"
#include "Plateau.hpp"
#include "Depart.hpp"
#include "Gare.hpp"
#include "Chance.hpp"
#include <time.h>




using namespace std;


int main() {

srand(time(NULL));


Joueur j1("sacha",1,3000);

Gare *gare = new Gare("GDN", 500);
cout << "Nb Gare Sacha :" << j1.nbGare()<<endl;
cout <<"Sacha achète Gare"<<endl;
gare->acheter(j1);
cout << "Nb Gare Sacha :" << j1.nbGare()<<endl;




/*
Chance *chanceCase = new Chance();
CaseDep->affiche();
cout <<"Achat" <<endl;
CaseDep->acheter(j1);
CaseDep->affiche();
cout << CaseDep->getProprioName()<<endl;
cout << CaseDep->isLoyer()<<endl;

cout << "Construction est achetable ? "<< CaseDep->isAchetable() << endl;
cout << "Chance est achetable ? "<< chanceCase->isAchetable() << endl;

//cout <<*CaseDep <<endl;
*/





Plateau plat =Plateau();

//cout << j1 <<endl;
plat.initPlateau();
plat.startGame();


//j1.tourDeJeu();







// Depart CaseDepart = Depart();


// //création de joueurs
// Joueur j1("sacha",0,&CaseDepart,&plat);
// Joueur j2("Thibault",0,&CaseDepart,&plat);

// Gare GDN("Gare du Nord",200);
// Gare GSL("Gare Saint-Lazare",300);

// GSL.acheter(j1);


// Constructible PasdeP = Constructible("Rue de la paix", 500);
// Constructible Sacha0M0H = Constructible("Rue Veaugirard", 1000);
// Constructible Thibault1M0H = Constructible("Rue de la paix", 63);
// Constructible Sacha0M1H = Constructible("Bd Saint-Honoré", 1000);
// Constructible Thibault12M3H = Constructible("Rue de l'espoir", 450);

// Sacha0M0H.acheter(j1);

// Thibault1M0H.acheter(j2);
// Thibault1M0H.acheteMaison(1);

// Sacha0M1H.acheter(j1);
// Sacha0M1H.acheteHotel(1);

// Thibault12M3H.acheter(j2);
// Thibault12M3H.acheteMaison(12);
// Thibault12M3H.acheteHotel(3);


// cout << PasdeP << endl;
// cout << Sacha0M0H << endl;
// cout << Thibault1M0H << endl;
// cout << Sacha0M1H << endl;
// cout << Thibault12M3H << endl;
// cout << GDN <<endl;
// cout <<GSL<<endl;







// j1.tourDeJeu();
// j1.tourDeJeu();
// j1.tourDeJeu();
// j1.tourDeJeu();
// j1.tourDeJeu();
// j1.tourDeJeu();

/*
 Joueur j1("Sacha",0,0);
 Joueur j2("Thibault",0,0);
 
//test 0
cout<<"TEST 0 : Fortunes joueurs correctement inialisées"<<endl;
cout <<"Fortune du joueur " <<j1.getNom()<<" est de : "<<j1.getFortune()<<endl;
cout <<"Fortune du joueur " <<j2.getNom()<<" est de : "<<j2.getFortune()<<endl;
 
//test 1
cout<<""<<endl;
cout<<"TEST 1 : Paiment de 5 crédits de j1 à j2"<<endl;
j1.paiement(5,j2);
cout <<"Fortune du joueur " <<j1.getNom()<<" est de : "<<j1.getFortune()<<endl;
cout <<"Fortune du joueur " <<j2.getNom()<<" est de : "<<j2.getFortune()<<endl;
 
//test 2
cout<<""<<endl;
cout<<"TEST 2 : Paiment avec insufisance crédit de j1 à j2"<<endl;
if (j1.paiement(500000,j2)==0) {
 cout <<"Le joueur "<<j1.getNom()<<" n'a pas assez d'argent pour payer le joueur  "<<j2.getNom()<<endl;
}

*/

}