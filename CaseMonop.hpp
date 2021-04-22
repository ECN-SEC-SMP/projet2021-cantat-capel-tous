#ifndef DEF_CASE
#define DEF_CASE

#include <iostream>
#include <string>
using namespace std;

class CaseMonop
{
    public:

    CaseMonop();
    CaseMonop(std::string nom); //Constructeur
    ~CaseMonop();
    
;
    std::string getNom() const;
    int getId() const;
    
    protected:
    std::string m_nom;
    int m_id;
};

 ostream& operator<<(ostream& out, CaseMonop const & c);


#endif
