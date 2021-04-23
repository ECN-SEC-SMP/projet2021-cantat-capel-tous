#ifndef DEF_CASE
#define DEF_CASE

#include <iostream>
#include <string>
using namespace std;

class CaseMonop
{
    public:

    
    virtual ~CaseMonop();
    
    virtual void affiche() const;
    std::string getNom() const;
    int getId() const;
    
    protected:
    
};

 ostream& operator<<(ostream& out, CaseMonop const & c);


#endif
