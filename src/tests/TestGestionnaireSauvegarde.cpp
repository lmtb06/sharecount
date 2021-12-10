#include "TestGestionnaireSauvegarde.hpp"

void TestGestionnaireSauvegarde::tester()
{
    bool test = true;

    if (!testSauvegarderCompteUtilisateur()) {
        test = false;
        std::cout<<"\nLa fonction sauvegarderCompteUtilisateur n'a pas fonctionné correctement\n"<<std::endl;
    }

    if (test) {
        std::cout<<"\nTous les tests de la classe GestionnaireSauvegarde se sont bien déroulés\n"<<std::endl;
    }

}

bool TestGestionnaireSauvegarde::testSauvegarderCompteUtilisateur()
{
    bool test = true;

    //En attente du code de la fonction

    return test;
}
