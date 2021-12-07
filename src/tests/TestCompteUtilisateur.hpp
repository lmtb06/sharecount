#ifndef test_compte_utilisateur
#define test_compte_utilisateur
#include "Test.hpp"
#include "../comptes/ComptePersonnel.hpp"
#include "../comptes/CompteDepensesCommunes.hpp"
#include <iostream>


	class TestCompteUtilisateur : public Test
	{

        void tester();
		void testRecupererInfosCompteDepensesCommunes();
		void testRecupererComptesDepensesCommunes();
		void testAddCompteDepensesCommunes();
		void testSetCompteDepensesCommunes();

	};

#endif // TestCompteUtilisateur.hpp included