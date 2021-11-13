#include "CompteUtilisateur.hpp"

CompteUtilisateur::CompteUtilisateur(std::string pseudo, std::string prenom, std::string nom, std::string email, std::string hashMDP) : ComptePersonnel(pseudo, prenom, nom, email, hashMDP)
{

}
CompteUtilisateur::~CompteUtilisateur()
{
	
}
