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




using namespace std;


int main() {






Plateau plat = Plateau();
plat.initPlateau();



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


// //test 0
// cout<<"TEST 0 : Fortunes joueurs correctement inialisées"<<endl;
// cout <<"Fortune du joueur 1 : " <<j1.getFortune()<<endl;
// cout <<"Fortune du joueur 2 : " <<j2.getFortune()<<endl;



// //test 1
// cout<<""<<endl;
// cout<<"TEST 1 : paiment de 5 crédits de j1 à j2"<<endl;
// j1.paiement(5,j2);
// cout <<"Fortune du joueur 1 : " <<j1.getFortune()<<endl;
// cout <<"Fortune du joueur 2 : " <<j2.getFortune()<<endl;

// //test 2
// cout<<""<<endl;
// cout<<"TEST 2 : paiment avec insufisance crédit de j1 à j2"<<endl;
// if (j1.paiement(500000,j2)==0) {
//   cout <<"le joueur courant n'a pas assez d'argent pour régler"<<endl;
// }

// cout<<""<<endl;
// cout <<"Fortune du joueur 1 : " <<j1.getFortune()<<endl;
// cout <<"Fortune du joueur 2 : " <<j2.getFortune()<<endl;
// }
}