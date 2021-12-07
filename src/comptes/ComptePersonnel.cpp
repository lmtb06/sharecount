#include "ComptePersonnel.hpp"

ComptePersonnel::ComptePersonnel(const std::string &pseudo, const std::string &prenom, const std::string &nom, const std::string &email, const std::string &hashMDP) : pseudo(pseudo), prenom(prenom), nom(nom), email(email), hashMotDePasse(hashMDP)
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

void ComptePersonnel::setPseudo(const std::string &pseudo)
{
	this->pseudo = pseudo;
}

void ComptePersonnel::setPrenom(const std::string &prenom)
{
	this->prenom = prenom;
}

void ComptePersonnel::setNom(const std::string &nom)
{
	this->nom = nom;
}

void ComptePersonnel::setEmail(const std::string &email)
{
	this->email = email;
}

void ComptePersonnel::setHashMotDePasse(const std::string &hashMDP)
{
	this->hashMotDePasse = hashMDP;
}

std::string ComptePersonnel::toString() const
{
	const std::string resultat = "Pseudo : " + this->pseudo + "\nPrenom : " + this->prenom +
															 +"\nNom : " + this->nom + "\nEmail : " + this->email + "\nHash mot de passe : " + this->hashMotDePasse;
	return resultat;
}