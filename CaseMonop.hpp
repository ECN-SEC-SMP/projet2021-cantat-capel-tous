#ifndef DEF_CASE
#define DEF_CASE

#include "string.h"

class CaseMonop
{
    public:

    CaseMonop(std::string nom); //Constructeur
    virtual void afficher(std::ostream &flux) const;
    ~CaseMonop();
    
    protected:

    std::string m_nom;
};

#endif