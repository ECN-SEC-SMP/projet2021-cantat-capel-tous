#ifndef DEF_CASE
#define DEF_CASE

#include <iostream>
#include <string>
using namespace std;

class CaseMonop
{
    public:

    CaseMonop(std::string nom); //Constructeur
    ~CaseMonop();
    
    std::string getNom() const;
    // virtual bool isAchetable() const;
    
    protected:
    std::string m_nom;
};

 ostream& operator<<(ostream& out, CaseMonop const & c);


#endif
