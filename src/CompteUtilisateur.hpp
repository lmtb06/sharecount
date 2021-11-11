#ifndef compte_utilisateur
#define compte_utilisateur

#include <string>

class CompteUtilisateur
{
	std::string nom = NULL;

public:
	CompteUtilisateur(std::string pseudo, std::string prenom, std::string nom, std::string email, std::string hashMDP);
	std::string getNom();
};
#endif