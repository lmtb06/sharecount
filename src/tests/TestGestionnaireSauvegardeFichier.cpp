#include "TestGestionnaireSauvegardeFichier.hpp"

void TestGestionnaireSauvegardeFichier::tester()
{
    bool test = true;

    if (!testSauvegarderCompteUtilisateur()) {
        test = false;
        std::cout<<"\nLa fonction sauvegarderCompteUtilisateur n'a pas fonctionné correctement\n"<<std::endl;
    }

    if (test) {
        std::cout<<"\nTous les tests de la classe GestionnaireSauvegardeFichier se sont bien déroulés\n"<<std::endl;
    }

}

bool TestGestionnaireSauvegardeFichier::testSauvegarderCompteUtilisateur()
{
    bool test = true;

    //A faire

    return test;
}
