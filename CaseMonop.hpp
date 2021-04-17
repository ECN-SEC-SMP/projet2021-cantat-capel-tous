#ifndef DEF_CASE
#define DEF_CASE

#include "string.h"

class CaseMonop
{
    public:

    CaseMonop(std::string nom); //Constructeur
    virtual ~CaseMonop();
    
    protected:

    std::string m_nom;
};

#endif