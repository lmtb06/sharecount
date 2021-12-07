#ifndef TESTCOMPTEPERSONNEL_H
#define TESTCOMPTEPERSONNEL_H
#include "Test.hpp"
#include "../comptes/ComptePersonnel.hpp"
#include "../comptes/CompteDepensesCommunes.hpp"
#include <iostream>

    class TestComptePersonnel : public Test
    {
    public :
        void tester();
        bool testSetPseudo();
        bool testSetPrenom();
        bool testSetNom();
        bool testSetEmail();
        bool testSetHashMotDePasse();

    };

#endif // TESTCOMPTEPERSONNEL_H
