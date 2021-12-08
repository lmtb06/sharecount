#include <iostream>
#include "comptes/CompteDepensesCommunes.hpp"
#include "comptes/CompteUtilisateur.hpp"
#include "comptes/ComptePersonnel.hpp"
<<<<<<< HEAD
#include "gestionnaires/GestionnaireDialogue.hpp"
=======
#include "gestionnaires/GestionnaireSauvegardeFichier.hpp"
>>>>>>> main

/**
 * @brief Test de la classe CompteUtilisateur
 * utiliser la commande make pour creer l'executable (il s'execute automatiquement la première fois)
 *
 * @version 0.3
 *
 * @author Elhadji Moussa FAYE
 */

int main()
{
    // Penser à utiliser un pattern pour pouvoir utiliser les classes même en utilisant le polymorphisme
    CompteUtilisateur compteU1 = CompteUtilisateur("lmtb", "Elhadji Moussa", "FAYE", "moussafaye.m@gmail.com", "SHA256-HASH");
	// Test des getters
    std::cout << compteU1.toString() << std::endl;
	// Test des setteurs
    std::cout << "=======Modification infos comptes=======" << std::endl;
	compteU1.setPseudo("lmtb06");
	compteU1.setPrenom("Moussa");
	compteU1.setNom("FAYE");
	compteU1.setEmail("moussafaye.m@gmail.com");
    std::cout << compteU1.toString() << std::endl;

	CompteDepensesCommunes cdc1 = CompteDepensesCommunes("id1", "Compte Depense 1", "", time(0), compteU1);
	CompteDepensesCommunes cdc2 = CompteDepensesCommunes("id2", "Compte Depense 2", "", time(0), compteU1);
	CompteDepensesCommunes cdc3 = CompteDepensesCommunes("id3", "Compte Depense 3", "", time(0), compteU1);
    std::cout << std::endl;
	compteU1.addCompteDepensesCommunes(cdc1);
	compteU1.addCompteDepensesCommunes(cdc2);
	compteU1.addCompteDepensesCommunes(cdc3);
    std::cout << compteU1.toString() << std::endl;
    

    // Test de fonction "creerCompteUtilisateur" dans GestionnaireDialogue
    // pseudo - seulement des lettres et des chiffres.
    // prenom - contiennent au moins 1 caractère
    // nom - contiennent au moins 1 caractère
    // email - "symboles@symboles.symboles"
    // motDePasse - minimum 8 caractères, au moins 1 chiffre, majuscules, minuscules et un des symboles "!@#$%^&*"
    GestionnaireDialogue gd = GestionnaireDialogue();   // TODO Vérification des entrées; Sauvegarder le compte
    std::cout << "test: Création du compte personnel\n";
    gd.creerCompteUtilisateur("wehddn", "Nicolas", "Graff", "test@test.test", "testTEST1@", "testTEST1@");
    std::cout << "\n";

    // Test de fonction "creerCompteDepensesCommunes" dans GestionnaireDialogue
    std::cout << "test: Création du compte de depenses\n";
    gd.creerCompteDepensesCommunes("Compte1", "Description");
    std::cout << "\n";

    // Test de fonction "consulterCompteDepensesCommunes" dans GestionnaireDialogue
    std::cout << "test: Consulatation du compte de depenses\n";
    CompteUtilisateur compteU = CompteUtilisateur("wehddn", "Nicolas", "GRAFF", "test@test.com", "SHA256-HASH");
    CompteDepensesCommunes cdc = CompteDepensesCommunes("id1", "Compte Depense 1", "", time(0), compteU);
    gd.consulterCompteDepensesCommunes(cdc);
    std::cout << "\n";

    // Test de fonction "consulterListeCompteDepensesCommunes" dans GestionnaireDialogue
    std::cout << "test: Consulatation la liste des comptes de depenses\n";
    gd.consulterListeCompteDepensesCommunes(compteU);

    // Test de fonction "seConnecter" dans GestionnaireDialogue
    std::cout << "test: se connecter\n";
    gd.seConnecter("wehddn", "12345");
    std::cout << "\n";


	ExceptionSC exception = ExceptionSC("Exception de test");
	std::cout << exception.what() << std::endl;
	ExceptionSauvegardeCompteUtilisateur exceptionSv = ExceptionSauvegardeCompteUtilisateur();
	std::cout << exceptionSv.what() << std::endl;
	GestionnaireSauvegardeFichier gs = GestionnaireSauvegardeFichier();
	try
	{
		compteU1.sauvegarder(gs);
	}
	catch (ExceptionSauvegardeCompteUtilisateur e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
