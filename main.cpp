

#include <iostream>
#include "Joueur.h"
#include <stdio.h>
#include <string>

#include "Achetable.hpp"
#include "CaseMonop.hpp"
#include "Constructible.hpp"
#include "Gare.hpp"
#include "Joueur.h"



using namespace std;


int main() {

//création de joueurs
Joueur j1("sacha",0);
Joueur j2("thibault",0);



j1.tourDeJeu();
j1.tourDeJeu();
j1.tourDeJeu();
j1.tourDeJeu();
j1.tourDeJeu();
j1.tourDeJeu();


//test 0
cout<<"TEST 0 : Fortunes joueurs correctement inialisées"<<endl;
cout <<"Fortune du joueur 1 : " <<j1.getFortune()<<endl;
cout <<"Fortune du joueur 2 : " <<j2.getFortune()<<endl;



//test 1
cout<<""<<endl;
cout<<"TEST 1 : paiment de 5 crédits de j1 à j2"<<endl;
j1.paiement(5,j2);
cout <<"Fortune du joueur 1 : " <<j1.getFortune()<<endl;
cout <<"Fortune du joueur 2 : " <<j2.getFortune()<<endl;

//test 2
cout<<""<<endl;
cout<<"TEST 2 : paiment avec insufisance crédit de j1 à j2"<<endl;
if (j1.paiement(500000,j2)==0) {
  cout <<"le joueur courant n'a pas assez d'argent pour régler"<<endl;
}

cout<<""<<endl;
cout <<"Fortune du joueur 1 : " <<j1.getFortune()<<endl;
cout <<"Fortune du joueur 2 : " <<j2.getFortune()<<endl;
}
