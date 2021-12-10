#ifndef TESTGESTIONNAIRESAUVEGARDE_HPP
#define TESTGESTIONNAIRESAUVEGARDE_HPP
#include "Test.hpp"
#include "../gestionnaires/GestionnaireSauvegarde.hpp"
#include "../comptes/ComptePersonnel.hpp"
#include "../comptes/CompteDepensesCommunes.hpp"
#include <iostream>


/**
 * @brief Classe de tests de la classe GestionnaireSauvegarde
 *
 * @author Didier MANZI
 * @version 0.6
 * @since 0.6
 */
class TestGestionnaireSauvegarde : public Test
    {
    public :

        void tester();
        bool testSauvegarderCompteUtilisateur();

    };

#endif // TESTGESTIONNAIRESAUVEGARDE_HPP
