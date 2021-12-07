#include "TestComptePersonnel.hpp"

void TestComptePersonnel::tester()
{
    bool test = true;

    if (!testSetPseudo()) {
        test = false;
        std::cout<<"\nLa fonction setPseudo n'a pas fonctionné correctement\n"<<std::endl;
    }

    if (!testSetPrenom()) {
        test = false;
        std::cout<<"\nLa fonction setPrenom n'a pas fonctionné correctement\n"<<std::endl;
    }

    if (!testSetNom()) {
        test = false;
        std::cout<<"\nLa fonction setNom n'a pas fonctionné correctement\n"<<std::endl;
    }

    if (!testSetEmail()) {
        test = false;
        std::cout<<"\nLa fonction setEmail n'a pas fonctionné correctement\n"<<std::endl;
    }

    if (!testSetHashMotDePasse()) {
        test = false;
        std::cout<<"\nLa fonction setHashMotDePasse n'a pas fonctionné correctement\n"<<std::endl;
    }

    if (test) {
        std::cout<<"\nTous les tests de la classe ComptePersonnel se sont bien déroulés\n"<<std::endl;
    }

}

bool TestComptePersonnel::testSetPseudo()
{
    bool test = true;

    CompteUtilisateur compte = CompteUtilisateur("lmtb06", "Elhadji Moussa", "FAYE", "moussafaye.m@gmail.com", "SHA256-HASH");

    compte.setPseudo("Pogonateur");

    if (test) {
        test = (compte.getPseudo().compare("Pogonateur")==0);
    }
    compte.setPseudo("Payrox");

    if (test) {
        test = (compte.getPseudo().compare("Payrox")==0);
    }

    return test;
}

bool TestComptePersonnel::testSetPrenom()
{
    bool test = true;

    CompteUtilisateur compte = CompteUtilisateur("lmtb06", "Elhadji Moussa", "FAYE", "moussafaye.m@gmail.com", "SHA256-HASH");

    compte.setPrenom("Didier");

    if (test) {
        test = (compte.getPrenom().compare("Didier")==0);
    }

    compte.setPrenom("Nicolas");

    if (test) {
        test = (compte.getPrenom().compare("Nicolas")==0);
    }

    return test;
}

bool TestComptePersonnel::testSetNom()
{
    bool test = true;

    CompteUtilisateur compte = CompteUtilisateur("lmtb06", "Elhadji Moussa", "FAYE", "moussafaye.m@gmail.com", "SHA256-HASH");

    compte.setNom("MANZI");

    if (test) {
        test = (compte.getNom().compare("MANZI")==0);
    }

    compte.setNom("GRAFF");

    if (test) {
        test = (compte.getNom().compare("GRAFF")==0);
    }

    return test;
}

bool TestComptePersonnel::testSetEmail()
{
    bool test = true;

    CompteUtilisateur compte = CompteUtilisateur("lmtb06", "Elhadji Moussa", "FAYE", "moussafaye.m@gmail.com", "SHA256-HASH");

    compte.setEmail("pogonateur@gmail.com");

    if (test) {
        test = (compte.getEmail().compare("pogonateur@gmail.com")==0);
    }

    compte.setEmail("graff.n@outlook.com");

    if (test) {
        test = (compte.getEmail().compare("graff.n@outlook.com")==0);
    }

    return test;
}

bool TestComptePersonnel::testSetHashMotDePasse()
{
    bool test = true;

    CompteUtilisateur compte = CompteUtilisateur("lmtb06", "Elhadji Moussa", "FAYE", "moussafaye.m@gmail.com", "SHA256-HASH");

    compte.setHashMotDePasse("SHA728-HASH");

    if (test) {
        test = (compte.getHashMotDePasse().compare("SHA728-HASH")==0);
    }

    compte.setHashMotDePasse("SHB491-HASH");

    if (test) {
        test = (compte.getHashMotDePasse().compare("SHB491-HASH")==0);
    }

    return test;
}
