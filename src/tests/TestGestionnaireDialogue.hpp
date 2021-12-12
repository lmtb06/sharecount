#ifndef TESTGESTIONNAIREDIALOGUE_HPP
#define TESTGESTIONNAIREDIALOGUE_HPP
#include "Test.hpp"
#include "../comptes/ComptePersonnel.hpp"
#include "../comptes/CompteDepensesCommunes.hpp"
#include "../gestionnaires/GestionnaireDialogue.hpp"
#include <iostream>

/**
 * @brief Classe de tests de la classe GestionnaireDialogue
 *
 * @author Didier MANZI
 * @version 0.7
 * @since 0.7
 */
class TestGestionnaireDialogue : public Test
{
public :
    void tester();
    bool testPseudoExist();
    bool testPseudoConforme();
    bool testPrenomConforme();
    bool testNomConforme();
    bool testEmailConforme();
    bool testMotDePasseConforme();
};

#endif // TESTGESTIONNAIREDIALOGUE_HPP
