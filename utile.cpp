#include "utile.h"
#include <stdlib.h> 
#include <sstream>
#include <fstream>

using namespace std;

/**
 * Génère un nombre aléatoire entre a et b (b > a)
 * @param a
 * @param b
 * @return 
 */
int rand_a_b(int a, int b)
{
  return rand() % (b - a) + a;
}

string intToString(int nb)
{
    // créer un flux de sortie
    ostringstream oss;
    // écrire un nombre dans le flux
    oss << nb;
    // récupérer une chaîne de caractères
    return oss.str();
}

int stringToInt(std::string str)
{
    int numb;
    istringstream(str) >> numb;
    return numb;
}
