#include "ComptePersonnel.hpp"


ComptePersonnel::ComptePersonnel(std::string pseudo, std::string prenom, std::string nom, std::string email, std::string hashMDP) : pseudo(pseudo), prenom(prenom), nom(nom), email(email), hashMotDePasse(hashMDP)
{
}

ComptePersonnel::~ComptePersonnel()
{
}

std::string ComptePersonnel::getPseudo() const
{
	return this->pseudo;
}

std::string ComptePersonnel::getPrenom() const
{
	return this->prenom;
}

std::string ComptePersonnel::getNom() const
{
	return this->nom;
}

std::string ComptePersonnel::getEmail() const
{
	return this->email;
}

std::string ComptePersonnel::getHashMotDePasse() const
{
	return this->hashMotDePasse;
}

void ComptePersonnel::setPseudo(std::string pseudo)
{
	this->pseudo = pseudo;
}

void ComptePersonnel::setPrenom(std::string prenom)
{
	this->prenom = prenom;
}

void ComptePersonnel::setNom(std::string nom)
{
	this->nom = nom;
}

void ComptePersonnel::setEmail(std::string email)
{
	this->email = email;
}

void ComptePersonnel::setHashMotDePasse(std::string hashMDP)
{
	this->hashMotDePasse = hashMDP;
}

bool ComptePersonnel::sauvegarder() const
{
	return false;
}