#include "CompteUtilisateur.hpp"

CompteUtilisateur::CompteUtilisateur(std::string pseudo, std::string prenom, std::string nom, std::string email, std::string hashMDP) : ComptePersonnel(pseudo, prenom, nom, email, hashMDP)
{

}
CompteUtilisateur::~CompteUtilisateur()
{
	
	// On appelle le destructeur de tous les comptes de dépense communes du compte

}

bool CompteUtilisateur::sauvegarder() const
{
	return ComptePersonnel::sauvegarder();
}
