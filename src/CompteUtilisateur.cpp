#include "CompteUtilisateur.hpp"

CompteUtilisateur::CompteUtilisateur(std::string pseudo, std::string prenom, std::string nom, std::string email, std::string hashMDP) : pseudo(pseudo), prenom(prenom), nom(nom), email(email), hashMotDePasse(hashMDP)
{

}
CompteUtilisateur::~CompteUtilisateur()
{
	
}

std::string CompteUtilisateur::getPseudo()
{
	return this->pseudo;
}

std::string CompteUtilisateur::getPrenom()
{
	return this->prenom;
}

std::string CompteUtilisateur::getNom()
{
	return this->nom;
}

std::string CompteUtilisateur::getEmail()
{
	return this->email;
}

std::string CompteUtilisateur::getHashMotDePasse()
{
	return this->hashMotDePasse;
}

void CompteUtilisateur::setPseudo(std::string pseudo)
{
	this->pseudo = pseudo;
}

void CompteUtilisateur::setPrenom(std::string prenom)
{
	this->prenom = prenom;
}

void CompteUtilisateur::setNom(std::string nom)
{
	this->nom = nom;
}

void CompteUtilisateur::setEmail(std::string email)
{
	this->email = email;
}

void CompteUtilisateur::setHashMotDePasse(std::string hashMDP)
{
	this->hashMotDePasse = hashMDP;
}