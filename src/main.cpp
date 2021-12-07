#include <iostream>
#include "comptes/CompteDepensesCommunes.hpp"
#include "comptes/CompteUtilisateur.hpp"
#include "comptes/ComptePersonnel.hpp"
#include "tests/TestComptePersonnel.hpp"
#include "tests/TestCompteUtilisateur.hpp"
#include "exceptions/ExceptionSauvegardeCompteUtilisateur.hpp"

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

    TestCompteUtilisateur testCompteUtilisateur = TestCompteUtilisateur();
    TestComptePersonnel testComptePersonnel = TestComptePersonnel();

    testCompteUtilisateur.tester();
    testComptePersonnel.tester();

	ExceptionSC exception = ExceptionSC("Exception de test");
	std::cout << exception.what() << std::endl;
	ExceptionSauvegardeCompteUtilisateur exceptionSv = ExceptionSauvegardeCompteUtilisateur();
	std::cout << exceptionSv.what() << std::endl;
	return 0;
}
