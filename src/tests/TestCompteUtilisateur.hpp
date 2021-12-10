#ifndef test_compte_utilisateur
#define test_compte_utilisateur
#include "Test.hpp"
#include "../comptes/ComptePersonnel.hpp"
#include "../comptes/CompteDepensesCommunes.hpp"
#include <iostream>


/**
 * @brief Classe de tests de la classe CompteUtilisateur
 *
 * @author Didier MANZI
 * @version 0.6
 * @since 0.6
 */
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
