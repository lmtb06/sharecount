#include "TestCompteUtilisateur.hpp"

void TestCompteUtilisateur::tester()
{

    testRecupererInfosCompteDepensesCommunes();
    testRecupererComptesDepensesCommunes();
    testAddCompteDepensesCommunes();
    testSetCompteDepensesCommunes();

}

void TestCompteUtilisateur::testAddCompteDepensesCommunes()
{

    CompteUtilisateur compte = CompteUtilisateur("lmtb", "Elhadji Moussa", "FAYE", "moussafaye.m@gmail.com", "SHA256-HASH");

    CompteDepensesCommunes cdc1 = CompteDepensesCommunes("id1", "Compte Depense 1", "", time(0), compte);
	CompteDepensesCommunes cdc2 = CompteDepensesCommunes("id2", "Compte Depense 2", "", time(0), compte);
	CompteDepensesCommunes cdc3 = CompteDepensesCommunes("id3", "Compte Depense 3", "", time(0), compte);

	compte.addCompteDepensesCommunes(cdc1);

    assert(compte.toString().compare("Pseudo : lmtb06\nPrenom : Moussa\nNom : FAYE\nEmail : moussafaye.m@gmail.com\nHash mot de passe : SHA256-HASH\n------COMPTES DEPENSES COMMUNES------\nIdentifiant : id1\nNom : Compte Depense 1\nDescription : \nDate de creation : Mon Dec  6 19:01:07 2021\nPseudo créateur : lmtb06"));

	compte.addCompteDepensesCommunes(cdc2);

    assert(compte.toString().compare("Pseudo : lmtb06\nPrenom : Moussa\nNom : FAYE\nEmail : moussafaye.m@gmail.com\nHash mot de passe : SHA256-HASH\n------COMPTES DEPENSES COMMUNES------\nIdentifiant : id1\nNom : Compte Depense 1\nDescription : \nDate de creation : Mon Dec  6 19:01:07 2021\nPseudo créateur : lmtb06\n---------\nIdentifiant : id2\nNom : Compte Depense 2\nDescription : \nDate de creation : Mon Dec  6 19:01:07 2021\nPseudo créateur : lmtb06"));

	compte.addCompteDepensesCommunes(cdc3);

    assert(compte.toString().compare("Pseudo : lmtb06\nPrenom : Moussa\nNom : FAYE\nEmail : moussafaye.m@gmail.com\nHash mot de passe : SHA256-HASH\n------COMPTES DEPENSES COMMUNES------\nIdentifiant : id1\nNom : Compte Depense 1\nDescription : \nDate de creation : Mon Dec  6 19:01:07 2021\nPseudo créateur : lmtb06\n---------\nIdentifiant : id2\nNom : Compte Depense 2\nDescription : \nDate de creation : Mon Dec  6 19:01:07 2021\nPseudo créateur : lmtb06\n---------\nIdentifiant : id3\nNom : Compte Depense 3\nDescription : \nDate de creation : Mon Dec  6 19:01:07 2021\nPseudo créateur : lmtb06"));

}

void TestCompteUtilisateur::testRecupererInfosCompteDepensesCommunes()
{

    //CompteUtilisateur compte = CompteUtilisateur("lmtb", "Elhadji Moussa", "FAYE", "moussafaye.m@gmail.com", "SHA256-HASH");

    //j'ai juste mis en commentaire la syntaxe ci-dessous
    //assert(str1.compare(str2)=0);

    assert(true);

}

void TestCompteUtilisateur::testRecupererComptesDepensesCommunes()
{

    //CompteUtilisateur compte = CompteUtilisateur("lmtb", "Elhadji Moussa", "FAYE", "moussafaye.m@gmail.com", "SHA256-HASH");

    assert(true);

}

void TestCompteUtilisateur::testSetCompteDepensesCommunes()
{

    //CompteUtilisateur compte = CompteUtilisateur("lmtb", "Elhadji Moussa", "FAYE", "moussafaye.m@gmail.com", "SHA256-HASH");

    assert(true);

}