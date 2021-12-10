#ifndef TESTGESTIONNAIRESAUVEGARDEFICHIER_HPP
#define TESTGESTIONNAIRESAUVEGARDEFICHIER_HPP
#include "Test.hpp"
#include "../gestionnaires/GestionnaireSauvegardeFichier.hpp"
#include "../comptes/ComptePersonnel.hpp"
#include "../comptes/CompteDepensesCommunes.hpp"
#include <iostream>


/**
 * @brief Classe de tests de la classe GestionnaireSauvegardeFichier
 *
 * @author Didier MANZI
 * @version 0.6
 * @since 0.6
 */
class TestGestionnaireSauvegardeFichier : public Test
    {
    public :

        void tester();
        bool testSauvegarderCompteUtilisateur();

    };

#endif // TESTGESTIONNAIRESAUVEGARDEFICHIER_HPP
