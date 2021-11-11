#include "CompteUtilisateur.hpp"

CompteUtilisateur::CompteUtilisateur(std::string pseudo, std::string prenom, std::string nom, std::string email, std::string hashMDP): nom(nom)
{

}

std::string CompteUtilisateur::getNom()
{
	return nom;
}