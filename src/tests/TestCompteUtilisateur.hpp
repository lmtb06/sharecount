#ifndef test_compte_utilisateur
#define test_compte_utilisateur
#include "Test.hpp"
#include "../comptes/ComptePersonnel.hpp"
#include "../comptes/CompteDepensesCommunes.hpp"
#include <iostream>


	class TestCompteUtilisateur : public Test
	{
    public :
        void tester();
        bool testRecupererInfosCompteDepensesCommunes();
        bool testRecupererComptesDepensesCommunes();
        bool testAddCompteDepensesCommunes();
        bool testSetCompteDepensesCommunes();

	};

#endif // TestCompteUtilisateur.hpp included
