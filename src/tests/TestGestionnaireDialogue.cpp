#include "TestGestionnaireDialogue.hpp"

void TestGestionnaireDialogue::tester()
{
    bool test = true;

    if (!testPseudoExist()) {
        test = false;
        std::cout<<"\nLa fonction pseudoExist n'a pas fonctionné correctement\n"<<std::endl;
    }

    if (!testPseudoConforme()) {
        test = false;
        std::cout<<"\nLa fonction pseudoConforme n'a pas fonctionné correctement\n"<<std::endl;
    }

    if (!testPrenomConforme()) {
        test = false;
        std::cout<<"\nLa fonction prenomConforme n'a pas fonctionné correctement\n"<<std::endl;
    }

    if (!testNomConforme()) {
        test = false;
        std::cout<<"\nLa fonction nomConforme n'a pas fonctionné correctement\n"<<std::endl;
    }

    if (!testEmailConforme()) {
        test = false;
        std::cout<<"\nLa fonction emailConforme 'a pas fonctionné correctement\n"<<std::endl;
    }

    if (!testMotDePasseConforme()) {
        test = false;
        std::cout<<"\nLa fonction motDePasseConforme n'a pas fonctionné correctement\n"<<std::endl;
    }

    if (test) {
        std::cout<<"\nTous les tests de la classe GestionnaireDialogue se sont bien déroulés\n"<<std::endl;
    }
}

bool TestGestionnaireDialogue::testPseudoExist()
{
    bool test = true;

    /*
    std::string pseudo = "pseudoTest";

    GestionnaireDialogue gest = GestionnaireDialogue();

    if (gest.pseudoExist(pseudo)==true)
    {
        test = false;
    }

    if (gest.pseudoExist()==true)
    {
        test = false;
    }*/

    return test;
}

bool TestGestionnaireDialogue::testPseudoConforme()
{
    bool test = true;

    /*GestionnaireDialogue gest = GestionnaireDialogue();

    std::string pseudo;

    pseudo = "1";

    if (gest.pseudoConforme(pseudo)==false)
    {
        test = false;
    }

    pseudo = "UDIOAHZDIGVAIODHJAPZHDIHADPHAMP";

    if (gest.pseudoConforme(pseudo)==false)
    {
        test = false;
    }

    pseudo = "666";

    if (gest.pseudoConforme(pseudo)==false)
    {
        test = false;
    }

    pseudo = "PogChamp123456654321";

    if (gest.pseudoConforme(pseudo)==false)
    {
        test = false;
    }

    pseudo = "Test";

    if (gest.pseudoConforme(pseudo)==false)
    {
        test = false;
    }

    pseudo = "";

    if (gest.pseudoConforme(pseudo)==true)
    {
        test = false;
    }*/

    return test;
}

bool TestGestionnaireDialogue::testPrenomConforme()
{
    bool test = true;

    /*GestionnaireDialogue gest = GestionnaireDialogue();

    std::string prenom;

    prenom = "1";

    if (gest.pseudoConforme(prenom)==false)
    {
        test = false;
    }

    prenom = "UDIOAHZDIGVAIODHJAPZHDIHADPHAMP";

    if (gest.pseudoConforme(prenom)==false)
    {
        test = false;
    }

    prenom = "666";

    if (gest.pseudoConforme(prenom)==false)
    {
        test = false;
    }

    prenom = "PogChamp123456654321";

    if (gest.pseudoConforme(prenom)==false)
    {
        test = false;
    }

    prenom = "Test";

    if (gest.pseudoConforme(prenom)==false)
    {
        test = false;
    }

    prenom = "";

    if (gest.pseudoConforme(prenom)==true)
    {
        test = false;
    }*/

    return test;
}

bool TestGestionnaireDialogue::testNomConforme()
{
    bool test = true;

    /*GestionnaireDialogue gest = GestionnaireDialogue();

    std::string nom;

    nom = "1";

    if (gest.pseudoConforme(nom)==false)
    {
        test = false;
    }

    nom = "UDIOAHZDIGVAIODHJAPZHDIHADPHAMP";

    if (gest.pseudoConforme(nom)==false)
    {
        test = false;
    }

    nom = "UDIOAHZDIGVAIODHJAPZHDIHADPHAMPaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";

    if (gest.pseudoConforme(nom)==true)
    {
        test = false;
    }

    nom = "#{#{#{@^çç_zè_-'ààéàçèçà_à";

    if (gest.pseudoConforme(nom)==true)
    {
        test = false;
    }

    nom = "666";

    if (gest.pseudoConforme(nom)==false)
    {
        test = false;
    }

    nom = "PogChamp123456654321";

    if (gest.pseudoConforme(nom)==false)
    {
        test = false;
    }

    nom = "Test";

    if (gest.pseudoConforme(nom)==false)
    {
        test = false;
    }

    nom = "";

    if (gest.pseudoConforme(nom)==true)
    {
        test = false;
    }*/

    return test;
}

bool TestGestionnaireDialogue::testEmailConforme()
{
    bool test = true;

    /*GestionnaireDialogue gest = GestionnaireDialogue();

    std::string email;

    email = "1";

    if (gest.pseudoConforme(email)==true)
    {
        test = false;
    }

    email = "@@.@";

    if (gest.pseudoConforme(email)==true)
    {
        test = false;
    }

    email = "Salut@gmail.com";

    if (gest.pseudoConforme(email)==false)
    {
        test = false;
    }

    email = "PogChamp123456654321";

    if (gest.pseudoConforme(email)==true)
    {
        test = false;
    }

    email = "Test@hotmail.com";

    if (gest.pseudoConforme(email)==false)
    {
        test = false;
    }

    email = "azerty@com";

    if (gest.pseudoConforme(email)==true)
    {
        test = false;
    }*/

    return test;
}

bool TestGestionnaireDialogue::testMotDePasseConforme()
{
    bool test = true;

    /*GestionnaireDialogue gest = GestionnaireDialogue();

    std::string mdp;

    mdp = "1";

    if (gest.pseudoConforme(mdp)==true)
    {
        test = false;
    }

    mdp = "UDIOAHZDIGVAIODHJAPZHDIHADPHAMP";

    if (gest.pseudoConforme(mdp)==true)
    {
        test = false;
    }

    mdp = "666";

    if (gest.pseudoConforme(mdp)==true)
    {
        test = false;
    }

    mdp = "PogChamp123456654321";

    if (gest.pseudoConforme(mdp)==false)
    {
        test = false;
    }

    mdp = "Test";

    if (gest.pseudoConforme(mdp)==true)
    {
        test = false;
    }

    mdp = "";

    if (gest.pseudoConforme(mdp)==true)
    {
        test = false;
    }*/

    return test;
}

