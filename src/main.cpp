#include <iostream>
#include "CompteUtilisateur.hpp"

int main()
{
	CompteUtilisateur c = CompteUtilisateur("Bla", "Mon prenom", "Mon nom", "Blabla", "Blal");
	std::cout << "Hello " << c.getNom() << " !" << std::endl;
	return 0;
}