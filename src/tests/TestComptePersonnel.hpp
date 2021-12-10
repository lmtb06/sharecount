#ifndef TESTCOMPTEPERSONNEL_H
#define TESTCOMPTEPERSONNEL_H
#include "Test.hpp"
#include "../comptes/ComptePersonnel.hpp"
#include "../comptes/CompteDepensesCommunes.hpp"
#include <iostream>

/**
 * @brief Classe de tests de la classe ComptePersonnel
 *
 * @author Didier MANZI
 * @version 0.6
 * @since 0.6
 */
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
