#include "TestCompteUtilisateur.hpp"

void TestCompteUtilisateur::tester()
{
    bool test = true;

    if (!testAddCompteDepensesCommunes()) {
        test = false;
        std::cout<<"\nLa fonction addCompteDepensesCommunes n'a pas fonctionné correctement\n"<<std::endl;
    }

    if (!testRecupererInfosCompteDepensesCommunes()) {
        test = false;
        std::cout<<"\nLa fonction recupererInfosCompteDepensesCommunes n'a pas fonctionné correctement\n"<<std::endl;
    }

    if (!testRecupererComptesDepensesCommunes()) {
        test = false;
        std::cout<<"\nLa fonction RecupererComptesDepensesCommunes n'a pas fonctionné correctement\n"<<std::endl;
    }

    if (!testSetCompteDepensesCommunes()) {
        test = false;
        std::cout<<"\nLa fonction setCompteDepensesCommunes n'a pas fonctionné correctement\n"<<std::endl;
    }

    if (test) {
        std::cout<<"\nTous les tests se sont bien déroulés\n"<<std::endl;
    }

}

bool TestCompteUtilisateur::testAddCompteDepensesCommunes()
{

    std::time_t dateDeCreation = time(0);

    CompteUtilisateur compte = CompteUtilisateur("lmtb06", "Elhadji Moussa", "FAYE", "moussafaye.m@gmail.com", "SHA256-HASH");

    bool test = true;

    CompteDepensesCommunes cdc1 = CompteDepensesCommunes("id1", "Compte Depense 1", "", dateDeCreation, compte);
    CompteDepensesCommunes cdc2 = CompteDepensesCommunes("id2", "Compte Depense 2", "", dateDeCreation, compte);
    CompteDepensesCommunes cdc3 = CompteDepensesCommunes("id3", "Compte Depense 3", "", dateDeCreation, compte);

	compte.addCompteDepensesCommunes(cdc1);

    if (test) {
        std::string attendu;

        attendu = "Pseudo : lmtb06\n";
        attendu+= "Prenom : Elhadji Moussa\n";
        attendu+= "Nom : FAYE\n";
        attendu+= "Email : moussafaye.m@gmail.com\n";
        attendu+= "Hash mot de passe : SHA256-HASH\n";
        attendu+= "------COMPTES DEPENSES COMMUNES------\n";
        attendu+= "Identifiant : id1\n";
        attendu+= "Nom : Compte Depense 1\n";
        attendu+= "Description : \n";
        attendu+= "Date de creation : ";
        attendu.append(ctime(&dateDeCreation));
        attendu+= "Pseudo créateur : lmtb06";

        test = (compte.toString().compare(attendu)==0);
    }

	compte.addCompteDepensesCommunes(cdc2);

    if (test) {
        std::string attendu;

        attendu = "Pseudo : lmtb06\n";
        attendu+= "Prenom : Elhadji Moussa\n";
        attendu+= "Nom : FAYE\n";
        attendu+= "Email : moussafaye.m@gmail.com\n";
        attendu+= "Hash mot de passe : SHA256-HASH\n";
        attendu+= "------COMPTES DEPENSES COMMUNES------\n";
        attendu+= "Identifiant : id1\n";
        attendu+= "Nom : Compte Depense 1\n";
        attendu+= "Description : \n";
        attendu+= "Date de creation : ";
        attendu.append(ctime(&dateDeCreation));
        attendu+= "Pseudo créateur : lmtb06";
        attendu+= "\n---------\n";
        attendu+= "Identifiant : id2\n";
        attendu+= "Nom : Compte Depense 2\n";
        attendu+= "Description : \n";
        attendu+= "Date de creation : ";
        attendu.append(ctime(&dateDeCreation));
        attendu+= "Pseudo créateur : lmtb06";
        test = (compte.toString().compare(attendu)==0);
    }

	compte.addCompteDepensesCommunes(cdc3);

    if (test) {
        std::string attendu;

        attendu = "Pseudo : lmtb06\n";
        attendu+= "Prenom : Elhadji Moussa\n";
        attendu+= "Nom : FAYE\n";
        attendu+= "Email : moussafaye.m@gmail.com\n";
        attendu+= "Hash mot de passe : SHA256-HASH\n";
        attendu+= "------COMPTES DEPENSES COMMUNES------\n";
        attendu+= "Identifiant : id1\n";
        attendu+= "Nom : Compte Depense 1\n";
        attendu+= "Description : \n";
        attendu+= "Date de creation : ";
        attendu.append(ctime(&dateDeCreation));
        attendu+= "Pseudo créateur : lmtb06";
        attendu+= "\n---------\n";
        attendu+= "Identifiant : id2\n";
        attendu+= "Nom : Compte Depense 2\n";
        attendu+= "Description : \n";
        attendu+= "Date de creation : ";
        attendu.append(ctime(&dateDeCreation));
        attendu+= "Pseudo créateur : lmtb06";
        attendu+= "\n---------\n";
        attendu+= "Identifiant : id3\n";
        attendu+= "Nom : Compte Depense 3\n";
        attendu+= "Description : \n";
        attendu+= "Date de creation : ";
        attendu.append(ctime(&dateDeCreation));
        attendu+= "Pseudo créateur : lmtb06";
        test = (compte.toString().compare(attendu)==0);
    }

    return test;
}

bool TestCompteUtilisateur::testRecupererInfosCompteDepensesCommunes()
{
    bool test = true;

    std::time_t dateDeCreation = time(0);

    CompteUtilisateur compte = CompteUtilisateur("lmtb06", "Elhadji Moussa", "FAYE", "moussafaye.m@gmail.com", "SHA256-HASH");

    CompteDepensesCommunes cdc1 = CompteDepensesCommunes("id1", "Compte Depense 1", "", dateDeCreation, compte);
    CompteDepensesCommunes cdc2 = CompteDepensesCommunes("id2", "Compte Depense 2", "", dateDeCreation, compte);
    CompteDepensesCommunes cdc3 = CompteDepensesCommunes("id3", "Compte Depense 3", "", dateDeCreation, compte);

    compte.addCompteDepensesCommunes(cdc1);
    compte.addCompteDepensesCommunes(cdc2);
    compte.addCompteDepensesCommunes(cdc3);



    return test;
}

bool TestCompteUtilisateur::testRecupererComptesDepensesCommunes()
{
    bool test = true;
    //CompteUtilisateur compte = CompteUtilisateur("lmtb", "Elhadji Moussa", "FAYE", "moussafaye.m@gmail.com", "SHA256-HASH");

    return test;
}

bool TestCompteUtilisateur::testSetCompteDepensesCommunes()
{
    bool test = true;
    //CompteUtilisateur compte = CompteUtilisateur("lmtb", "Elhadji Moussa", "FAYE", "moussafaye.m@gmail.com", "SHA256-HASH");

    return test;

}
