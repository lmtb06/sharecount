#include <iostream>
#include "CompteUtilisateur.hpp"

/**
 * @brief Test de la classe CompteUtilisateur
 *
 * @version 0.1
 *
 * @author Elhadji Moussa FAYE
 */

int main()
{
	CompteUtilisateur c = CompteUtilisateur("lmtb", "Elhadji Moussa", "FAYE", "moussafaye.m@gmail.com", "SHA256-HASH");
	// Test des getters
	std::cout << "Pseudo : " << c.getPseudo() << std::endl
						<< "Prenom : " << c.getPrenom() << std::endl
						<< "Nom : " << c.getNom() << std::endl
						<< "Email : " << c.getEmail() << std::endl
						<< "Hash mot de passe : " << c.getHashMotDePasse() << std::endl;
	// Test des setteurs
	std::cout << "=======Modification infos comptes=======" << std::endl;
	c.setPseudo("lmtb06");
	c.setPrenom("Moussa");
	c.setNom("FAYE");
	c.setEmail("moussafaye.m@gmail.com");
	std::cout << "Pseudo : " << c.getPseudo() << std::endl
						<< "Prenom : " << c.getPrenom() << std::endl
						<< "Nom : " << c.getNom() << std::endl
						<< "Email : " << c.getEmail() << std::endl
						<< "Hash mot de passe : " << c.getHashMotDePasse() << std::endl;

	return 0;
}